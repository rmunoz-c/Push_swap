/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:44:30 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/09/30 20:57:41 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	ft_print_list(void *content)
{
	printf("%s\n", (char *)content);
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/*int main(void)
{
	t_list	*list = NULL;

	ft_lstadd_back(&list, ft_lstnew(strdup("Primer nodo")));
    ft_lstadd_back(&list, ft_lstnew(strdup("Segundo nodo")));
    ft_lstadd_back(&list, ft_lstnew(strdup("Tercer nodo")));

	ft_lstiter(list, ft_print_list);

	return (0);
}*/