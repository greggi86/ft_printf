CC = gcc

SRC =	ft_isalpha.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_bzero.c \
		ft_isdigit.c \
		ft_putchar_fd.c \
		ft_isalnum.c \
		ft_strlen.c \
		ft_memset.c \
		ft_strlcat.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strlcpy.c \
		ft_strchr.c \
		ft_strncmp.c \
		ft_strrchr.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_putnbr_fd.c \
		ft_strjoin.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_itoa.c \
		ft_strtrim.c \
		ft_split.c 

OBJ = $(SRC:.c=.o)

INCLUDES = libft.h

NAME = libft.a 

FLAGS = -Wall -Werror -Wextra -g 

all: $(NAME)

$(NAME):
			$(CC) $(FLAGS) -c $(SRC)  $(INCLUDES)
			ar rc $(NAME) $(OBJ) 

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re  