/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diego <diego@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 19:42:05 by diegomor          #+#    #+#             */
/*   Updated: 2024/12/28 18:57:21 by diego            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf (const char *format, ...)
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
		if(*format == '%')
		{
			
		}
		else
			counter += // FUNCAO QUE VAI CONTAR E PRINTAR OS CARACTERES
		format++;
	}
	va_end(args);
	return (counter);
}
