/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmantill <nmantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 18:49:09 by nmantill          #+#    #+#             */
/*   Updated: 2024/12/22 20:02:36 by nmantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*doble;
	size_t	n;

	doble = (char *)malloc(ft_strlen(s) + 1);
	if (!doble)
		return (NULL);
	n = 0;
	while (s[n])
	{
		doble[n] = s[n];
		n++;
	}
	doble[n] = 0;
	return (doble);
}
