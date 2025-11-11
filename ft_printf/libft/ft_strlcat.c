/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: maissam <marvin@42.fr>			    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/10/14 15:26:30 by maissam	       #+#    #+#	      */
/*   Updated: 2025/10/29 15:53:42 by maissam          ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	size_t	fill;

	slen = ft_strlen(src);
	if (size == 0)
		return (slen);
	dlen = ft_strlen(dst);
	fill = size - dlen - 1;
	i = 0;
	if (dlen >= size)
	{
		return (size + slen);
	}
	while (src[i] && fill)
	{
		dst[dlen + i] = src[i];
		i++;
		fill--;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}
/*#include <stdio.h>
#include <bsd/string.h>
int main (void)
{
	char *src= " world";
	printf("%zu",ft_strlcat(NULL, src, 0));
}*/
