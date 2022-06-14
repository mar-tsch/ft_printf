/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:00:06 by mtritsch          #+#    #+#             */
/*   Updated: 2022/06/08 15:13:12 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	x;
	char	*tab;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	tab = (char *)malloc(len + 1);
	if (!tab)
		return (NULL);
	x = 0;
	while (x < len)
	{
		tab[x] = f(x, s[x]);
		x++;
	}
	tab[x] = '\0';
	return (tab);
}
