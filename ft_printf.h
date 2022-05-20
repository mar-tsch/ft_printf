/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:08:40 by mtritsch          #+#    #+#             */
/*   Updated: 2022/05/20 16:38:34 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include<stdarg.h>
# include<stdlib.h>
# include<unistd.h>
# include "libft.h"

//struct flags /va_list args

int     ft_printf(const char *, ...);
#endif
