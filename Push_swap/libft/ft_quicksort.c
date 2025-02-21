/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-19 15:01:38 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024-11-19 15:01:38 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static int	partition(int *array, int low, int high)
{
	int	p;
	int	i;
	int	j;

	p = array[high];
	i = low;
	j = low - 1;
	while (i < high)
	{
		if (array[i] <= p)
		{
			j++;
			swap(&array[j], &array[i]);
		}
		i++;
	}
	swap(&array[j + 1], &array[high]);
	return (j + 1);
}

void	ft_quicksort(int *array, int low, int high)
{
	int	p;

	if (low < high)
	{
		p = partition(array, low, high);
		ft_quicksort(array, low, p - 1);
		ft_quicksort(array, p + 1, high);
	}
}
