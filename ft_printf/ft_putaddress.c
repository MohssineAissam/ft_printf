/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:39:09 by maissam           #+#    #+#             */
/*   Updated: 2025/11/06 10:54:08 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	puthex(unsigned long n)
{
	int		count;
	char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (n >= 16)
	{
		count += puthex(n / 16);
	}
	ft_printf_putchar(base[n % 16], 1);
	count++;
	return (count);
}

int	ft_putaddress(void *p)
{
	unsigned long	t;
	int				count;

	t = (unsigned long) p;
	count = 0;
	if (!t)
	{
		write (1, "(nil)", 5);
		count += 5;
		return (count);
	}
	write(1, "0x", 2);
	count += 2;
	count += puthex(t);
	return (count);
}
