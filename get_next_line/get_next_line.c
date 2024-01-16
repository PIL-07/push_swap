/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 11:03:46 by zbendahh          #+#    #+#             */
/*   Updated: 2023/03/02 12:19:43 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "../push_swap.h"
#include "../libft/libft.h"

static char	*ft_alloc(char c, int i)
{
	char	*p;

	if (c == '\0')
	{
		p = (char *)malloc(i + 1);
		p[i] = '\0';
		if (!p)
			return (NULL);
	}
	else
	{
		p = (char *)malloc(i + 2);
		p[i] = '\n';
		p[i + 1] = '\0';
		if (!p)
			return (NULL);
	}
	return (p);
}

static int	ft_nlchr(char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
	{
		if (s[i] == '\n')
			return (0);
		i++;
	}
	return (1);
}

static char	*next_line(char *s)
{
	int		i;
	char	*str;
	int		j;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\0')
		return (free(s), NULL);
	str = (char *)malloc(ft_strlen(s) - i + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (s[++i])
		str[j++] = s[i];
	str[j] = '\0';
	return (free(s), str);
}

static char	*ft_substr(char *str)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	if (str[0] == '\0')
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	p = ft_alloc(str[i], i);
	while (str[j] && str[j] != '\n')
	{
		p[j] = str[j];
		j++;
	}
	return (p);
}

char	*get_next_line(int fd)
{
	static char	*s;
	char		*buffer;
	char		*len;
	int			rd;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	rd = 1;
	while (ft_nlchr(s) == 1 && rd)
	{
		rd = read(fd, buffer, BUFFER_SIZE);
		if (rd == -1)
			return (free(buffer), NULL);
		buffer[rd] = '\0';
		s = ft_strjoin(s, buffer);
	}
	len = ft_substr(s);
	s = next_line(s);
	return (free(buffer), len);
}
