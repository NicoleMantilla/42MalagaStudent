/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmantill <nmantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 22:21:31 by nicolemanti       #+#    #+#             */
/*   Updated: 2024/12/20 19:27:43 by nmantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *(const char *s, int c)
{
unsigned int i;
char	cc;

cc = (char) c;
i = 0;

while (s[i])
{
	if (s[i] == cc)
		return ((char*) &s[i]);
	i++;
}
	if (s[i] == cc)
	return ((char *) &s[i]);
return (NULL);
}