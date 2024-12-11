/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmantill <nmantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:09:05 by nmantill          #+#    #+#             */
/*   Updated: 2024/12/11 20:43:40 by nmantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(const char strg*)
{
	int	i;

	i = 0;
	while (strg[0])
		i++;
	return(i)
}

int	main(void)
{
	int result = ft_strlen("abc");
	printf("El resultado es:%i.\n", result);
	return (0);
}