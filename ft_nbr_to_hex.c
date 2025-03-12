/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:43:04 by diegomor          #+#    #+#             */
/*   Updated: 2025/03/12 20:20:11 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_length(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

int	ptr_to_hex(uintptr_t nbr)
{
	int		hex_size;
	int		len_hex;
	char	*str_hex;
	char	*hex_base;

	if (nbr == 0)
		return (write(1, "(nil)", 5));
	hex_base = "0123456789abcdef";
	hex_size = hex_length(nbr);
	str_hex = (char *)malloc((hex_size + 3) * sizeof(char));
	if (!str_hex)
		return (-1);
	str_hex[0] = '0';
	str_hex[1] = 'x';
	str_hex[hex_size + 2] = '\0';
	while (hex_size > 0)
	{
		str_hex[hex_size + 1] = hex_base[nbr % 16];
		nbr = nbr / 16;
		hex_size--;
	}
	len_hex = ft_putstr_src(str_hex);
	free(str_hex);
	return (len_hex);
}
