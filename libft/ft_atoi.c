/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmantill <nmantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 14:36:08 by nmantill          #+#    #+#             */
/*   Updated: 2024/12/21 17:21:19 by nmantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(const char *nptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	i = 0;
	while (*nptr == '' || *nptr == '\t' || *nptr == '\n')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr < '9')
	{
		result = result * 10 + (*str - '0');
		nptr++;
	}
	return (result * sign);
}
