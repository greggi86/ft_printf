/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grbuchne <grbuchne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:43:10 by gregor.buch       #+#    #+#             */
/*   Updated: 2023/06/04 17:31:49 by grbuchne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	size;

	size = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		start = 0;
		len = 0;
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	if (start < len || len < ft_strlen(s))
	{
		while (size < len)
			sub[size++] = s[start++];
	}
	sub[size] = '\0';
	return (sub);
}
