/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:53:46 by zbendahh          #+#    #+#             */
/*   Updated: 2023/03/06 13:14:56 by zbendahh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<stdio.h>
# include<stdlib.h>
# include<string.h>
# include<unistd.h>

struct s_data
{
	int	*stack_a;
	int	*stack_b;
	int	*sub_sequence;
	int	*list_sortin;
	int	*longest;

	int	*best_element;
	int	**tab_best_element;

	int	size_a;
	int	size_b;
	int	len;
	int	size_list_sortin;
}data;

int		sorting(char **str, int ac);
void	check_not_char(char *str);
void	space_(char **av, int i);
void	recurrence(char **str, int ac);
int		col(char const *s, char c);
void	three_random_numbers(void);
void	five_randome_numbers(void);
void	four_randome_numbers(void);
void	longest_(void);
void	sub_sequence_(void);
void	list_sortin_(void);
int		max_(int *arry, int size);
int		min_(int *arry, int size);
int		**data_best_element_(void);
int		*tab_best_element_(int **arry);
void	push_back_(int ib_elm, int **arry);
void	push_to_stack_b(void);
void	free_str(char **arry, int i);
void	free_int(int **arry, int i);
void	error_(void);
void	swap_stack_b_push_to_stack_a(void);
void	swap_stack_a_push_to_stack_a(void);
void	swap_stack_a_push_to_stack_b(void);
void	swap_stack_b_push_to_stack_b(void);
void	sa(char *str, int s);
void	sb(char *str, int s);
void	pa(char *str, int s);
void	pb(char *str, int s);
void	ss(char *str, int s);
void	ra(char *str, int s);
void	rb(char *str, int s);
void	rr(char *str, int s);
void	rra(char *str, int s);
void	rrb(char *str, int s);
void	rrr(char *str, int s);
#endif