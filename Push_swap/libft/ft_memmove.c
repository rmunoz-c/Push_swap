/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:30:29 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/10/01 17:25:55 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	count;

	if (!dest && !src)
		return (NULL);
	if ((unsigned char *)src < (unsigned char *)dest)
	{
		count = n;
		while (count > 0)
		{
			count--;
			((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
		}
	}
	else
	{
		count = 0;
		while (count < n)
		{
			((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
			count++;
		}
	}
	return (dest);
}

/*int	main(void)
{
	char src[] = "EstoEsUnTestDeMemMOVE";
	char dest[] = "Hola que tal?";

	ft_memmove(dest, src, 19);

	write(1, dest, 14);
	return (0);
}*/
