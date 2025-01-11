/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmantill <nmantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:37:51 by nicolemanti       #+#    #+#             */
/*   Updated: 2025/01/11 18:34:34 by nmantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	size_t	i;
	size_t	str_len;
	char	*sbstr;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
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
