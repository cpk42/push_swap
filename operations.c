/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 20:13:54 by ckrommen          #+#    #+#             */
/*   Updated: 2018/05/02 20:25:50 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		swap(t_stack **stack)
{
	t_stack *head;

	if (count_stack(*stack) <= 1)
		return ;
	else
	{
		head = (*stack)->next;
		(*stack)->next = (*stack)->next->next;
		head->next = *stack;
		*stack = head;
	}
}

void		push(t_stack **src, t_stack **dest)
{
	t_stack *top;
	t_stack *ptr;
	int i;

	if (!*src)
		return ;
	else
	{
		i = count_stack(*src);
		if (i >= 1)
			ptr = (*src)->next;
		top = pop_stack(*src);
		if (i <= 1)
			*src = NULL;
		else
			*src = ptr;
		*dest = push_stack(*dest, top);
	}
}

void		rotate(t_stack **a)
{
	t_stack	*head;

	if (!*a || (*a && !(*a)->next))
		return ;
	else
	{
		head = *a;
		while ((*a)->next)
			*a = (*a)->next;
		(*a)->next = head;
		head = head->next;
		(*a)->next->next = NULL;
		*a = head;
	}
}

void		rev_rotate(t_stack **a)
{
	t_stack	*head;
	t_stack *ptr;

	if (!*a || (*a && !(*a)->next))
		return ;
	else
	{
		head = (*a);
		while ((*a)->next)
		{
			if (!(*a)->next->next)
				ptr = *a;
			*a = (*a)->next;
		}
		(*a)->next = head;
		ptr->next = NULL;
	}
}

void	revrot_ab(t_stack **a, t_stack **b)
{
	rev_rotate(a);
	rev_rotate(b);
}
