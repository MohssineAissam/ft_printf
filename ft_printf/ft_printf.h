/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:46:08 by maissam           #+#    #+#             */
/*   Updated: 2025/11/05 18:20:13 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_puthex(unsigned int n, char specifier);
int	ft_printf_putstr(char *s, int fd);
int	ft_putaddress(void *p);
int	ft_printf_putchar(char c, int fd);
int	ft_printf_putnbr(int n, int fd);
int	ft_putunsigned(unsigned int n);

#endif
