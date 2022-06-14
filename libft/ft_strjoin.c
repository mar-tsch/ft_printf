/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:20:58 by mtritsch          #+#    #+#             */
/*   Updated: 2022/06/08 15:13:12 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		x;
	size_t		y;
	size_t		tab_len;
	char		*tab;

	x = 0;
	y = 0;
	tab_len = (ft_strlen(s1) + ft_strlen(s2));
	tab = malloc(sizeof(*tab) * tab_len + 1);
	if (!tab)
		return (NULL);
	while (s1[x] != '\0')
	{
		tab[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		tab[x] = s2[y];
		x++;
		y++;
	}
	tab[tab_len] = '\0';
	return (tab);
}
