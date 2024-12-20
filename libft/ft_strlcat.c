/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmantill <nmantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:30:55 by nicolemanti       #+#    #+#             */
/*   Updated: 2024/12/20 19:31:02 by nmantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] < size)
	{
		i++;
	}
	while (src[j] && (i, j +1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}

	if (i < size)
	{
		dst[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}