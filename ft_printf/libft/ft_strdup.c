/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grbuchne <grbuchne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 18:00:58 by grbuchne          #+#    #+#             */
/*   Updated: 2023/05/25 18:33:26 by grbuchne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*pstrt;
	char	*psrc;			
	char	*pdst;	

	pstrt = malloc(ft_strlen(str) + 1);
	psrc = (char *)str;
	pdst = pstrt;
	if (!pstrt)
	{
		return (NULL);
	}
	while (*psrc != 0)
	{
		*pdst = *psrc;
		pdst++;
		psrc++;
	}
	*pdst = '\0';
	return (pstrt);
}
