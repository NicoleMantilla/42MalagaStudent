/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmantill <nmantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:31:02 by nmantill          #+#    #+#             */
/*   Updated: 2024/12/10 20:43:12 by nmantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// #include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	result = ft_isascii(140);
// 	printf("El resultado es:%i.\n", result);
// 	return(0);
// }