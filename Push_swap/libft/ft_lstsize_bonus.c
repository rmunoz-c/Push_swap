/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:36:59 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/09/30 18:55:42 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	if (!lst)
		return (0);
	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*int main(void)
{
    t_list *list = NULL;

    list = ft_lstnew("Nodo 1");
    ft_lstadd_front(&list, ft_lstnew("Nodo 2")); 
    ft_lstadd_front(&list, ft_lstnew("Nodo 3")); 

    int size = ft_lstsize(list);
    printf("El tamaño de la lista es: %d\n", size);

    while (list)
    {
        t_list *free_list = list;
        list = list->next;
        free(free_list);
    }
}*/