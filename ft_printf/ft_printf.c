/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissam <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 06:55:45 by maissam           #+#    #+#             */
/*   Updated: 2025/11/08 10:21:54 by maissam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	print_format(char specifier, va_list *ap)
{
	int	len;

	len = 0;
	if (specifier == 'c')
		len += ft_printf_putchar(va_arg(*ap, int), 1);
	else if (specifier == 'd')
		len += ft_printf_putnbr(va_arg(*ap, int), 1);
	else if (specifier == 's')
		len += ft_printf_putstr(va_arg(*ap, char *), 1);
	else if (specifier == 'i')
		len += ft_printf_putnbr(va_arg(*ap, int), 1);
	else if (specifier == 'u')
		len += ft_putunsigned(va_arg(*ap, unsigned int));
	else if (specifier == 'X' || specifier == 'x')
		len += ft_puthex(va_arg(*ap, unsigned int), specifier);
	else if (specifier == 'p')
		len += ft_putaddress(va_arg(*ap, void *));
	else if (specifier == '%')
		len += write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	int		print_len;
	va_list	ap;

	count = 0;
	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			while (*format == ' ')
				format++;
			if (!*format)
				return (va_end(ap), -1);
			if (ft_strchr("csdiuXxp%,", *format))
				print_len = print_format(*format, &ap);
			else
				print_len = write(1, "%", 1) + write(1, format, 1);
		}
		else
			print_len = write(1, format, 1);
		if (print_len == -1)
			return (va_end(ap), -1);
		count += print_len;
		format++;
	}
	va_end(ap);
	return count;
}

