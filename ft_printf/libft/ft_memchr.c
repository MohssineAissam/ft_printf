/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:44:57 by maissam           #+#    #+#             */
/*   Updated: 2025/10/25 10:51:24 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	value;
	size_t			i;

	p = (unsigned char *)str;
	value = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (p[i] == value)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>
int main (void)
{
	char *str = "kkkkkziol";
	char *ss = ft_memchr(str,'z',9 );
	printf("%s", ss);
	return (0);
}*/
/*
#include <stdio.h>
int main() {
    unsigned char data[] = {0, 127, 129, 255};
    char target = (char) -127;

    unsigned char *found = ft_memchr(data, target, 4);
    if (found)
        printf("%d", *found);
    else
        printf("Not found");

    return 0;
}*/
