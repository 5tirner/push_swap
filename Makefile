# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/31 23:45:57 by zasabri           #+#    #+#              #
#    Updated: 2023/02/01 14:46:37 by zasabri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= push_swap.c\
		algos1.c\
		./libft/ft_lstadd_back.c\
		./libft/ft_atoi.c\
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
		./ft_printf/ft_itoa.c\
		sort_algorithm.c\
		./libft/ft_lstadd_front.c\
		./libft/ft_strncmp.c\
		./libft/ft_lstsize.c\
		./libft/ft_split.c\
		./libft/ft_calloc.c\
		./libft/ft_bzero.c\
		./libft/ft_putstr_fd.c\
		if_already_sort.c\
		algos2.c\
		algos3.c\
		swap_three_five.c\
		get_the_small_big.c\
		sort_hundred.c\
		error_generate.c\
		check_duplicate.c\
		./libft/ft_isdigit.c\
		sort_head_in_arr.c\
		free_str.c\

SRC_BONUS	= ./bonus/ft_checker.c\
			./bonus/GNL/get_next_line.c\
			./bonus/GNL/get_next_line_utils.c\
			./bonus/check_dup.c\
			./bonus/deja_msortin.c\
			error_generate.c\
			free_str.c\
			./libft/ft_lstadd_back.c\
			./libft/ft_atoi.c\
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
			./ft_printf/ft_itoa.c\
			./libft/ft_lstadd_front.c\
			./libft/ft_strncmp.c\
			./libft/ft_lstsize.c\
			./libft/ft_split.c\
			./libft/ft_calloc.c\
			./libft/ft_bzero.c\
			./libft/ft_putstr_fd.c\
			./libft/ft_isdigit.c\
			algos1.c\
			algos2.c\
			algos3.c\
			./bonus/checker_apply.c\
			./libft/ft_strnstr.c\

OBJS	= $(SRC:.c=.o)

OBJS_BONUS	= $(SRC_BONUS:.c=.o)

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

PROG	= push_swap

PROG_BONUS = ft_checker

RM		= rm -rf

all	: $(PROG)

$(PROG)	: $(OBJS)

	$(CC) $(CFLAGS) $(OBJS) -o $(PROG)

bonus : $(PROG_BONUS)

$(PROG_BONUS) : $(OBJS_BONUS)

	$(CC) $(CFLAGS) $(OBJS_BONUS) -o $(PROG_BONUS)
	
clean :

	$(RM) $(OBJS) $(OBJS_BONUS)

fclean : clean

	$(RM) $(PROG)

re : fclean all