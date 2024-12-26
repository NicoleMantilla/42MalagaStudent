/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolemantillafernandez <nicolemantilla    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 18:30:12 by nicolemanti       #+#    #+#             */
/*   Updated: 2024/12/26 18:41:27 by nicolemanti      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

