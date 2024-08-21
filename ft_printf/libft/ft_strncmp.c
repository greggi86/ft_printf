/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grbuchne <grbuchne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:43:54 by grbuchne          #+#    #+#             */
/*   Updated: 2024/08/21 14:21:44 by grbuchne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*u_s1;
	unsigned char	*u_s2;
	size_t			i;

	u_s1 = (unsigned char *) s1;
	u_s2 = (unsigned char *) s2;
	i = 0;
	if (n <= 0)
		return (0);
	while (u_s1[i] != '\0' && u_s2[i] != '\0' && (i + 1 < n)
		&& u_s1[i] == u_s2[i])
	{
		i++;
	}
	return (u_s1[i] - u_s2[i]);
}
