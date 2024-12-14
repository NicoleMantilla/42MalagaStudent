/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolemantillafernandez <nicolemantilla    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:09:05 by nmantill          #+#    #+#             */
/*   Updated: 2024/12/14 14:08:01 by nicolemanti      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(const char *strg)
{
	int	i;

	i = 0;
	while (strg[i])
		i++;
	return(i);
}

// int	main(void)
// {
// 	int result = ft_strlen("abc");
// 	printf("El resultado es:%i.\n", result);
// 	return (0);
// }