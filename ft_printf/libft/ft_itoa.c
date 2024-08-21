/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grbuchne <grbuchne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 22:49:45 by grbuchne          #+#    #+#             */
/*   Updated: 2024/08/21 14:20:33 by grbuchne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 9)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_solve(int n, int length, char *s, int end)
{
	while (n != 0)
	{
		s[length - 1] = n % 10 + '0';
		n /= 10;
		length--;
	}
	s[end] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	int			length;
	int			end;
	char		*s;
	int			neg;

	neg = 0;
	length = len((long int) n);
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		neg = 1;
		n *= -1;
	}
	end = length;
	s = malloc(length * sizeof(char) + 1);
	if (!s)
		return (0);
	s = ft_solve(n, length, s, end);
	if (neg)
		s[0] = '-';
	return (s);
}
