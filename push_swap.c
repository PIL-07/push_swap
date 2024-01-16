/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:46:49 by zbendahh          #+#    #+#             */
/*   Updated: 2023/03/06 13:14:13 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

static void	alloc_stacks(void)
{
	data.stack_a = malloc(sizeof(int) * data.len);
	if (!data.stack_a)
		return ;
	data.stack_b = malloc(sizeof(int) * data.len);
	if (!data.stack_b)
		return ;
}

static void	final(void)
{
	int	i;
	int	min_stack_a;

	i = 0;
	min_stack_a = min_(data.stack_a, data.size_a);
	if (min_stack_a < (data.size_a / 2))
	{
		while (min_stack_a--)
			ra("ra", 1);
	}
	else
	{
		i = -1;
		while (++i < (data.size_a - min_stack_a))
			rra("rra", 1);
	}
}

static void	else_main(void)
{
	int	**arry;
	int	*arry_;
	int	index_of_best_elm;

	push_to_stack_b();
	while (data.size_b != 0)
	{
		arry = data_best_element_();
		arry_ = tab_best_element_(arry);
		index_of_best_elm = min_(arry_, data.size_b);
		push_back_(index_of_best_elm, arry);
		free_int(arry, data.size_b);
		free(arry_);
	}
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
	sorting(str_s, data.len);
	alloc_stacks();
	i = -1;
	while (++i < data.len)
		data.stack_a[i] = ft_atoi(str_s[i]);
	ft_memset(data.stack_b, 0, data.len);
	free(str);
	free_str(str_s, data.len);
}

int	main(int ac, char **av)
{
	if (ac != 1)
	{
		creat_stacks(ac, av);
		data.size_a = data.len;
		data.size_b = 0;
		if ((data.len) == 3)
			three_random_numbers();
		else if ((data.len) == 4)
			four_randome_numbers();
		else if ((data.len) == 5)
			five_randome_numbers();
		else if ((data.len) == 2)
			ra("ra", 1);
		else
			else_main();
		final();
		free(data.stack_b);
		free(data.stack_a);
	}
	else
		error_();
}
