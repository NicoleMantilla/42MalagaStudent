/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolemantillafernandez <nicolemantilla    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:08:40 by nicolemanti       #+#    #+#             */
/*   Updated: 2025/01/02 20:53:21 by nicolemanti      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char *s1, const char *s2, size_t n) 
{
	size_t i;

	i = 0;	
	while (i < n) 
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return (unsigned char)s1[i] - (unsigned char)s2[i];

		if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
		i++;	
	}
	return 0; 
}