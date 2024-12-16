#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	isalnum = ft_isalnum('A');
	char	isalpha = ft_isalpha('W');
	char	isascii = ft_isascii(140);
	char	isdigit = ft_isdigit('A');
	char	isprint = ft_isprint(225);
	int	strlen = ft_strlen("abc");
	char	upper = ft_toupper('a');
	char	lower = ft_tolower('A');
	char	memset	= ft_memset('A');
	printf("El resultado es Isalnum: %d, Isaplha: %d, Isascii: %d, Isdigit: %d, Isprint: %d, Strlen: %d, Upper: %c, Lower: %c\n", isalnum, isalpha, isascii, isdigit, isprint, strlen, upper, lower);
	return (0);
}