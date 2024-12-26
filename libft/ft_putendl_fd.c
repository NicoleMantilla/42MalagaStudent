/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolemantillafernandez <nicolemantilla    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 18:53:32 by nicolemanti       #+#    #+#             */
/*   Updated: 2024/12/26 18:55:47 by nicolemanti      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void ft_putendl_fd(char *s, int fd)
{
	ft_putstr(s, fd);
	ft_putchar_fd('\n', fd);
}