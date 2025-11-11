/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:21:54 by maissam           #+#    #+#             */
/*   Updated: 2025/10/21 11:40:44 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		i++;
	}
	if (c == '\0')
	{
		return ((char *)(s + i));
	}
	while (s[i] != (char)c && i > 0)
	{
		i--;
	}
	if (s[i] == (char)c)
	{
		return ((char *)(s + i));
	}
	return (NULL);
}
/*#include <stdio.h>
int main (void)
{
        char *s = "hello zellol";
        printf("%s",ft_strrchr (s, 'h'));

}*/
