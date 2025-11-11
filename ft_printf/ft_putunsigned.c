/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:35:44 by maissam           #+#    #+#             */
/*   Updated: 2025/11/03 17:02:40 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	char	c;
	long	l;
	int		count;

	count = 0;
	l = n;
	if (l >= 10)
	{
		count += ft_putunsigned(l / 10);
	}
	c = (l % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}
