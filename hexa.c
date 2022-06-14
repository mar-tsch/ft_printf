/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:00:41 by mtritsch          #+#    #+#             */
/*   Updated: 2022/06/07 19:42:19 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	hexa_len(unsigned int n)
{
	int	len;

	len = 0 ;
	while (n != 0)
	{
		len ++;
		n = n / 16;
	}
	return (len);
}

void	hexa_put(unsigned int n, const char format)
{
	if (n >= 16)
	{
		hexa_put(n / 16, format);
		hexa_put(n % 16, format);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
		{
			if (format == 'x')
				ft_putchar_fd((n - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((n - 10 + 'A'), 1);
		}
	}
}

int	hexa_print(unsigned int n, const char format)
{
	if (n == 0)
		return (write(1, "0", 1));
	else
		hexa_put(n, format);
	return (hexa_len(n));
}
