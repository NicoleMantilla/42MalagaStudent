/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolemantillafernandez <nicolemantilla    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 19:29:03 by nicolemanti       #+#    #+#             */
/*   Updated: 2025/01/02 14:02:48 by nicolemanti      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_itoa(int n)
{
	char *str;
	long	nbr;
	size_t	size;

	nbr = n;
	size = n > 0 ? 0 : 1;
	nbr = nbr > 0 ? nbr : -nbr;
	while (n)
	{
		n /= 10;
		size++;
	}

	if (!(str = (char	*)malloc(size + 1)))
		return (0);
	*(str + size--) = '\0';
	while (nbr > 0)
	{
		*(str + size--) = nbr % 10 + '0';
		nbr /= 10;
	}
	
	if (size == 0 && str[1] == '0')
		*(str + size) = '0';
	else if (size == 0 && str[1] != '\0')
		*(str + size) = '-';
	
	return(str);
	
}