/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grbuchne <grbuchne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 17:16:39 by grbuchne          #+#    #+#             */
/*   Updated: 2024/08/21 14:19:35 by grbuchne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	if (count == 0 || size == 0)
		return (malloc(0));
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	i = -1;
	while (++i < count * size)
		((unsigned char *)ptr)[i] = '\0';
	return ((unsigned char *)ptr);
}
