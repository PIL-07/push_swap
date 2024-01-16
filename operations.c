/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:05:28 by zbendahh          #+#    #+#             */
/*   Updated: 2023/02/23 22:38:30 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(char *str, int s)
{
	int	a;

	a = data.stack_a[0];
	data.stack_a[0] = data.stack_a[1];
	data.stack_a[1] = a;
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

void	sb(char *str, int s)
{
	int	a;

	a = data.stack_b[0];
	data.stack_b[0] = data.stack_b[1];
	data.stack_b[1] = a;
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

void	ss(char *str, int s)
{
	sa("", 0);
	sb("", 0);
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

void	pa(char *str, int s)
{
	swap_stack_a_push_to_stack_a();
	data.stack_a[0] = data.stack_b[0];
	swap_stack_b_push_to_stack_a();
	data.size_a++;
	data.size_b--;
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

void	pb(char *str, int s)
{
	swap_stack_b_push_to_stack_b();
	data.stack_b[0] = data.stack_a[0];
	swap_stack_a_push_to_stack_b();
	data.size_a--;
	data.size_b++;
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
