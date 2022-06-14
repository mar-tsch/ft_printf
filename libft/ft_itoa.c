/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtritsch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 16:12:04 by mtritsch          #+#    #+#             */
/*   Updated: 2022/06/08 15:13:12 by mtritsch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	ft_rev_int_tab(char *tab, int size)
{
	int		x;
	char	tmp;

	x = 0;
	while (x < size / 2)
	{
		tmp = tab[x];
		tab[x] = tab[size - 1 - x];
		tab[size - 1 - x] = tmp;
		x++;
	}
}

static int	get_len(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len ++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	lezgo(int n, int len, char *total)
{
	int	x;

	x = 0;
	if (n < 0)
	{
		total[0] = '-';
		x = 1;
	}
	while (len > x)
	{
		if (n < 0)
			total[x] = '0' + (n % 10) * -1;
		else
			total[x] = '0' + n % 10;
		n /= 10;
		x++;
	}
	total[x] = '\0';
}

char	*ft_itoa(int n)
{
	int		len;
	char	*total;

	len = get_len(n);
	total = malloc(len + 1);
	if (!total)
		return (NULL);
	lezgo(n, len, total);
	if (total[0] == '-')
		ft_rev_int_tab(total + 1, len - 1);
	else
		ft_rev_int_tab(total, len);
	return (total);
}
