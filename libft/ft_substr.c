/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolemantillafernandez <nicolemantilla    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:37:51 by nicolemanti       #+#    #+#             */
/*   Updated: 2025/01/04 19:02:39 by nicolemanti      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	size_t	i;
	char	*sbstr;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	sbstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!sbstr)
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
