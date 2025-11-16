/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayokota <nayokota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:50:19 by nayokota          #+#    #+#             */
/*   Updated: 2025/11/13 16:15:58 by nayokota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	size_t	count;
	int		inword;

	count = 0;
	inword = 0;
	while (*s)
	{
		if (*s != c && !inword)
		{
			inword = 1;
			count++;
		}
		else if (*s == c)
			inword = 0;
		s++;
	}
	return (count);
}

static char	**ft_free(char **arr, size_t filled)
{
	size_t	i;

	i = 0;
	while (i < filled)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static char	*fill_word(const char **ps, char c)
{
	const char	*s;
	size_t		len;
	size_t		i;
	char		*w;

	s = *ps;
	while (*s && *s == c)
		s++;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	w = (char *)malloc(len + 1);
	if (!w)
		return (NULL);
	i = 0;
	while (i < len)
	{
		w[i] = s[i];
		i++;
	}
	w[len] = '\0';
	*ps = s + len;
	return (w);
}

char	**ft_split(const char *s, char c)
{
	char	**out;
	size_t	words;
	size_t	i;

	if (!s)
		return (NULL);
	words = word_count(s, c);
	out = (char **)malloc(sizeof(char *) * (words + 1));
	if (!out)
		return (NULL);
	i = 0;
	while (i < words)
	{
		out[i] = fill_word(&s, c);
		if (!out[i])
			return (ft_free(out, i));
		i++;
	}
	out[i] = NULL;
	return (out);
}

//#27
// Allocates (with malloc(3)) and returns an array of
// strings obtained by splitting ’s’ using the character
// ’c’ as a delimiter. The array must end with a NULL pointer.
// Returns the array of new strings resulting from the split.