/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putnbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:06:14 by maissam           #+#    #+#             */
/*   Updated: 2025/11/04 11:40:41 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_putnbr(int n, int fd)
{
	char	c;
	long	l;
	int		count;

	count = 0;
	l = n;
	if (l < 0)
	{
		write(fd, "-", 1);
		l = -l;
		count++;
	}
	if (l >= 10)
	{
		count += ft_printf_putnbr (l / 10, fd);
	}
	c = (l % 10) + '0';
	write(fd, &c, 1);
	count++;
	return (count);
}
