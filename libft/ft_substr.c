/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:09:29 by mtritsch          #+#    #+#             */
/*   Updated: 2022/06/08 15:13:12 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	x;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		s2 = ft_calloc(1, sizeof(char));
		return (s2);
	}
	if ((s_len - start) < len)
		len = (s_len - start);
	s2 = ft_calloc(len + 1, sizeof(char));
	x = 0;
	if (!s2)
		return (NULL);
	while (x < len)
	{
	s2[x] = s[x + start];
		x++;
	}
	return (s2);
}
