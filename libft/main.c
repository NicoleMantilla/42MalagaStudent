/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmantill <nmantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 19:34:54 by nmantill          #+#    #+#             */
/*   Updated: 2024/12/21 17:16:01 by nmantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	buffer[10] = "----------";
	char	isalnum = ft_isalnum('A');
	char	isalpha = ft_isalpha('W');
	char	isascii = ft_isascii(140);
	char	isdigit = ft_isdigit('A');
	char	isprint = ft_isprint(225);
	int	strlen = ft_strlen("abc");
	char	upper = ft_toupper('a');
	char	lower = ft_tolower('A');
	ft_memset(buffer, 'A', 5);
printf("El resultado es Isalnum: %d, Isaplha: %d, Isascii: %d, Isdigit: %d, Isprint: %d, Strlen: %d, Upper: %c, Lower: %c, Memset: %s\n", 
isalnum, isalpha, isascii, isdigit, isprint, strlen, upper, lower, buffer);
	return (0);
}
