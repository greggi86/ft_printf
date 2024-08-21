/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_typecheck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grbuchne <grbuchne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:58:13 by grbuchne          #+#    #+#             */
/*   Updated: 2023/06/30 13:05:49 by grbuchne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	type_check(va_list args, char c, unsigned int count)
{
	if (c == 'c')
		count = ft_putchar(va_arg(args, int), count);
	if (c == 's')
		count = ft_putstr(va_arg(args, char *), count);
	if (c == 'd' || c == 'i')
		count = ft_digits(va_arg(args, int), count);
	if (c == 'u')
		count = ft_posdigits(va_arg(args, unsigned int), count);
	if (c == 'x')
		count = ft_hexdigits(va_arg(args,
					unsigned int), count, "0123456789abcdef");
	if (c == 'X')
		count = ft_hexdigits(va_arg(args,
					unsigned int), count, "0123456789ABCDEF");
	if (c == 'p')
		count = ft_ptr(va_arg(args,
					void *), count, "0123456789abcdef");
	if (c == '%')
		count = ft_putchar('%', count);
	return (count);
}
