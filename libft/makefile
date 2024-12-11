#comentario 
#nombre del archivo de la biblioteca 

NAME = liblibft.a

#compilador y banderas de compilación

CC = gcc
CFLAGS = -Wall -Wextra -Werror

#archivos fuente y archivos objeto 
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_tolower.c ft_toupper.c 
ONJ = $(SRC:.c=.o)

#archivo de encabezado 

INCLUDE = libft.h

#crear bibliotecas y eliminar archivos
AR = ar rcs
RM = rm -f

#Regla por defecto que lo compila todo 
all: $(NAME)

#Regla para crear la biblioteca 
$(NAME): $(OBJ)
	$(AR) $@ $
