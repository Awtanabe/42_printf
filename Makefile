NAME=libftprintf
SRCS = ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c
OBJS = $(SRCS:.c=.o)

CC = cc
CFLAG= -Wall -Wextra -Werror
ARFLAGS = -rcs
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	ar $(ARFLAGS) $(NAME).a $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME).a

re: fclean all

.PHONY: all, clean, fclean, re
