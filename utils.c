/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:39:37 by mtritsch          #+#    #+#             */
/*   Updated: 2022/05/25 18:02:16 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_hexamin(char *s) //%x || %p
{
    int x;
    
    if (check_base(s) == 0)
        return (0);
    x = 0;
    while (s[x])
    {
        if()
    }
}

void    ft_hexamaj(char *s) //%X
{
    if (check_base(s) == 0)
        return (0);
}

void    putchar(char c) //%c
{
    write(1, &c, 1);
}

void    putstr(char *s) //%s
{
    while (s)
        write(1, s++, 1);
}

void    ft_putnbr() // %d %i %u
{
    
}

// or

size_t     display_num(int n) // %d %i
{
    size_t size;
    
    if (n < 10)
        putchar('0' + n);
            return (1);
    size = display_num(n / 10);
    putchar('0' + n % 10);
    return (1 + size);
}

size_t      check_base(char *s)
{
    if (strlen(s) != 16)
        return (0);
    return (1);
}