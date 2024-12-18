/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolemantillafernandez <nicolemantilla    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 20:28:30 by nmantill          #+#    #+#             */
/*   Updated: 2024/12/17 19:21:19 by nicolemanti      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*pntr;

	pntr = (unsigned char *)s;

	while (len > 0)
	{
		*pntr = (unsigned char)c;

		pntr++;
		len--;
	}
	return (s);
}

