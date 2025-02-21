/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:10:00 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/09/30 15:44:41 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	ft_add_count(unsigned int n, char *c)
{
        int	count;

	count = 2;	
	*c = *c + count;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	count;

	if (!s || !f)
		return ;
	count = 0;
	while (s[count] != '\0')
	{
		f(count, &s[count]);
		count++;
	}
}

/*int	main(void)
{
	char str[] = "Hola que tal?";

	ft_striteri(str, ft_add_count);
        
	printf("La cadena después de la función: %s\n", str);

	return (0);
}*/
