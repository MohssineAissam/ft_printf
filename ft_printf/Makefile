NAME = libftprintf.a

LIBFT = libft/libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_putaddress.c  ft_puthex.c ft_printf_putstr.c ft_printf.c  ft_printf_putchar.c  ft_printf_putnbr.c  ft_putunsigned.c

OBJCS = $(SRC:.c=.o)

all : $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C libft

$(NAME) : $(OBJCS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJCS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm -f $(OBJCS)
	$(MAKE) -C libft clean

fclean : clean
	rm -f $(NAME)
	$(MAKE) -C libft fclean

re :fclean all
	$(MAKE) -C libft re

.PHONY: all clean fclean re libft
