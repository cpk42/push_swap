/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suboperations_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 16:00:31 by ckrommen          #+#    #+#             */
/*   Updated: 2018/05/02 20:54:49 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack **a, t_stack **b)
{
	push(b, a);
}

void	push_b(t_stack **a, t_stack **b)
{
	push(a, b);
}

void	rot_a(t_stack **a)
{
	rotate(a);
}

void	rot_b(t_stack **b)
{
	rotate(b);
}

void	rot_ab(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
}
