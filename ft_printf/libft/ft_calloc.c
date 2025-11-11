/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 19:11:35 by maissam           #+#    #+#             */
/*   Updated: 2025/10/25 10:24:17 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	fsize;

	if (size == 0 || n == 0)
	{
		return (malloc(0));
	}
	if (size > (SIZE_MAX / n))
	{
		return (NULL);
	}
	fsize = (n * size);
	ptr = malloc(fsize);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, fsize);
	return (ptr);
}
/*#include <stdio.h>

int main (void)
{
	int *ar;
	size_t i = 0;
	size_t n = 100;
	ar = ft_calloc(n , sizeof(int));
	if(!ar)
	{
		return 0;
	}
	while (i < n)
	{
		printf("%d", ar[i]);
		i++;
	}
	free (ar);
}*/
