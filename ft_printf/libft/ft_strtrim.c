/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grbuchne <grbuchne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:19:18 by grbuchne          #+#    #+#             */
/*   Updated: 2024/08/21 14:22:04 by grbuchne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char	*destination, const char	*source, size_t num)
{
	char	*ptr;

	ptr = destination;
	while (*source && num > 0)
	{
		*ptr++ = *source++;
		num--;
	}
	return (destination);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	end;
	size_t	start;
	size_t	trimmedlen;
	char	*res;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_calloc(1, 1));
	len = ft_strlen(s1);
	end = len;
	start = 0;
	while (s1[start] != 0 && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strrchr(set, s1[end - 1]) != NULL)
		end--;
	trimmedlen = end - (start);
	res = ft_calloc((trimmedlen + 1), sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + start, trimmedlen + 1);
	res[trimmedlen] = '\0';
	return (res);
}
