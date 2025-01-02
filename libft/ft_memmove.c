/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolemantillafernandez <nicolemantilla    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 19:41:06 by nicolemanti       #+#    #+#             */
/*   Updated: 2025/01/02 21:11:28 by nicolemanti      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;

	if (dst == src || n == 0)
		return (dst);
	
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	
	if (d < s)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else 
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (dst);
}
