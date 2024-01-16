# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zbendahh <zbendahh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 15:23:16 by zbendahh          #+#    #+#              #
#    Updated: 2023/03/06 13:17:27 by zbendahh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BNS = checker
CC = cc
FLAGS = -Wall -Wextra -Werror
SRC = libft/ft_memset.c \
		libft/ft_strlen.c \
		libft/ft_atoi.c \
		libft/ft_isdigit.c \
		libft/ft_strjoin.c \
		libft/ft_strdup.c \
		libft/ft_split.c \
		libft/ft_memcmp.c \
		parsing.c \
		operations.c \
		longest.c \
		best_element.c \
		max_and_min.c \
		push_back.c \
		push_to_stack_b.c \
		five_randome_numbers.c \
		four_random_numbers.c \
		three_random_numbers.c \
		operations2.c \
		operations3.c \
		free_tab_2D.c \
		push_swap.c \

SRC1 = libft/ft_memset.c \
		libft/ft_strlen.c \
		libft/ft_atoi.c \
		libft/ft_isdigit.c \
		libft/ft_strjoin.c \
		libft/ft_strdup.c \
		libft/ft_split.c \
		libft/ft_memcmp.c \
		parsing.c \
		operations.c \
		operations2.c \
		operations3.c \
		free_tab_2D.c \
		checker.c \
		get_next_line/get_next_line.c \

OBJ = $(SRC:.c=.o)
OBJ_BNS = $(SRC1:.c=.o)


all : $(NAME)

%.o : %.c push_swap.h libft/libft.h get_next_line/get_next_line.h
	$(CC) $(FLAGS) -o $@ -c $< 
	

$(NAME) : $(OBJ)
		$(CC) $(FLAGS) $^ -o $(NAME)

bonus : $(NAME_BNS)

$(NAME_BNS) : $(OBJ_BNS)
	$(CC) $(FLAGS) $^ -o $(NAME_BNS)

clean :
	rm -rf push_swap
	rm -rf Checker

fclean : clean
	rm -f $(OBJ) $(OBJ_BNS)

re : fclean all