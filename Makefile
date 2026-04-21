NAME	:= libftprintf.a
CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror

SRCS	:=\
			ft_strlen.c\
			ft_printf.c\
			ft_putchar.c\
			ft_puts.c\
			ft_putnbr.c\
			ft_putunbr.c\
			ft_putnbr_hex.c\
			ft_padress.c\
			ft_putulong_hex.c

OBJS	:= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re