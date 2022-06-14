/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 19:01:17 by mtritsch          #+#    #+#             */
/*   Updated: 2022/06/08 15:13:12 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static unsigned int	def_words(char const *s, char c)
{
	unsigned int	words;

	words = 0;
	while (*s)
	{
		if (*s++ == c)
			continue ;
		++words;
		while (*s && *s != c)
			++s;
	}
	return (words);
}

static void	write_word(char *dst, char *start, char const *end)
{
	while (start < end)
		*(dst++) = *(start++);
	*dst = '\0';
}

static char	**alloc_tab(char const *s, char c)
{
	if (!s)
		return (NULL);
	return ((char **)malloc(sizeof(char *) * (def_words(s, c) + 1)));
}

static char	**free_tab(char **tab)
{
	while (*tab)
		free(*(tab++));
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	char			*start;
	unsigned int	x;

	tab = alloc_tab(s, c);
	if (!tab)
		return (NULL);
	x = 0;
	while (*s)
	{
		if (*s++ == c)
			continue ;
		start = (char *)s - 1;
		while (*s && *s != c)
			s++;
		tab[x] = (char *)malloc(sizeof(char) * (s - start + 1));
		if (!(tab[x]))
			return (free_tab(tab));
		write_word(tab[x++], start, s);
	}
	tab[x] = NULL;
	return (tab);
}

// static void	do_the_split(char **tab, char *s, char c)
// {
// 	int	x;
// 	int	y;
// 	int	word;

// 	x = 0;
// 	word = 0;
// 	while (s[x])
// 	{
// 		if (s[x] == c)
// 			x++;
// 		else
// 		{
// 			y = 0;
// 			while (s[x + y] != c)
// 				y++;
// 			tab[word] = (char *)malloc(sizeof(char) * (y + 1));
// 			write_word(tab[word], s + x, c);
// 			x += y;
// 			word++;
// 		}
// 	}
// }
