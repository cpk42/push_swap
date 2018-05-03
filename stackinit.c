/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackinit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 20:11:38 by ckrommen          #+#    #+#             */
/*   Updated: 2018/05/02 21:31:45 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack		*create_stack(int data)
{
	t_stack *stack;

	stack = malloc(sizeof(t_stack));
	stack->data = data;
	stack->next = NULL;
	return (stack);
}

t_stack		*push_stack(t_stack *a, t_stack *elem)
{
	elem->next = a;
	return (elem);
}

t_stack		*pop_stack(t_stack *stack)
{
	t_stack		*elem;

	if (!stack)
		return (NULL);
	if (stack->next)
	{
		elem = stack;
		stack = stack->next;
		elem->next = NULL;
	}
	else
	{
		elem = stack;
		elem->next = NULL;
		stack = NULL;
	}
	return (elem);
}

int		count_stack(t_stack *stack)
{
	int i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}
