/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:17:11 by zbendahh          #+#    #+#             */
/*   Updated: 2023/02/23 23:25:04 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;

	i = 0;
	if (!s && !len)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s + start);
	if (start > ft_strlen(s))
		len = 0;
	p = (char *)malloc(sizeof(char) * len + 1);
	if (!p)
		return (NULL);
	while (i < len)
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}

static char	**free_p(char **p, int i)
{
	while (i >= 0)
		free(p[i--]);
	free(p);
	return (NULL);
}

int	col(char const *s, char c)
{
	int	i;
	int	j_col;

	i = 0;
	j_col = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			j_col++;
		if ((s[i] == c && s[i + 1] != c) && (s[i + 1]))
			j_col++;
		i++;
	}
	return (j_col);
}

static int	len(char const *s, char c)
{
	int	i;
	int	j_len;

	i = 0;
	j_len = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		j_len++;
		i++;
	}
	return (j_len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**p;
	int		ln;
	int		cl;

	cl = col(s, c);
	i = 0;
	j = -1;
	p = malloc(sizeof(char *) * (cl + 1));
	if (!p)
		return (NULL);
	while (++j < cl)
	{
		while (s[i] == c)
			i++;
		ln = len(s + i, c);
		p[j] = ft_substr(s, i, ln);
		if (!p[j])
			return (free_p(p, j));
		i += ln;
	}
	p[j] = NULL;
	return (p);
}
