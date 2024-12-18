/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolemantillafernandez <nicolemantilla    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 19:40:56 by nicolemanti       #+#    #+#             */
/*   Updated: 2024/12/18 20:13:03 by nicolemanti      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
		
	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize -1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
	
}
