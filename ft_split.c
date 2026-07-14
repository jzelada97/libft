/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzelada- <jzelada-@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 13:39:40 by jzelada-          #+#    #+#             */
/*   Updated: 2026/05/26 13:39:40 by jzelada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*copy;

	copy = (char *)malloc(sizeof(char) * (n + 1));
	if (!copy)
		return (NULL);
	if (n > 0)
		ft_memcpy(copy, s, n);
	copy[n] = '\0';
	return (copy);
}

static char	**ft_free(char **split, size_t cnt)
{
	while (cnt > 0)
	{
		cnt--;
		free(split[cnt]);
	}
	free(split);
	return (NULL);
}

static char	**ft_split_2(size_t word_count, char const *s, char c, char **split)
{
	size_t	i;
	size_t	word_len;

	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		word_len = 0;
		while (s[word_len] && s[word_len] != c)
			word_len++;
		split[i] = ft_strndup(s, word_len);
		if (!split[i])
			return (ft_free(split, i));
		s += word_len;
		i++;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = ft_wordcount(s, c);
	split = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!split)
		return (NULL);
	if (!ft_split_2(word_count, s, c, split))
		return (NULL);
	return (split);
}
