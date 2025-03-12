/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 19:42:05 by diegomor          #+#    #+#             */
/*   Updated: 2025/03/12 20:22:39 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_and_count(va_list args, const char *format)
{
	int	counter;

	counter = 0;
	if (*format == '\0')
		return (-1);
	else if (*format == 'c')
		counter = ft_putchar_src(va_arg(args, int));
	else if (*format == 's')
		counter = ft_putstr_src(va_arg(args, char *));
	else if (*format == 'p')
		counter = ptr_to_hex(va_arg(args, uintptr_t));
	else if (*format == 'd' || *format == 'i')
		counter = ft_putnbr_src(va_arg(args, int));
	else if (*format == 'u')
		counter = ft_putunsigned_src(va_arg(args, unsigned int));
	// else if (*format == 'x')
	// 	counter = 
	// else if (*format == 'X')
	// 	counter = 
	else if (*format == '%')
		counter = ft_putchar_src('%');
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list			args;
	unsigned int	counter;
	int				check;

	va_start (args, format);
	if (!format)
		return (0);
	counter = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			check = print_and_count(args, format);
			if (check > -1)
				counter += check;
			else
				return (-1);
		}
		else
			counter += ft_putchar_src(*format);
		format++;
	}
	va_end(args);
	return (counter);
}

int	main(void)
{
	int	size;
	int	size1;
	char *s = NULL;

	size = printf("%p\n", s);
	size1 = ft_printf("%p\n", s);
	printf("%d\n%d", size, size1);
	return 0;
}