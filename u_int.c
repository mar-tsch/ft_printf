/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_int.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:12:24 by mtritsch          #+#    #+#             */
/*   Updated: 2022/06/08 17:38:20 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	get_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*u_itoa(unsigned int n)
{
	int		len;
	char	*res;

	len = get_len(n);
	res = malloc(len + 1);
	if (!res)
		return (0);
	res[len] = '\0';
	while (n != 0)
	{
		res[len - 1] = '0' + (n % 10);
		n /= 10;
		len--;
	}
	return (res);
}

int	print_u_nb(unsigned int n)
{
	int		len;
	char	*nb;

	len = 0;
	if (n == 0)
		len += write(1, "0", 1);
	else
	{
		nb = u_itoa(n);
		len = print_s(nb);
		free(nb);
	}
	return (len);
}
