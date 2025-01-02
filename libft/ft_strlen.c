/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolemantillafernandez <nicolemantilla    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:09:05 by nmantill          #+#    #+#             */
/*   Updated: 2025/01/02 14:23:23 by nicolemanti      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *strg)
{
	int	i;

	i = 0;
	while (strg[i])
		i++;
	return (i);
}

// int	main(void)
// {
// 	int result = ft_strlen("abc");
// 	printf("El resultado es:%i.\n", result);
// 	return (0);
// }