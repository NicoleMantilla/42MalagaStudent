/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmantill <nmantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:25:41 by nmantill          #+#    #+#             */
/*   Updated: 2024/12/05 22:03:54 by nmantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c <= 'a' && c >= 'z') || (c <= 'A' && c >= 'Z'))
		return (1);
	else
		return (0);
}


// int main(void)
// {
//     int result = ft_isalpha('5');
//     printf("El resultado es:%i. Jose es el mejort\n", result);
//     return(0);
// }