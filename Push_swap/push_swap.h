/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-11 16:00:52 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024-11-11 16:00:52 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "libft/libft.h"

typedef struct s_node
{
	int				data;
	int				s_index;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node			*head;
	int				size;
}					t_stack;

/*ps_stack.c*/
void	push_stack(t_stack *stack, int index, int data);
int		del_stack(t_stack *stack);

/*ps_ops y ps_ops2.c*/
void	swap(t_stack *stack, char x, t_bool b);
void	push(t_stack *stack1, t_stack *stack2, char x, t_bool b);
void	rotate(t_stack *stack, char x, t_bool b);
void	reverse_rotate(t_stack *stack, char x, t_bool b);
void	rotate_both(t_stack *stack_a, t_stack *stack_b);
void	swap_both(t_stack *stack_a, t_stack *stack_b);
void	reverese_rotate_both(t_stack *stack_a, t_stack *stack_b);

/*ps_sort.c*/
int		is_rot_sort(t_stack *stack, int min_s_index);
void	simple_sort(t_stack *stack, int length);
void	s_insertion_sort(t_stack *stack_a, t_stack *stack_b, int length);
void	k_sort1(t_stack *stack_a, t_stack *stack_b, int length);
void	k_sort2(t_stack *stack_a, t_stack *stack_b, int length);

/*ps_sort2.c*/
int		get_min_index(t_stack *stack);
int		count_r(t_node *stack, int index);
int		is_sorted(t_stack *stack);
void	free_stack(t_stack *stack);
void	sort(t_stack *stack_a, t_stack *stack_b, int *numbers, int length);

/*ft_parsing.c*/
int		check_digits(int ac, char **av);
int		check_limits(char **s, int n);
int		*parse_input(int ac, char **av, int count, int *len);
int		*init_parser(int *i, int *j, int count);
int		check_repeated(int *array, int len);

/*push_swap.c*/
void	init_push_swap(t_stack *stack_a, t_stack *stack_b, int *n, int c);
int		main(int ac, char **av);

#endif