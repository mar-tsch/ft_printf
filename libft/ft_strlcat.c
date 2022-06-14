/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 18:19:59 by mtritsch          #+#    #+#             */
/*   Updated: 2022/06/08 15:13:12 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	x;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	x = 0;
	if (size < dst_len + 1)
		return (src_len + size);
	if (size > dst_len + 1)
	{
		while (src[x] != '\0' && dst_len + x + 1 < size)
		{
			dst[dst_len + x] = src[x];
			x++;
		}
	}
	dst[dst_len + x] = '\0';
	return (src_len + dst_len);
}
