/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:54:48 by labdelkh          #+#    #+#             */
/*   Updated: 2025/01/21 10:54:50 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

static int	can_cpy(char **res, int index, size_t len)
{
	int	i;

	i = 0;
	res[index] = malloc(len);
	if (!res[index])
	{
		while (i < index)
		{
			free(res[i]);
			i++;
		}
		free(res);
		return (1);
	}
	return (0);
}

static int	cpy_str(char **res, char *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
		{
			len++;
			s++;
		}
		if (len > 0)
		{
			if (can_cpy(res, i, len + 1))
				return (1);
			ft_strlcpy(res[i], s - len, len + 1);
		}
		i++;
	}
	return (0);
}

static size_t	count_words(char *s, char c)
{
	size_t	words;
	int		in_word;

	words = 0;
	while (*s)
	{
		in_word = 0;
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
		{
			if (!in_word)
			{
				words++;
				in_word = 1;
			}
			s++;
		}
	}
	return (words);
}

char	**ft_split(char *s, char seperator)
{
	char	**res;
	size_t	num_words;

	if (!s)
		return (NULL);
	num_words = 0;
	num_words = count_words(s, seperator);
	res = malloc(sizeof(char *) * (num_words + 1));
	if (!res)
		return (NULL);
	res[num_words] = NULL;
	if (cpy_str(res, s, seperator))
		return (NULL);
	return (res);
}
