/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:25:11 by maissam           #+#    #+#             */
/*   Updated: 2025/10/21 13:41:19 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digit(int n)
{
	long	l;
	int		i;

	l = n;
	i = 0;
	if (l == 0)
	{
		return (1);
	}
	if (l < 0)
	{
		l *= -1;
		i++;
	}
	while (l != 0)
	{
		l = l / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digit_count;
	long	l;

	l = n;
	digit_count = count_digit(n);
	str = malloc(sizeof(char) * (digit_count + 1));
	if (!str)
		return (NULL);
	str[digit_count] = '\0';
	if (l == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		l *= -1;
	}
	while (l != 0)
	{
		digit_count--;
		str[digit_count] = (l % 10) + '0';
		l = l / 10;
	}
	return (str);
}
