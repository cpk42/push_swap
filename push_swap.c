/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 19:45:04 by ckrommen          #+#    #+#             */
/*   Updated: 2018/10/17 15:00:08 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		push_swap(t_stack *a, t_stack *b)
{
	int i;

	if (check_sort(a))
		return (1);
	while (count_stack(a) > 0)
	{
		i = find_highest(a);
		if (a->data == i)
		{
			ft_printf("pb\n");
			push_b(&a, &b);
		}
		else
		{
			ft_printf("ra\n");
			rot_a(&a);
		}
	}
	while (count_stack(b) > 0)
	{
		ft_printf("pa\n");
		push_a(&a, &b);
	}
	return (1);
}

int		build_stacks(int argc, char **arg)
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
	push_swap(a, b);
	return (1);
}

int main(int argc, char **argv)
{
	if (argc >= 2)
		return (build_stacks(argc, argv));
	else
		ft_printf("Error\n");
	return (1);
}
