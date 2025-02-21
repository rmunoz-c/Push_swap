/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-14 16:26:46 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024-11-14 16:26:46 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoll(const char *nptr)
{
	size_t	count;
	long	result;
	int		sign;

	count = 0;
	result = 0;
	sign = 1;
	while (nptr[count] == ' ' || (nptr[count] >= 9 && nptr[count] <= 13))
		count++;
	if (nptr[count] == '-' || nptr[count] == '+')
	{
		if (nptr[count] == '-')
			sign = -1;
		count++;
	}
	while (ft_isdigit(nptr[count]))
		result = result * 10 + (nptr[count++] - '0');
	return (result * sign);
}
