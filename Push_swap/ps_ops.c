/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_ops.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-11 16:17:44 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024-11-11 16:17:44 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack, char x, t_bool b)
{
	t_node	*temp;

	if (stack->head == NULL || stack->head->next == NULL)
		return ;
	temp = stack->head;
	stack->head = temp->next;
	temp->next = stack->head->next;
	stack->head->next = temp;
	if (b)
	{
		write(1, "s", 1);
		write(1, &x, 1);
		write(1, "\n", 1);
	}
}

void	push(t_stack *stack1, t_stack *stack2, char x, t_bool b)
{
	int	index;
	int	data;

	if (stack1->head == NULL)
		return ;
	index = stack1->head->s_index;
	data = del_stack(stack1);
	push_stack(stack2, index, data);
	if (b)
	{
		write(1, "p", 1);
		write(1, &x, 1);
		write(1, "\n", 1);
	}
}

void	rotate(t_stack *stack, char x, t_bool b)
{
	t_node	*temp;
	t_node	*current;

	if (stack->head == NULL || stack->head->next == NULL)
		return ;
	temp = stack->head;
	stack->head = temp->next;
	current = stack->head;
	while (current->next != NULL)
		current = current->next;
	current->next = temp;
	temp->next = NULL;
	if (b)
	{
		write(1, "r", 1);
		write(1, &x, 1);
		write(1, "\n", 1);
	}
}

void	reverse_rotate(t_stack *stack, char x, t_bool b)
{
	t_node	*temp;
	t_node	*current;

	if (stack->head == NULL || stack->head->next == NULL)
		return ;
	current = stack->head;
	while (current->next->next != NULL)
		current = current->next;
	temp = current->next;
	current->next = NULL;
	temp->next = stack->head;
	stack->head = temp;
	if (b)
	{
		write(1, "rr", 2);
		write(1, &x, 1);
		write(1, "\n", 1);
	}
}
