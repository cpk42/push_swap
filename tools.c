/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 20:14:40 by ckrommen          #+#    #+#             */
/*   Updated: 2018/05/02 22:57:13 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_error(int argc, char **arg)
{
	int *used;
	int i;
	int x;

	x = 0;
	i = 1;
	used = (int *)malloc(sizeof(int) * argc);
	ft_bzero(used, argc);
	while (arg[i])
	{
		if (!ft_isnum(arg[i]) || !check_dupes(used, ft_atoi(arg[i]), x))
		{
			ft_printf("Error\n");
			return (0);
		}
		used[x] = ft_atoi(arg[i]);
		x++;
		i++;
	}
	free(used);
	return (1);
}

int		check_dupes(int *arr, int i, int x)
{
	while (x--)
	{
		if (*arr == i)
			return (0);
		arr++;
	}
	return (1);
}

int		ft_isnum(char *str)
{
	while (*str)
	{
		if (!ft_isdigit(*str) && *str != '-')
			return (0);
		str++;
	}
	return (1);
}

int		find_highest(t_stack *a)
{
	int i;

	i = a->data;
	while (a)
	{
		if (a->data > i)
			i = a->data;
		a = a->next;
	}
	return (i);
}

int		check_sort(t_stack *a)
{
	int i;

	i = count_stack(a);
	while (--i)
	{
		if (a->data >= a->next->data)
			a = a->next ;
		else
			return (0);
	}
	return (1);
}
