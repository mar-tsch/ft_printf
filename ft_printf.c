/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:12:54 by mtritsch          #+#    #+#             */
/*   Updated: 2022/06/08 17:37:38 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	handle_format(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len += print_char(va_arg(args, int));
	else if (format == 's')
		len += print_s(va_arg(args, char *));
	else if (format == 'p')
		len += ptr_print(va_arg(args, unsigned long));
	else if (format == 'd' || format == 'i')
		len += print_nb(va_arg(args, int));
	else if (format == 'u')
		len += print_u_nb(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len += hexa_print(va_arg(args, unsigned int), format);
	else if (format == '%')
		len += print_percent();
	return (len);
}

int	ft_printf(const char *s, ...)
{
	int		x;
	int		len;
	va_list	args;

	x = 0;
	len = 0;
	va_start(args, s);
	while (s[x])
	{
		if (s[x] == '%')
		{
			len += handle_format(args, s[x + 1]);
			x++;
		}
		else
			len += print_char(s[x]);
		x++;
	}
	va_end(args);
	return (len);
}
