/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmantill <nmantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 20:28:30 by nmantill          #+#    #+#             */
/*   Updated: 2024/12/16 21:17:39 by nmantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memset(void *s, int c, size_t len)
{
	char	*pntr;

	pntr = (unsigned char *) s;

	while (len > 0)
	{
		*pntr = (unsigned char)c;

		pntr++;
		len--;
	}
	return (b);
}