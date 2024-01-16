/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:29:01 by zbendahh          #+#    #+#             */
/*   Updated: 2023/03/06 13:12:41 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	error_(void)
{
	write(1, "Error", 6);
	exit(1);
}

void	space_(char **av, int i)
{
	size_t	j;

	j = 0;
	if (!av[i][0])
		error_();
	while (1)
	{
		if (!av[i][j])
			error_();
		else if (ft_isdigit(av[i][j]) == 1)
			break ;
		j++;
	}
}

void	check_not_char(char *str)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if ((str[i] == '-' || str[i] == '+') && (ft_isdigit(str[i + 1]) == 1))
			i++;
		else if (ft_isdigit(str[i]) == 1 || str[i] == ' ')
			i++;
		else
			error_();
	}
}

int	sorting(char **str, int ac)
{
	int	i;

	i = 0;
	while (str[i + 1] && i < ac)
	{
		if (ft_atoi(str[i]) < ft_atoi(str[i + 1]))
			i++;
		else
			return (0);
	}
	exit(1);
}

void	recurrence(char **str, int ac)
{
	int	i;
	int	j;

	i = 0;
	while (str[i + 1] && i < ac)
	{
		j = i + 1;
		while (str[j])
		{
			if (ft_atoi(str[i]) == ft_atoi(str[j]))
				error_();
			j++;
		}
		i++;
	}
}
