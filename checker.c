/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 20:39:51 by ckrommen          #+#    #+#             */
/*   Updated: 2018/10/17 15:00:15 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checker(t_stack *a, t_stack *b)
{
	char *line;

	while (get_next_line(0, &line) > 0)
	{
		if (!ft_strcmp(line, "Error"))
			return (0);
		if (!ft_strcmp(line, "pa"))
			push_a(&a, &b);
		else if (!ft_strcmp(line, "ra"))
			rot_a(&a);
		else if (!ft_strcmp(line, "pb"))
			push_b(&a, &b);
	}                          
	if (check_sort(a))
		return (1);
	else
		return (0);
}

int	check_stack(int argc, char **arg)
{
	t_stack *a;
	t_stack *b;
	int i;

	i = 2;
	b = NULL;
	if (!check_error(argc, arg))
		return (0);
	else
		a = create_stack(ft_atoi(arg[1]));
	while (arg[i])
	{
		a = push_stack(a, create_stack(ft_atoi(arg[i])));
		i++;
	}
	return (checker(a, b));
}

int main(int argc, char **argv)
{
	if (argc >= 2)
	{
		if (!check_stack(argc, argv))
			ft_printf("KO\n");
		else
			ft_printf("OK\n");
	}
	else
		ft_printf("Error\n");
	return (1);
}
