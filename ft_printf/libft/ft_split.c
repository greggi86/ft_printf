/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grbuchne <grbuchne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:39:24 by grbuchne          #+#    #+#             */
/*   Updated: 2024/08/21 14:21:02 by grbuchne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

void	free_split(char	**result, int index)
{
	int	j;

	j = 0;
	while (j < index)
		free (result[j++]);
	free(result);
}

static char	*extract_word(char const *str, char c, int *index)
{
	int		start;
	int		end;
	int		length;
	char	*word;
	int		i;

	i = 0;
	start = *index;
	end = start;
	while (str[end] != c && str[end] != '\0')
		end++;
	*index = end;
	length = end - start;
	word = (char *)malloc((length + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	while (i < length)
	{
		word[i] = str[start + i];
		i++;
	}
	word[length] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		index;
	int		i;

	if (s == NULL)
		return (NULL);
	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	index = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			result[index] = extract_word(s, c, &i);
			if (result[index] == NULL)
				return (free_split(result, index), NULL);
			index++;
		}
		else
			i++;
	}
	result[index] = NULL;
	return (result);
}
