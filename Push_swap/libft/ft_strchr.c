/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:50:08 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/10/01 17:11:48 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	count;

	count = 0;
	while (s[count])
	{
		if (s[count] == (char)c)
			return ((char *)&s[count]);
		count++;
	}
	if ((char)c == '\0')
		return ((char *)&s[count]);
	return (NULL);
}

/*int	main(void)
{
	char str[] = "teste";
	char *result;

	printf("%p\n", str);
	result = ft_strchr(str, 1024);

	printf("%p\n", result);

	char *result2;
	result2 = strchr(str, 1024);

	printf("%p", result2);

	return (0);
}*/
