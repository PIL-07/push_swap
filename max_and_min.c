/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_and_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:40:35 by zbendahh          #+#    #+#             */
/*   Updated: 2023/03/03 15:22:43 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_(int *arry, int size)
{
	int	max;
	int	i;
	int	j;

	i = 1;
	j = 0;
	max = arry[0];
	while (i < size)
	{
		if (max < arry[i])
		{
			max = arry[i];
			j = i;
		}
		i++;
	}
	return (j);
}

int	min_(int *arry, int size)
{
	int	min;
	int	i;
	int	j;

	i = 1;
	j = 0;
	min = arry[0];
	while (i < size)
	{
		if (min > arry[i])
		{
			min = arry[i];
			j = i;
		}
		i++;
	}
	return (j);
}
