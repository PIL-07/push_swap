/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:05:17 by zbendahh          #+#    #+#             */
/*   Updated: 2023/02/23 22:40:17 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack_b_push_to_stack_a(void)
{
	int	i;

	i = 0;
	while (i < data.size_b)
	{
		data.stack_b[i] = data.stack_b[i + 1];
		i++;
	}
	data.stack_b[i - 1] = 0;
}

void	swap_stack_a_push_to_stack_a(void)
{
	int	i;

	i = data.size_a;
	while (i > 0)
	{
		data.stack_a[i] = data.stack_a[i - 1];
		i--;
	}
}

void	swap_stack_a_push_to_stack_b(void)
{
	int	i;

	i = 0;
	while (i < data.size_a)
	{
		data.stack_a[i] = data.stack_a[i + 1];
		i++;
	}
	data.stack_a[i - 1] = 0;
}

void	swap_stack_b_push_to_stack_b(void)
{
	int	i;

	i = data.size_b;
	while (i > 0)
	{
		data.stack_b[i] = data.stack_b[i - 1];
		i--;
	}
}

void	rr(char *str, int s)
{
	ra("", 0);
	rb("", 0);
	if (s == 1)
	{
		write(1, str, 2);
		write(1, "\n", 1);
	}
	else
	{
		(void)str;
		(void)s;
	}
}
