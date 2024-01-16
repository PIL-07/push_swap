/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_random_numbers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 13:59:09 by zbendahh          #+#    #+#             */
/*   Updated: 2023/02/21 10:55:00 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	else_(void)
{
	if (data.stack_a[0] > data.stack_a[1]
		&& data.stack_a[1] < data.stack_a[2]
		&& data.stack_a[0] > data.stack_a[2])
		ra("ra", 1);
	else if (data.stack_a[0] < data.stack_a[1]
		&& data.stack_a[1] > data.stack_a[2]
		&& data.stack_a[0] < data.stack_a[2])
	{
		sa("sa", 1);
		ra("ra", 1);
	}
	else if (data.stack_a[0] < data.stack_a[1]
		&& data.stack_a[1] > data.stack_a[2]
		&& data.stack_a[0] > data.stack_a[2])
		rra("rra", 1);
}

void	three_random_numbers(void)
{
	if (data.stack_a[0] > data.stack_a[1]
		&& data.stack_a[1] < data.stack_a[2]
		&& data.stack_a[0] < data.stack_a[2])
		sa("sa", 1);
	else if (data.stack_a[0] > data.stack_a[1]
		&& data.stack_a[1] > data.stack_a[2]
		&& data.stack_a[0] > data.stack_a[2])
	{
		sa("sa", 1);
		rra("rra", 1);
	}
	else
		else_();
}
