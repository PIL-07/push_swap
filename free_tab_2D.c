/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_tab_2D.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 13:36:21 by zbendahh          #+#    #+#             */
/*   Updated: 2023/02/22 13:37:27 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_str(char **arry, int i)
{
	while (i >= 0)
		free(arry[i--]);
	free(arry);
}

void	free_int(int **arry, int i)
{
	while (i >= 0)
		free(arry[i--]);
	free(arry);
}
