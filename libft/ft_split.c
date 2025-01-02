/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolemantillafernandez <nicolemantilla    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:46:10 by nicolemanti       #+#    #+#             */
/*   Updated: 2025/01/02 14:58:49 by nicolemanti      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_count_words(const char *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char **ft_fill_array(char **aux, const char *s, char c)
{
	size_t 	start;
	size_t 	i;
	int 	k;

	start = 0;
	i = 0;
	k = 0;
	while (s[i] == c)
	{
		if (i > start)
		{
			if (i > start)
				aux[k++] = ft_substr(s, start, i - start);
			start = i + 1;
		}
		i++;
	}
	if (i > start)
		aux[k++] = ft_substr(s, start, i - start);
	aux[k] = NULL;
	return (aux);
}

char **ft_split(char const *s, char c)
{
	char **aux;
	int nwords;
	
	if (!s)
		return (NULL);
	nwords = ft_count_words(s, c);
	aux = malloc((nwords +1) * sizeof(char *));
	if (!aux)
		return (NULL);
	aux = ft_fill_array(aux, s, c);
	return (aux);
}