/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:56:56 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024/10/01 16:41:44 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
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
        c = ft_tolower(i);
		printf("%d\n", c);
        i++;
    }
	
	return (0);
}*/