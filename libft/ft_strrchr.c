/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolemantillafernandez <nicolemantilla    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 21:01:43 by nicolemanti       #+#    #+#             */
/*   Updated: 2024/12/19 21:06:47 by nicolemanti      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c) 
{
	int i;
	
	i = 0;
	
	while (s[i])
		i++;
	if (c == '\0')
		return ((char *)(s + i));
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *) (s +1));
		i--;
	}
	
	return (0);
}