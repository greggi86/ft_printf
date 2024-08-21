/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grbuchne <grbuchne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 19:29:06 by grbuchne          #+#    #+#             */
/*   Updated: 2024/08/21 15:08:48 by grbuchne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_posdigits(unsigned int n, unsigned int count)
{
	if (n == 0)
	{
		count++;
		write(1, "0", 1);
	}
	else if (n > 9)
	{
		count = ft_digits(n / 10, count);
		count = ft_digits(n % 10, count);
	}
	else if (n <= 9 && n > 0)
	{
		ft_putchar(n + '0', count);
		count++;
	}
	return (count);
}

unsigned int	ft_digits(int n, unsigned int count)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (count += 11);
	}
	if (n < 0)
	{
		count = ft_putchar('-', count);
		n *= -1;
	}
	if (n == 0)
		count = ft_putchar('0', count);
	else if (n > 9)
	{
		count = ft_digits(n / 10, count);
		count = ft_digits(n % 10, count);
	}
	else if (n <= 9 && n > 0)
		count = ft_putchar(n + '0', count);
	return (count);
}

unsigned int	ft_hexdigits(unsigned long int n,
				unsigned int count, char *base)
{
	if (n >= ft_strlen(base))
		count = ft_hexdigits(n / ft_strlen(base), count, base);
	write(1, &base[n % ft_strlen(base)], 1);
	count++;
	return (count);
}

unsigned int	ft_ptr(char *ptr, unsigned int count, char *base)
{
	if (ptr == 0)
	{
		count = ft_putstr("(nil)", count);
	}
	else
	{
		count = ft_putstr("0x", count);
		count = ft_hexdigits((unsigned long)ptr, count, base);
	}
	return (count);
}

int	ft_printf(const char	*input, ...)
{
	va_list			args;
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%')
		{
			count = type_check(args, input[++i], count);
		}
		else
		{
			write(1, &input[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
