/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ops2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-11 18:05:14 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024-11-11 18:05:14 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_both(t_stack *stack_a, t_stack *stack_b)
{
	rotate(stack_a, 'a', FALSE);
	rotate(stack_b, 'b', FALSE);
	write(1, "rr\n", 3);
}

void	swap_both(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a, 'a', FALSE);
	swap(stack_b, 'b', FALSE);
	write(1, "ss\n", 3);
}

void	reverese_rotate_both(t_stack *stack_a, t_stack *stack_b)
{
	reverse_rotate(stack_a, 'a', FALSE);
	reverse_rotate(stack_b, 'b', FALSE);
	write(1, "rrr\n", 4);
}
