/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckrommen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 20:07:35 by ckrommen          #+#    #+#             */
/*   Updated: 2018/05/02 22:57:18 by ckrommen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct		s_stack
{
	int				data;
	struct s_stack	*next;
}					t_stack;

/*
** Initialize linked list and helper inits
*/
t_stack				*create_stack(int data);
t_stack				*push_stack(t_stack *a, t_stack *elem);
t_stack				*pop_stack(t_stack *stack);
int					build_stacks(int argc, char **arg);
int					count_stack(t_stack *stack);

/*
** Sorting operations
*/

void				swap(t_stack **stack);
void				push(t_stack **src, t_stack **dest);
void				rotate(t_stack **a);
void				rev_rotate(t_stack **a);

/*
** Sorting suboperations
*/

void				swap_a(t_stack **a);
void				swap_b(t_stack **b);
void				swap_ab(t_stack **a, t_stack **b);
void				push_a(t_stack **a, t_stack **b);
void				push_b(t_stack **a, t_stack **b);
void				rot_a(t_stack **a);
void				rot_b(t_stack **b);
void				rot_ab(t_stack **a, t_stack **b);
void				revrot_a(t_stack **a);
void				revrot_b(t_stack **b);
void				revrot_ab(t_stack **a, t_stack **b);

/*
** Checker functions
*/

int					check_stack(int argc, char **argv);
int					checker(t_stack *a, t_stack *b);

/*
** Extra tools
*/

int					check_dupes(int *arr, int i, int x);
int					ft_isnum(char *str);
int					check_error(int argc, char **arg);
int					find_highest(t_stack *a);
int					check_sort(t_stack *a);
#endif
