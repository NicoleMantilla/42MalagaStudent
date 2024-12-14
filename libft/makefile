#comentario 
#nombre del archivo de la biblioteca 

NAME = liblibft.a

#compilador y banderas de compilación

CC = gcc
CFLAGS = -Wall -Wextra -Werror

#archivos fuente y archivos objeto 
SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_strlen.c ft_tolower.c ft_toupper.c 
OBJ = $(SRC:.c=.o)

#archivo de encabezado 

INCLUDE = mylib.h

#crear bibliotecas y eliminar archivos
AR = ar rcs
RM = rm -f

#indica que las siguientes reglas no son archivos reales 

.PHONY: all clean fclean re 
#Regla por defecto que lo compila todo 
all: $(NAME)

#Regla para crear la biblioteca 
$(NAME): $(OBJ)
	$(AR) $@ $^
#Pasar archivos .c a .o 
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $<	

#Regla para eliminar todos los archivos objeto creados 
clean: 
	$(RM) $(OBJ)

# Eliminar todos los archivos .o y .a
fclean: clean 
	$(RM) $(NAME)

re: fclean all 