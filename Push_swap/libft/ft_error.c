/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-14 15:21:08 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024-11-14 15:21:08 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(char *msg, t_bool b)
{
	write (2, msg, ft_strlen(msg));
	if (b == TRUE)
		exit(EXIT_FAILURE);
}
