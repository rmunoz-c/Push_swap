/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:15:51 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/09/30 19:14:03 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	if (*lst)
		new->next = *lst;
	*lst = new;
}

/*int main(void)
{
	t_list *list = NULL;

	t_list *node1 = ft_lstnew("Primer nodo");
	t_list *node2 = ft_lstnew("Segundo nodo");
	t_list *node3 = ft_lstnew("Tercer nodo");

	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);

	t_list *list2 = list;

	while (list2)
	{
		printf("%s\n", (char *)list2-> content);
		list2 = list2->next;
	}

	while (list)
	{
		t_list *free_list = list;
		list = list->next;
		free(free_list);
	}

	return (0);
}*/