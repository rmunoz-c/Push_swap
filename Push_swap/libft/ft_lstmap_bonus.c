/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:59:36 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/10/01 21:14:42 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void *ft_dup(void *content)
{
    return (ft_strdup((char *)content));
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (lst == NULL || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(NULL);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node->content = f(lst->content);
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*int main(void)
{
	t_list *list = NULL;

	ft_lstadd_back(&list, ft_lstnew(strdup("Primer nodo")));
    ft_lstadd_back(&list, ft_lstnew(strdup("Segundo nodo")));
    ft_lstadd_back(&list, ft_lstnew(strdup("Tercer nodo")));

	t_list *new_list = ft_lstmap(list, ft_dup, &free);

	t_list *list2 = new_list;
	while (list2)
	{
		printf("%s\n", (char *)list2->content);
		list2 = list2->next;
	}

	ft_lstclear(&list, &free);
    ft_lstclear(&new_list, &free);

	return (0);
}*/