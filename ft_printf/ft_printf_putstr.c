/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:53:31 by maissam           #+#    #+#             */
/*   Updated: 2025/11/05 09:51:26 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_putstr(char *s, int fd)
{
	int	len;

	if (!s)
	{
		return (write(fd, "(null)", 6));
	}
	len = ft_strlen(s);
	write(fd, s, len);
	return (len);
}
