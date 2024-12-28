/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:49:24 by diegomor          #+#    #+#             */
/*   Updated: 2024/11/04 13:41:08 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checklength(int n)
{
	int	countlength;

	countlength = 0;
	if (n <= 0)
		countlength++;
	while (n != 0)
	{
		n = n / 10;
		countlength++;
	}
	return (countlength);
}

char	*ft_itoa(int n)
{
	char	*newstr;
	size_t	length;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	length = checklength(n);
	newstr = (char *)malloc((length + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	if (n == 0)
		newstr[0] = '0';
	if (n < 0)
	{
		newstr[0] = '-';
		n = -n;
	}
	newstr[length] = '\0';
	while (n > 0)
	{
		length--;
		newstr[length] = (n % 10) + '0';
		n = n / 10;
	}
	return (newstr);
}
