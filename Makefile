# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/31 23:45:57 by zasabri           #+#    #+#              #
#    Updated: 2023/01/01 01:26:20 by zasabri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= push_swap.c\
		algos1.c\
		./libft/ft_atoi.c\
		./libft/ft_itoa.c\
		./libft/ft_lstadd_back.c\
		./libft/ft_strdup.c\
		./libft/ft_lstlast.c\
		./libft/ft_lstnew.c\
		./libft/ft_strlen.c\
		./ft_printf/ft_char.c\
		./ft_printf/ft_check_format.c\
		./ft_printf/ft_hex_ptr_len.c\
		./ft_printf/ft_hex.c\
		./ft_printf/ft_number.c\
		./ft_printf/ft_percentage.c\
		./ft_printf/ft_printf.c\
		./ft_printf/ft_ptr.c\
		./ft_printf/ft_putchar.c\
		./ft_printf/ft_string.c\
		./ft_printf/ft_unsigned.c\
		./ft_printf/ft_utoa.c\
		sort_algorithm.c\

OBJS	= $(SRC:.c=.o)

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

PROG	= push_swap

RM		= rm -rf

all	: $(PROG)

$(PROG)	: $(OBJS)

	$(CC) $(CFLAGS) $(OBJS) -o $(PROG)
	
clean :

	$(RM) $(OBJS)

fclean : clean

	$(RM) $(PROG)

re : fclean all