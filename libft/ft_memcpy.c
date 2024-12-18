/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmantill <nmantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 21:46:01 by nmantill          #+#    #+#             */
/*   Updated: 2024/12/16 22:05:53 by nmantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*pntr_d;
	const unsigned char	*pntr_s;

	*pntr_d = dest;
	*pntr_s = src;

	while (n-- >)
	{
		*(pntr_d++) = *pntr_s++;
		return (dst);
	}
}