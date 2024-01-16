/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_random_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 19:49:46 by zbendahh          #+#    #+#             */
/*   Updated: 2023/03/03 15:36:00 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	four_randome_numbers(void)
{
	int	min;
	int	i;

	min = min_(data.stack_a, data.size_a);
	i = -1;
	if (min <= data.size_a / 2)
	{
		while (++i != min)
			ra("ra", 1);
	}
	else
	{
		i = data.size_a - 1;
		while (i-- >= min)
			rra("rra", 1);
	}
	pb("pb", 1);
	three_random_numbers();
	pa("pa", 1);
}
