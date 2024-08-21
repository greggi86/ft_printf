/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grbuchne <grbuchne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:40:13 by grbuchne          #+#    #+#             */
/*   Updated: 2024/08/21 14:07:42 by grbuchne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*cdst;
	char		*csrc;

	i = 0;
	cdst = (char *)dst;
	csrc = (char *)src;
	if (src || dst)
	{
		while (i < n)
		{
			cdst[i] = csrc[i];
			i++;
		}
	}
	return (dst);
}
