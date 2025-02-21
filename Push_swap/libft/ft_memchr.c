/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:31:23 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/09/30 15:44:41 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*str;

	str = (unsigned char *)s;
	c = (unsigned char)c;
	count = 0;
	while (count < n)
	{
		if (str[count] == c)
			return ((void *)(str + count));
		count++;
	}
	return (0);
}

/*int	main(void)
{
	const char *str = "Hola que tal?";
	char c = 'a';
	size_t n = 14;

	char *result = (char *)ft_memchr(str, c, n);

	if (result)
		write (1, result, 1);
	else
		write(1, "No encontrado", 13);
	return (0);
}*/
