/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolemantillafernandez <nicolemantilla    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 14:05:02 by nicolemanti       #+#    #+#             */
/*   Updated: 2025/01/02 14:08:10 by nicolemanti      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char *start;
	const char *end;

	if (!s1 || !set)
		return (NULL);
	
	start = s1;	
	while (*start && ft_strchr(set, *start))
		start++;
		
	end = s1 + ft_strlen(s1) - 1;	
	while (end > start && ft_strchr(set, *end))
		end--;
		
	char *d = (char	*)malloc(end - start);
	if (!d)
		return (NULL);
	
	ft_memcpy(d, start, end - start + 1);
	d[end - start + 1] = '\0';
	
	return (d);
	
}