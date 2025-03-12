/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_source.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 18:43:06 by diegomor          #+#    #+#             */
/*   Updated: 2025/03/12 20:21:17 by diegomor         ###   ########.fr       */
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
		return (write(1, "(null)", 6));
	len = ft_strlen(s);
	check_s = write(1, s, len);
	if (check_s == -1)
		return (-1);
	return (len);
}

int	ft_putnbr_src(int nbr)
{
	char	*nbtoa;
	int		len;

	nbtoa = ft_itoa(nbr);
	if (nbtoa == NULL)
		return (-1);
	len = ft_putstr_src(nbtoa);
	free(nbtoa);
	return (len);
}

static int	nbr_length(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_putunsigned_src(unsigned int nbr)
{
	char			*str;
	unsigned int	size;
	unsigned int	len;

	size = nbr_length(nbr);
	str = (char *)malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (-1);
	if (nbr == 0)
		str[0] = '0';
	str[size] = '\0';
	while (nbr > 0)
	{
		size--;
		str[size] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	len = ft_putstr_src(str);
	free(str);
	return (len);
}
