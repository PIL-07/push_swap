/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 21:09:04 by zbendahh          #+#    #+#             */
/*   Updated: 2023/03/06 10:48:01 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include "get_next_line/get_next_line.h"

static int	sorting_(int *arry, int len)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if (arry[i] < arry[i + 1])
			i++;
		else
			return (0);
	}
	return (1);
}

static void	creat_stacks(int ac, char **av)
{
	int		i;
	char	*str;
	char	**str_s;

	i = 0;
	str = NULL;
	while (++i < ac)
	{
		space_(av, i);
		str = ft_strjoin(str, av[i]);
		str = ft_strjoin(str, " ");
	}
	data.len = col(str, ' ');
	check_not_char(str);
	str_s = ft_split(str, ' ');
	recurrence(str_s, data.len);
	data.stack_a = malloc(sizeof(int) * data.len);
	data.stack_b = malloc(sizeof(int) * data.len);
	i = -1;
	while (++i < data.len)
		data.stack_a[i] = ft_atoi(str_s[i]);
	ft_memset(data.stack_b, 0, data.len);
	free(str);
	free_str(str_s, data.len);
}

static void	checker(char *line)
{
	if (!ft_strcmp(line, "ra\n"))
		ra("", 0);
	else if (!ft_strcmp(line, "rra\n"))
		rra("", 0);
	else if (!ft_strcmp(line, "rrr\n"))
		rrr("", 0);
	else if (!ft_strcmp(line, "rb\n"))
		rb("", 0);
	else if (!ft_strcmp(line, "rrb\n"))
		rrb("", 0);
	else if (!ft_strcmp(line, "rr\n"))
		rr("", 0);
	else if (!ft_strcmp(line, "pa\n"))
		pa("", 0);
	else if (!ft_strcmp(line, "pb\n"))
		pb("", 0);
	else if (!ft_strcmp(line, "sa\n"))
		sa("", 0);
	else if (!ft_strcmp(line, "sb\n"))
		sb("", 0);
	else if (!ft_strcmp(line, "ss\n"))
		ss("", 0);
	else
		error_();
}

int	main(int ac, char **av)
{
	char	*line;

	if (ac > 1)
	{
		creat_stacks(ac, av);
		data.size_a = data.len;
		data.size_b = 0;
		while (1)
		{
			line = get_next_line(0);
			if (line == NULL)
				break ;
			checker(line);
			free(line);
		}
	}
	if (sorting_(data.stack_a, data.len) == 1 && data.size_b == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	free(data.stack_b);
	free(data.stack_a);
}
