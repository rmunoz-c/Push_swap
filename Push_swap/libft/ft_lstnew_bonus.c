/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:25:30 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/09/30 18:25:31 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(1 * sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*int main (void)
{
	t_list *nodo = ft_lstnew("Hola mundo");

	if (nodo == NULL)
	{
		printf("Error\n");
		return (1);
	}

	printf("Nodo: %s\n", (char *)nodo->content);
	free(nodo);

	return(0);
}*/