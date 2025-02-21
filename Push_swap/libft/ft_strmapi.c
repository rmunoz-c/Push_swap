/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:41:40 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/10/01 16:41:21 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*static char	ft_add_count(unsigned int n, char c)
{
	int	count;

	count = 2;
	return (c + count);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			len;
	unsigned int	count;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	count = 0;
	while (count < len)
	{
		str[count] = f(count, s[count]);
		count++;
	}
	str[count] = '\0';
	return (str);
}

/*int	main(void)
{
	char *result;
	
	result = ft_strmapi("Hola que tal?", ft_add_count);

	if (result)
	{
		printf("La cadena después de la función: %s\n", result);
		free (result);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}*/
