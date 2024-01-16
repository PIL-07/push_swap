/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:06:29 by zbendahh          #+#    #+#             */
/*   Updated: 2023/02/23 22:40:55 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(char *str, int s)
{
	int	i;
	int	a;

	i = data.size_a;
	a = data.stack_a[i - 1];
	while (i > 0)
	{
		data.stack_a[i - 1] = data.stack_a[i - 2];
		i--;
	}
	data.stack_a[0] = a;
	if (s == 1)
	{
		write(1, str, 3);
		write(1, "\n", 1);
	}
	else
	{
		(void)str;
		(void)s;
	}
}

void	rrb(char *str, int s)
{
	int	i;
	int	a;

	i = data.size_b;
	a = data.stack_b[i - 1];
	while (i > 0)
	{
		data.stack_b[i - 1] = data.stack_b[i - 2];
		i--;
	}
	data.stack_b[0] = a;
	if (s == 1)
	{
		write(1, str, 3);
		write(1, "\n", 1);
	}
	else
	{
		(void)str;
		(void)s;
	}
}

void	rrr(char *str, int s)
{
	rra("", 0);
	rrb("", 0);
	if (s == 1)
	{
		write(1, str, 3);
		write(1, "\n", 1);
	}
	else
	{
		(void)str;
		(void)s;
	}
}

void	ra(char *str, int s)
{
	int	i;
	int	a;

	i = 0;
	a = data.stack_a[0];
	while (i < data.size_a)
	{
		data.stack_a[i] = data.stack_a[i + 1];
		i++;
	}
	data.stack_a[i - 1] = a;
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

void	rb(char *str, int s)
{
	int	i;
	int	a;

	i = 0;
	a = data.stack_b[0];
	while (i < data.size_b)
	{
		data.stack_b[i] = data.stack_b[i + 1];
		i++;
	}
	data.stack_b[i - 1] = a;
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
