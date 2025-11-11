/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:55:41 by maissam           #+#    #+#             */
/*   Updated: 2025/10/21 11:42:31 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*new;
	int			len;

	if (!s)
		return (NULL);
	len = ft_strlen(s) + 1;
	new = malloc(sizeof(char) * len);
	if (!new)
	{
		return (NULL);
	}
	ft_strlcpy(new, s, len);
	return (new);
}
/*#include <stdio.h>
int main (void)
{
	char	*str;
	char	*new;
	str = "hello strdup test";
	new = ft_strdup(str);
	printf("%s", new);
	free (new);
	return 0;
}*/
