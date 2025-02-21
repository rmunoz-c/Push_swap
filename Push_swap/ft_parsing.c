/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmunoz-c <rmunoz-c@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-14 15:29:47 by rmunoz-c          #+#    #+#             */
/*   Updated: 2024-11-14 15:29:47 by rmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_digits(int ac, char **av)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	while (i < ac - 1)
	{
		j = 0;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]) && av[i][j] != ' ' && av[i][j] != '-'
				&& av[i][j] != '+')
				ft_error("Error\n", TRUE);
			if (((av[i][j] == '-') && !ft_isdigit(av[i][j + 1])) 
				|| ((av[i][j] == '+') && !ft_isdigit(av[i][j + 1])))
				ft_error("Error\n", TRUE);
			if (ft_isdigit(av[i][j]) && (av[i][j + 1] == ' '
				|| av[i][j + 1] == '\0'))
				count += 1;
			j++;
		}
		i++;
	}
	return (count);
}

int	check_limits(char **s, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (ft_strlen(s[i]) > 11 || ft_atoll(s[i]) > INT_MAX
			|| ft_atoll(s[i]) < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	check_repeated(int *array, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (array[i] == array[j])
			{
				free(array);
				ft_error("Error\n", TRUE);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	*init_parser(int *i, int *j, int count)
{
	int	*n;

	n = (int *)malloc(sizeof(int) * count + 1);
	if (!n)
		exit(1);
	*i = 0;
	*j = 0;
	return (n);
}

int	*parse_input(int ac, char **av, int count, int *len)
{
	int		i;
	int		j;
	char	**args;
	int		*n;

	n = init_parser(&i, &j, count);
	while (i < ac - 1)
	{
		args = ft_split (av[i++], ' ');
		if (!args || check_limits(args, ft_arraylen(args)))
		{
			ft_free_array(args);
			free(n);
			ft_error("", 1);
		}
		j = 0;
		while (args[j])
		{
			n[*len] = ft_atoi(args[j++]);
			*len = *len + 1;
		}
		ft_free_array(args);
	}
	return (n);
}
