# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zasabri <zasabri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 13:52:10 by zasabri           #+#    #+#              #
#    Updated: 2023/01/01 00:34:59 by zasabri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	= ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_split.c\
		ft_strtrim.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_lstadd_back.c\
		ft_lstnew.c\
		ft_lstlast.c\
		
BONUS	= ft_lstsize_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstdelone_bonus.c\

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

OBJECTS	= $(SRCS:.c=.o)

BOBJ	= $(BONUS:.c=.o)

NAME	= libft.a

AR		= ar rc $(NAME) $(OBJECTS)

BAR		= ar rc $(NAME) $(OBJECTS) $(BOBJ)

RM		= rm -rf

all	: $(NAME)

$(NAME) : $(OBJECTS)

	$(AR)

bonus : $(OBJECTS) $(BOBJ)

	$(BAR)

clean : 
	$(RM) $(OBJECTS) $(BOBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
