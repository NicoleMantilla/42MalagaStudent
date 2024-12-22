/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmantill <nmantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 21:46:01 by nmantill          #+#    #+#             */
/*   Updated: 2024/12/21 18:00:00 by nmantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
#include <libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pntr_d;
	unsigned char	*pntr_s;

	pntr_d = (unsigned char *)dest;
	pntr_s = (unsigned char *)src;
	while (n-- > 0)
	{
		*pntr_d = *pntr_s;
		pntr_d++;
		pntr_s++;
	}
	return (dest);
}
// int main(void)
// {
//     char src[] = "Hello, world!";
//     char dest[20];

//     ft_memcpy(dest, src, 13);

//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);

//     return 0;
// }
