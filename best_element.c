/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 21:00:10 by zbendahh          #+#    #+#             */
/*   Updated: 2023/02/22 13:15:13 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	position(int a)
{
	int	i;
	int	i__min;
	int	i__max;

	i = 0;
	i__min = min_(data.stack_a, data.size_a);
	i__max = max_(data.stack_a, data.size_a);
	while (i < data.size_a)
	{
		if (a < data.stack_a[i__min] || a > data.stack_a[i__max])
			return (i__min);
		else if (a > data.stack_a[i] && a < data.stack_a[i + 1])
			return (i + 1);
		i++;
	}
	return (i);
}

static int	*sub_best_element_(int i_a, int i_b)
{
	int	pos;
	int	*sub_best_element;

	sub_best_element = malloc(sizeof(int) * 4);
	if (!sub_best_element)
		return (NULL);
	pos = position(i_a);
	sub_best_element[0] = pos;
	sub_best_element[2] = i_b;
	if (pos >= data.size_a / 2)
		sub_best_element[1] = 0;
	else
		sub_best_element[1] = 1;
	if (i_b >= data.size_b / 2)
		sub_best_element[3] = 0;
	else
		sub_best_element[3] = 1;
	return (sub_best_element);
}

int	**data_best_element_(void)
{
	int	i;
	int	*sub;
	int	**data_best_element;

	i = 0;
	data_best_element = malloc(sizeof(int *) * data.size_b);
	if (!data_best_element)
		return (NULL);
	while (i < data.size_b)
	{
		sub = sub_best_element_(data.stack_b[i], i);
		data_best_element[i] = sub;
		i++;
	}
	i = 0;
	return (data_best_element);
}

int	*tab_best_element_(int **arry)
{
	int	*best_element;
	int	i;

	i = 0;
	best_element = malloc(sizeof(int) * data.size_b);
	if (!best_element)
		return (NULL);
	while (i < data.size_b)
	{
		if (arry[i][1] == 1 && arry[i][3] == 1)
			best_element[i] = arry[i][0] + arry[i][2];
		else if (arry[i][1] == 0 && arry[i][3] == 0)
		{
			if (data.size_b == 1)
				arry[i][2] = 1;
			best_element[i] = (data.size_a - arry[i][0])
				+ (data.size_b - arry[i][2]);
		}
		else if (arry[i][1] == 0 && arry[i][3] == 1)
			best_element[i] = (data.size_a - arry[i][0]) + arry[i][2];
		else if (arry[i][1] == 1 && arry[i][3] == 0)
			best_element[i] = arry[i][0] + (data.size_b - arry[i][2]);
		i++;
	}
	return (best_element);
}
