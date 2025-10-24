CC = cc -Wall -Wextra -Werror

NAME = printf.a

ARCS = -ar rcs

SRC = src
UTL = utils

PRINTF_SRCS = ft_printf.c \
	$(SRC)/ft_print_char.c \
	$(SRC)/ft_print_str.c \
	$(SRC)/ft_print_int.c \
	$(SRC)/ft_print_uns.c \
	$(SRC)/ft_print_hex.c \
	$(SRC)/ft_print_ptr.c

SRCS =	$(PRINTF_SRCS)

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME)	: $(OBJ)
	$(ARCS) $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re 
