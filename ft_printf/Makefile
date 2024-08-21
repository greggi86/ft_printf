CC = gcc

SRC = ft_printf.c utils.c ft_typecheck.c

OBJ = $(SRC:.c=.o)

INCLUDES = ft_printf.h

NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra -g 

all: libft $(NAME)

$(NAME):
			$(CC) $(FLAGS) -c $(SRC) $(INCLUDES)
			ar rc $(NAME) $(OBJ) 

libft:
	make -C libft
	cp libft/libft.a .
	mv libft.a ${NAME}

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: all clean

.PHONY: all clean fclean re  