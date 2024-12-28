/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolemantillafernandez <nicolemantilla    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:41:56 by nicolemanti       #+#    #+#             */
/*   Updated: 2024/12/27 13:55:38 by nicolemanti      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strjoin(char const *s1, char const *s2)
{
	char *s3;
	int i;
	int j;
	
	i = 0;
	j = 0;

	s3 = (char	*)malloc(sizeof (char) * (ft_strlen(s1)))
	
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[j] = s2[j];
		j++;
	}
	s3[i + j] = '\0';
	return (s3);
	
}