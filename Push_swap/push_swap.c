/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-14 14:56:33 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024-11-14 14:56:33 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_push_swap(t_stack *stack_a, t_stack *stack_b, int *n, int c)
{
	int		i;
	t_node	*temp;

	stack_a->head = NULL;
	stack_a->size = 0;
	stack_b->head = NULL;
	stack_b->size = 0;
	i = c - 1;
	while (i >= 0)
	{
		push_stack(stack_a, 0, n[i]);
		i--;
	}
	ft_quicksort(n, 0, c - 1);
	temp = stack_a->head;
	while (temp)
	{
		temp->s_index = ft_index(temp->data, n);
		temp = temp->next;
	}
}

int	main(int argc, char **argv)
{
	int		*c;
	int		count;
	int		len;
	t_stack	stack_a;
	t_stack	stack_b;

	len = 0;
	argv++;
	count = check_digits(argc, argv);
	c = parse_input(argc, argv, count, &len);
	if (count < 2 || check_repeated(c, count))
	{
		free (c);
		if (!argv[0])
			return (ft_putstr_fd("", 1), 0);
		if (count == 1 || count == 0)
			ft_error("", TRUE);
		ft_error("Error\n", TRUE);
	}
	init_push_swap(&stack_a, &stack_b, c, count);
	sort(&stack_a, &stack_b, c, count);
	free(c);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
