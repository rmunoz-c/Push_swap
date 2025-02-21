/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:38:36 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/10/01 16:48:59 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		len;

	len = ft_strlen(s) + 1;
	str = (char *)malloc(len);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, len);
	return (str);
}

/*int	main(void)
{
	const char *og = NULL;
	char *dup;

	dup = ft_strdup(og);
	if (!dup)
	{
		printf("No se ha podido duplicar.\n");
		return (1);
	}

	printf("Cadena original: %s\n", og);
	printf("Cadena duplicada: %s\n", dup);

	free(dup);	
	return  (0);
}*/
