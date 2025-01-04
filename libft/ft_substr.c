/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmantill <nmantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:37:51 by nicolemanti       #+#    #+#             */
/*   Updated: 2025/01/04 13:11:57 by nmantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	size_t	i;
	char	*sbstr;

	sbstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	i = start;
	j = 0;
	while (j < len && s[i] != '\0')
	{
		sbstr[j] = s[i];
		i++;
		j++;
	}
	sbstr[j] = '\0';
	return (sbstr);
}
