/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:41:04 by maissam           #+#    #+#             */
/*   Updated: 2025/10/21 13:42:44 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	if (!s1 || !set)
	{
		return (NULL);
	}
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	newstr = malloc(sizeof(char) * j - i + 1);
	if (!newstr)
		return (NULL);
	ft_memcpy(newstr, s1 + i, j - i);
	newstr[j - i] = '\0';
	return (newstr);
}
/*#include <stdio.h>
int main (void)
{
	char *s1 = "      xxxxxxxxxxxxxxxlolololopousxxxxxxxxxxxxxxx         ";
	char *set = " x";
	printf("%s", ft_strtrim(s1,set));

}*/
