#comentario 
#nombre del archivo de la biblioteca 

NAME = libft.a

#compilador y banderas de compilación gcc -o compile_all.out main.c -L. -lft

CC = gcc
CFLAGS = -Wall -Wextra -Werror

#archivos fuente y archivos objeto 
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
OBJ = $(SRC:.c=.o)

#archivo de encabezado 

INCLUDE = libft.h

#crear bibliotecas y eliminar archivos
AR = ar rcs
RM = rm -f

#indica que las siguientes reglas no son archivos reales 

.PHONY: all clean fclean re 
#Regla por defecto que lo compila todo 
all: $(NAME)

#Regla para crear la biblioteca 
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
#Pasar archivos .c a .o 
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@	

#Regla para eliminar todos los archivos objeto creados 
clean: 
	$(RM) $(OBJ)

# Eliminar todos los archivos .o y .a
fclean: clean 
	$(RM) $(NAME)

re: fclean all 

#Ejecutar: ./compile_all.out
