/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:53:31 by maissam           #+#    #+#             */
/*   Updated: 2025/10/24 18:43:08 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	if (!s)
	{
		return ;
	}
	len = ft_strlen(s);
	write(fd, s, len);
}
/*#include <fcntl.h>
#include <stdio.h>
int main (void)
{
	int fd = open("ss.txt", O_CREAT | O_RDWR | O_APPEND, 0644);
	if (fd == -1)
	{
		return (1);
	}
	char *s = "test";
	ft_putstr_fd(s,fd);
	printf("%d",fd);
	close (fd);
}*/
