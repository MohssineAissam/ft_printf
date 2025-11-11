/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:37:07 by maissam           #+#    #+#             */
/*   Updated: 2025/10/25 08:09:53 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*nstr;
	size_t	slen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
	{
		nstr = malloc(1);
		if (!nstr)
		{
			return (NULL);
		}
		nstr[0] = '\0';
		return (nstr);
	}
	if (len > slen - start)
		len = slen - start;
	nstr = malloc(sizeof(char) * len + 1);
	if (!nstr)
		return (NULL);
	ft_memcpy(nstr, s + start, len);
	nstr[len] = '\0';
	return (nstr);
}
