/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:09:31 by mtritsch          #+#    #+#             */
/*   Updated: 2022/06/10 13:09:59 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

int		print_char(int c);
int		print_percent(void);
int		print_s(char *s);
int		print_nb(int n);
int		get_len(unsigned int n);
int		print_u_nb(unsigned int n);
int		ptr_len(uintptr_t n);
int		ptr_print(unsigned long long n);
int		hexa_len(unsigned int n);
int		hexa_print(unsigned int n, const char format);
int		handle_format(va_list args, const char format);
int		ft_printf(const char *s, ...);

void	putstr(char *s);
void	ptr_put(uintptr_t n);
void	hexa_put(unsigned int n, const char format);

char	*u_itoa(unsigned int n);
#endif
