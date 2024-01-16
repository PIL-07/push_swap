/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:37:20 by zbendahh          #+#    #+#             */
/*   Updated: 2023/02/23 23:29:00 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	if_and_else_to_else(int ib_elm, int **arry)
{
	int	pos_b;

	if (arry[ib_elm][3] == 0)
	{
		pos_b = data.size_b - arry[ib_elm][2];
		while (pos_b--)
			rrb("rrb", 1);
	}
	else
	{
		pos_b = arry[ib_elm][2];
		while (pos_b--)
			rb("rb", 1);
	}
}

void	ib_elm_if(int ib_elm, int **arry)
{
	int	pos_a;
	int	pos_b;
	int	i;

	i = -1;
	pos_a = data.size_a - arry[ib_elm][0];
	pos_b = data.size_b - arry[ib_elm][2];
	if (pos_a > pos_b)
	{
		while (++i < pos_b)
			rrr("rrr", 1);
		i = -1;
		while (++i < (pos_a - pos_b))
			rra("rra", 1);
	}
	else
	{
		while (++i < pos_a)
			rrr("rrr", 1);
			i = -1;
		while (++i < (pos_b - pos_a))
			rrb("rrb", 1);
	}
	pa("pa", 1);
}

void	ib_elm_else_if(int ib_elm, int **arry)
{
	int	pos_a;
	int	pos_b;
	int	i;

	i = -1;
	pos_a = arry[ib_elm][0];
	pos_b = arry[ib_elm][2];
	if (pos_a > pos_b)
	{
		while (++i < pos_b)
			rr("rr", 1);
		i = -1;
		while (++i < (pos_a - pos_b))
			ra("ra", 1);
	}
	else
	{
		while (++i < pos_a)
			rr("rr", 1);
		i = -1;
		while (++i < (pos_b - pos_a))
			rb("rb", 1);
	}
	pa("pa", 1);
}

void	ib_elm_else(int ib_elm, int **arry)
{
	int	pos_a;
	int	i;

	i = -1;
	if (arry[ib_elm][1] == 0)
	{
		pos_a = data.size_a - arry[ib_elm][0];
		while (pos_a--)
			rra("rra", 1);
	}
	else
	{
		pos_a = arry[ib_elm][0];
		while (pos_a--)
			ra("ra", 1);
	}
	if_and_else_to_else(ib_elm, arry);
	pa("pa", 1);
}

void	push_back_(int ib_elm, int **arry)
{
	if (arry[ib_elm][1] == 0 && arry[ib_elm][3] == 0)
	{
		ib_elm_if(ib_elm, arry);
	}
	else if (arry[ib_elm][1] == 1 && arry[ib_elm][3] == 1)
		ib_elm_else_if(ib_elm, arry);
	else
		ib_elm_else(ib_elm, arry);
}
