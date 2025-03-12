/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:43:04 by diegomor          #+#    #+#             */
/*   Updated: 2025/03/12 23:09:46 by diegomor         ###   ########.fr       */
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
	int		len;
	char	*hex;
	char	*hex_base;

	if (nbr == 0)
		return (write(1, "(nil)", 5));
	hex_base = "0123456789abcdef";
	hex_size = hex_length(nbr);
	hex = (char *)malloc((hex_size + 3) * sizeof(char));
	if (!hex)
		return (-1);
	hex[0] = '0';
	hex[1] = 'x';
	hex[hex_size + 2] = '\0';
	while (hex_size > 0)
	{
		hex[hex_size + 1] = hex_base[nbr % 16];
		nbr = nbr / 16;
		hex_size--;
	}
	len = ft_putstr_src(hex);
	free(hex);
	return (len);
}

int	lower_x_to_hex(unsigned int nbr)
{
	int		len;
	char	*hex;
	char	*hex_base;

	hex_base = "0123456789abcdef";
	len = hex_length(nbr);
	hex = (char *)malloc((len + 1) * sizeof(char));
	hex[len] = '\0';
	if (nbr == 0)
		hex[0] = '0';
	while (nbr > 0)
	{
		len--;
		hex[len] = hex_base[nbr % 16];
		nbr = nbr / 16;
	}
	len = ft_putstr_src(hex);
	free(hex);
	return (len);
}

int	upper_x_to_hex(unsigned int nbr)
{
	int		len;
	char	*hex;
	char	*hex_base;

	hex_base = "0123456789ABCDEF";
	len = hex_length(nbr);
	hex = (char *)malloc((len + 1) * sizeof(char));
	hex[len] = '\0';
	if (nbr == 0)
		hex[0] = '0';
	while (nbr > 0)
	{
		len--;
		hex[len] = hex_base[nbr % 16];
		nbr = nbr / 16;
	}
	len = ft_putstr_src(hex);
	free(hex);
	return (len);
}
