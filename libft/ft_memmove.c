/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:57:40 by mtritsch          #+#    #+#             */
/*   Updated: 2022/06/08 15:13:12 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*udst;
	unsigned char	*usrc;
	size_t			x;

	x = 0;
	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	if (udst == NULL || usrc == NULL)
		return (NULL);
	while (x < n)
	{
		if (udst < usrc)
			udst[x] = usrc[x];
		else
			udst[n - 1 - x] = usrc[n - 1 - x];
		x++;
	}
	return (udst);
}
