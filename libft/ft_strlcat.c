/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolemantillafernandez <nicolemantilla    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:30:55 by nicolemanti       #+#    #+#             */
/*   Updated: 2024/12/18 20:49:07 by nicolemanti      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j:

	i=0;
	j=0;
	while (dst[i] < size)
	{
		i++;
	}
	while (src[j] && (i,j +1) < size)
	{
		dst[i+j] = src[j];
		j++;
	}

	if (i < size)
	{
		dst[i +j] = '\0';
	}
	return (i + ft_strlen(src));
}