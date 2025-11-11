/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:29:18 by maissam           #+#    #+#             */
/*   Updated: 2025/10/21 14:06:45 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*fs;
	unsigned char	*ss;
	size_t			i;

	i = 0;
	fs = (unsigned char *)s1;
	ss = (unsigned char *)s2;
	while (i < n)
	{
		if (fs[i] != ss[i])
		{
			return (fs[i] - ss[i]);
		}
		i++;
	}
	return (0);
}
/*#include <stdio.h>
int main (void)
{
	char *s1 = "hellowoil";
	char *s2 = "hello";
	printf("%d", ft_memcmp(s1,s2,7));
}*/
