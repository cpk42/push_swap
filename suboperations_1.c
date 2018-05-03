/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suboperations_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 23:56:00 by ckrommen          #+#    #+#             */
/*   Updated: 2018/05/02 19:34:53 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack **a)
{
	swap(a);
}

void	swap_b(t_stack **b)
{
	swap(b);
}

void	swap_ab(t_stack **a, t_stack **b)
{
	swap(a);
	swap(b);
}

void	revrot_a(t_stack **a)
{
	rev_rotate(a);
}

void	revrot_b(t_stack **b)
{
	rev_rotate(b);
}
