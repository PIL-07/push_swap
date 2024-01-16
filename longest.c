/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   longest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:20:37 by zbendahh          #+#    #+#             */
/*   Updated: 2023/02/23 23:26:29 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

static int	max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

void	longest_(void)
{
	int	i;
	int	j;

	i = 1;
	data.longest = malloc(sizeof(int) * data.len);
	if (!data.longest)
		return ;
	ft_memset(data.longest, 1, data.len);
	while (i < data.len)
	{
		j = 0;
		while (j != i)
		{
			if (data.stack_a[i] > data.stack_a[j])
			{
				data.longest[i] = max(data.longest[j] + 1, data.longest[i]);
				j++;
			}
			else
				j++;
		}
		i++;
	}
}

void	sub_sequence_(void)
{
	int	i;
	int	j;

	i = 1;
	data.sub_sequence = malloc(sizeof(int) * data.len);
	if (!data.sub_sequence)
		return ;
	data.sub_sequence[0] = 0;
	while (i < data.len)
	{
		j = i -1;
		while (j != 0 && data.longest[i] -1 != data.longest[j])
		{
			j--;
		}
		data.sub_sequence[i] = j;
		i++;
	}
}

void	list_sortin_(void)
{
	int	i;
	int	max_longest;

	i = 1;
	max_longest = max_(data.longest, data.len);
	data.size_list_sortin = data.longest[max_longest] - 1;
	data.list_sortin = malloc(sizeof(int) * data.size_list_sortin);
	if (!data.list_sortin)
		return ;
	data.list_sortin[0] = data.stack_a[max_longest];
	while (data.sub_sequence[max_longest] != 0)
	{
		data.list_sortin[i] = data.stack_a[data.sub_sequence[max_longest]];
		max_longest = data.sub_sequence[max_longest];
		i++;
	}
}
