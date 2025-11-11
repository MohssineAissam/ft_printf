/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:46:52 by maissam           #+#    #+#             */
/*   Updated: 2025/10/29 11:18:38 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	s;

	p = (unsigned char *) b;
	s = (unsigned char) c;
	while (len > 0)
	{
		*p = s;
		p++;
		len--;
	}
	return (b);
}
