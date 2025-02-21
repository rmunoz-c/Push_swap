/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:43:43 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/10/31 17:14:53 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int	main(void)
{
	char a[10];

	ft_memset(a, 65, 5);
	write (1, a, 5);
	
	ft_bzero(a, 5);

	int count;

	count = 0;
	while (count < 5)
	{
		if (a[count] != '\0')
		{
			write(1, "bzero no funciona", 12);
			return(1);
		}
		count++;
	}
	write (1, "bzero funciona correctamente", 22);
	return (0);
}*/
