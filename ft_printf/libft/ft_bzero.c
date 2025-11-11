/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:11:20 by maissam           #+#    #+#             */
/*   Updated: 2025/10/25 10:20:38 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = b;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*int main(void)
{
    int i = 20;
    char s[20] = "hello";
    ft_bzero(s,20);
    while (i > 0){
    printf("%d", (unsigned char)s[i]);
    i--;
    }
}*/
