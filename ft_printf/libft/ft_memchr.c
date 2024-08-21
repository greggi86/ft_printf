/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grbuchne <grbuchne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:28:26 by grbuchne          #+#    #+#             */
/*   Updated: 2024/08/21 14:04:56 by grbuchne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str = s;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char) c)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (0);
}
