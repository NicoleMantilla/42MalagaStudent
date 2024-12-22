/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmantill <nmantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 17:33:41 by nmantill          #+#    #+#             */
/*   Updated: 2024/12/22 18:18:54 by nmantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	while (i < nmemb * size)
	{
		tmp[i++] = 0;
	}
	return (tmp);
}

// int	main(void)
// {
// 	size_t i;
// 	char *str = ft_calloc(11, sizeof(char));

// 	i = 0;
// 	while (i < 11 && str[i] == '\0')
// 	{
// 		str[i] = '1';
// 		i++;
// 	}
// 	printf("result: %s\n,",str)
// 	return (0);
// }