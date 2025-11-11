int	ft_printf(const char *format, ...)
{
	int		count;
	int		print_len;
	va_list	ap;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			while (*++format == ' ')
				;
			if (!*format)
				return (va_end(ap), -1);
			// This ternary operator saves 2 lines (if/else)
			print_len = ft_strchr("csdiuXxp%", *format)
				? print_format(*format, &ap)
				: write(1, "%", 1) + write(1, format, 1);
		}
		else
			print_len = write(1, format, 1);
		if (print_len == -1)
			return (va_end(ap), -1);
		count += print_len; // <-- Bug fixed
		format++;
	}
	va_end(ap);
	return (count);
}
