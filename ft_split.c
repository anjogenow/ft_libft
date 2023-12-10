/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@stdent.42berlin.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:03:52 by agenow            #+#    #+#             */
/*   Updated: 2023/12/10 19:57:00 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_free(char **s, size_t n);
static size_t	word_count(const char *s, char c);
static size_t	word_len(const char *s, char c);

char	**ft_split(const char *s, char c)
{
	char	**words;
	size_t	i;
	size_t	wc;

	i = 0;
	wc = word_count(s, c);
	words = (char **) ft_calloc(wc + 1, sizeof(char *));
	if (!words)
		return (NULL);
	while (*s && i < wc)
	{
		if (*s == c)
			s++;
		else
		{
			words[i] = ft_substr(s, 0, word_len(s, c));
			if (!words[i])
				return (ft_free(words, wc));
			i++;
			s += word_len(s, c);
		}
	}
	return (words);
}

static char	**ft_free(char **s, size_t n)
{
	size_t	i;

	i = 0;
	while (i <= n)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static size_t	word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static size_t	word_count(const char *s, char c)
{
	size_t	f;
	size_t	wc;

	f = 0;
	wc = 0;
	while (*s)
	{
		if (f == 0 && *s != c)
		{
			wc++;
			f = 1;
		}
		else if (f == 1 && *s == c)
			f = 0;
		s++;
	}
	return (wc);
}
