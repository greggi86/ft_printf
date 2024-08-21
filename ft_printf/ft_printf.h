/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grbuchne <grbuchne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:21:29 by grbuchne          #+#    #+#             */
/*   Updated: 2023/06/30 13:16:03 by grbuchne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int				ft_printf(const char	*input, ...);
unsigned int	ft_putchar(int c, unsigned int count);
unsigned int	ft_putstr(char *str, unsigned int count);
unsigned int	ft_digits(int n, unsigned int count);
size_t			ft_strlen(const char *s);
unsigned int	type_check(va_list args, char c, unsigned int count);
unsigned int	ft_posdigits(unsigned int n, unsigned int count);
unsigned int	ft_ptr(char *ptr, unsigned int count, char *base);
unsigned int	ft_hexdigits(unsigned long int n,
					unsigned int count, char *base);

#endif