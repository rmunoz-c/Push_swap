/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:19:40 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/09/30 15:44:41 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	count;
	size_t			len1;
	size_t			len2;

	count = 0;
	len1 = ft_strlen(src);
	if (size == 0)
		return (len1);
	len2 = ft_strlen(dst);
	if (!size)
		return (size + len1);
	while (src[count] && (count + len2 < size -1))
	{
		dst[len2 + count] = src[count];
		count++;
	}
	dst[len2 + count] = '\0';
	if (len2 < size)
		return (len2 + len1);
	return (size + len1);
}
//#include <bsd/string.h> This librery is for the original function strlcat
/*int	main(void)
{
	char src[] = "Hola que tal?";
	char dst[] = "Muy bien";
	size_t len;

	len = ft_strlcat(NULL, src, 0);

	//write(1, dst, len);
	printf("%ld", len);
	return (0);
}*/
