/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grbuchne <grbuchne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 12:56:07 by grbuchne          #+#    #+#             */
/*   Updated: 2023/06/30 13:10:52 by grbuchne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_putchar(int c, unsigned int count)
{
	write(1, &c, 1);
	count++;
	return (count);
}

unsigned int	ft_putstr(char *str, unsigned int count)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (count += 6);
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
		count++;
	}
	return (count);
}
