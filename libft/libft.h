/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 23:21:47 by zbendahh          #+#    #+#             */
/*   Updated: 2023/03/06 13:16:07 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<unistd.h>

char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
int		ft_isdigit(int c);
int		*ft_memset(int *b, int c, size_t len);
char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);
int		ft_strcmp(char *s1, char *s2);
#endif
