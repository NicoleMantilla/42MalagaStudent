/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmantill <nmantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 19:29:03 by nicolemanti       #+#    #+#             */
/*   Updated: 2025/01/04 13:59:22 by nmantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(long nbr)
{
	size_t	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	if (nbr < 0)
		nbr = -nbr;
	size = ft_numlen(n);
	str = (char *)malloc(size +1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	while (size > 0)
	{
		str[--size] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	return (str);
}
