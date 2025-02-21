/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:56:27 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/09/30 19:05:58 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*int main(void)
{
    t_list *list = NULL;

 	list = ft_lstnew("Nodo 1");
    ft_lstadd_front(&list, ft_lstnew("Nodo 2")); 
    ft_lstadd_front(&list, ft_lstnew("Nodo 3"));

    t_list *last = ft_lstlast(list);
    if (last)
    {
        printf("El contenido del último es: %s\n", (char *)last->content);
    }
    else
    {
        printf("La lista está vacía.\n");
    }

    while (list)
    {
        t_list *free_list = list;
        list = list->next;
        free(free_list);
    }

    return 0;
}*/