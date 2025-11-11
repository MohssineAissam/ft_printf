/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:23:23 by maissam           #+#    #+#             */
/*   Updated: 2025/10/25 11:08:53 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
	{
		return ((char *)(s + i));
	}
	return (NULL);
}
/*#include <stdio.h>
int main (void)
{
	char *s = "hello zello";
	printf("%s",ft_strchr (s, 'z'));

}*/
