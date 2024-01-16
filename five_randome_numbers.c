/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_randome_numbers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:48:20 by zbendahh          #+#    #+#             */
/*   Updated: 2023/03/03 15:35:53 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	five_randome_numbers(void)
{
	int	min;
	int	i;
	int	j;

	i = -1;
	while (++i < 2)
	{
		min = min_(data.stack_a, data.size_a);
		j = -1;
		if (min <= data.size_a / 2)
		{
			while (++j != min)
				ra("ra", 1);
		}
		else
		{
			j = data.size_a - 1;
			while (j-- >= min)
				rra("rra", 1);
		}
		pb("pb", 1);
	}
	three_random_numbers();
	pa("pa", 1);
	pa("pa", 1);
}
