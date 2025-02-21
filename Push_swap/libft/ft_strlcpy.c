/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:42:07 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/10/01 16:55:47 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	count;
	size_t			len;

	count = 0;
	len = ft_strlen(src);
	if (!size)
		return (len);
	if (!dst)
		return (0);
	while (src[count] && count < (size - 1))
	{
		dst[count] = src [count];
		count++;
	}
	dst[count] = '\0';
	return (len);
}

//#include <bsd/string.h>

/*int	main(void)
{
	char src[] = "Hola que tal?";
	char dst[20];
	size_t len;

	len = ft_strlcpy(dst, src, 13);

	printf("%ld", len);
	return (0);
}*/
