/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:16:48 by zbendahh          #+#    #+#             */
/*   Updated: 2023/02/23 23:25:02 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_memset(int *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	if (!b && !len)
		return (NULL);
	while (i < len)
	{
		b[i] = c;
		i++;
	}
	return (b);
}
