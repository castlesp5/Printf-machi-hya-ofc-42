CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = ft_printf.c ft_puthex.c ft_putptr.c ft_putuns.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_strlen.c
OBJS = ${SRCS:.c=.o}

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
