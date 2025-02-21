/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 13:23:24 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/10/01 17:12:09 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[len]);
	while (len > 0)
	{
		len--;
		if (s[len] == (char)c)
			return ((char *)&s[len]);
	}
	if (s[len] == (char)c)
		return ((char *)&s[len]);
	return (NULL);
}

/*int	main(void)
{
	char str[] = "Hola que tal?";
	char *result;

	result = ft_strrchr(str, 'a');

	if (result)
		write(1, result, ft_strlen(result));
	else
		write(1, "No encontrado", 14);
	return (0);
}*/
