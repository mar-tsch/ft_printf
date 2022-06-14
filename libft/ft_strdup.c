/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:40:27 by mtritsch          #+#    #+#             */
/*   Updated: 2022/06/08 15:13:12 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s)
{
	size_t		len;
	char		*dup;
	size_t		x;

	len = ft_strlen(s);
	dup = malloc(sizeof(*dup) * (len + 1));
	x = 0;
	if (!dup)
		return (NULL);
	while (s[x] != '\0')
	{
		dup[x] = s[x];
		x++;
	}
	dup[x] = '\0';
	return (dup);
}
