/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:29:49 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/10/01 16:38:24 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
		return (c);
	}
	return (c);
}
/*int main(void)
{
	int	i;
	int c;
	
	i = 0;
    while (i <= 47)
    {
        c = ft_toupper(i);
		printf("%d\n", c);
        i++;
    }
	
	return (0);
}*/