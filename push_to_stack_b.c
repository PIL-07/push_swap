/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_stack_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:54:32 by zbendahh          #+#    #+#             */
/*   Updated: 2023/02/23 23:29:50 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_sort_in_stack_a(void)
{
	int	j;

	j = 0;
	while (j < data.size_list_sortin)
	{
		if (data.stack_a[0] != data.list_sortin[j])
			j++;
		else
			return (1);
	}
	return (0);
}

void	push_to_stack_b(void)
{
	int	i;

	i = 0;
	longest_();
	sub_sequence_();
	list_sortin_();
	while (i < data.len)
	{
		if (list_sort_in_stack_a() == 0)
			pb("pb", 1);
		else if (list_sort_in_stack_a() == 1)
			ra("ra", 1);
		i++;
	}
	free(data.sub_sequence);
	free(data.list_sortin);
	free(data.longest);
}
