/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_source.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 18:43:06 by diegomor          #+#    #+#             */
/*   Updated: 2025/01/04 19:21:49 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_src(char c)
{
	return (write (1, &c, 1));
}

int	ft_putstr_src(char *s)
{
	int	len;
	int	check_s;
	
	if (s == NULL)
		return(write(1,"(null)", 6));
	len = ft_strlen(s);
	check_s = write(1, s, len);
	if (check_s == -1)
		return (-1);
	return (len);
}

