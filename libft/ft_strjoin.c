/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolemantillafernandez <nicolemantilla    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:41:56 by nicolemanti       #+#    #+#             */
/*   Updated: 2025/01/02 21:35:57 by nicolemanti      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *single;
	int		i;
	int		j;
	int		total;

	if (!s1 || !s2)
		return (NULL);
	total = ft_strlen(s1) + ft_strlen(s2);
	single = (char *)malloc(sizeof(char) * (total +1));
	if (!single)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		single[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		single[i + j] = s2[j];
		j++;
	}
	single[i + j] = '\0';
	return (single);
}