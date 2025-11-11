/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:16:58 by maissam           #+#    #+#             */
/*   Updated: 2025/11/05 18:24:20 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthex(unsigned int n, char specifier)
{
	int		count;
	char	*base;

	count = 0;
	if (specifier == 'X')
	{
		base = "0123456789ABCDEF";
	}
	else
	{
		base = "0123456789abcdef";
	}
	if (n >= 16)
	{
		count += ft_puthex(n / 16, specifier);
	}
	ft_printf_putchar(base[n % 16], 1);
	count++;
	return (count);
}
