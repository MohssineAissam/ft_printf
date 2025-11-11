/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:39:38 by maissam           #+#    #+#             */
/*   Updated: 2025/10/24 07:57:01 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t n)
{
	unsigned char		*d;
	unsigned char const	*s;

	if (n == 0 || dst == src)
		return (dst);
	d = (unsigned char *) dst;
	s = (unsigned char const *) src;
	if (s < d)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	return (dst);
}
/*
int main()
{
    char str[100] = "Learningisfun";
    char *first, *second;
    first = str;
    second = str;
    printf("Original string :%s\n ", str);
    ft_memcpy(first + 8, first, 10);
    printf("memcpy overlap : %s\n ", str);
    ft_memmove(second + 8, first, 10);
    printf("memmove overlap : %s\n ", str);
*/
/*
	int i = 0;
	double	arr1[8] = {1.2,2.2,3.3,4.3,5.3,4.3,2.2,23.2};
	double	arr2 = arr1 + 2;
	printf("%p",ft_memmove(arr2, arr1, 3* (sizeof(double))));
	while (i < 8)
	{
		printf("%f\n", arr1[i]);
		i++;
	}
	
	
    return 0;
}*/
