/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmantill <nmantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 18:01:31 by nmantill          #+#    #+#             */
/*   Updated: 2024/12/21 18:01:44 by nmantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBLIBFT_H
//inicio de las guardias de inclusión 
# define LIBLIBFT_H
# include <stdlib.h>

int	ft_isalpha(int c);
int ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isprint(int c);
int	ft_tolower(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_strlen(const char *strg);
void *ft_memset(void *s, int c, size_t len);


#endif