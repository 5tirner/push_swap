SRCS	= ft_char.c\
		ft_check_format.c\
		ft_hex_ptr_len.c\
		ft_hex.c\
		ft_number.c\
		ft_percentage.c\
		ft_printf.c\
		ft_ptr.c\
		ft_putchar.c\
		ft_string.c\
		ft_itoa.c\
		ft_unsigned.c\
		ft_utoa.c\

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

OBJS	= $(SRCS:.c=.o)

NAME	= libftprintf.a

AR		= ar rc $(NAME) $(OBJS)

RM		= rm -rf

all : $(NAME)

$(NAME) : $(OBJS)

	$(AR)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all