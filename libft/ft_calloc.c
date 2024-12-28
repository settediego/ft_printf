/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:01:18 by diegomor          #+#    #+#             */
/*   Updated: 2024/10/30 17:47:40 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*dest;

	if (num && size * num > INT_MAX)
		return (NULL);
	dest = (unsigned char *)malloc(size * num);
	if (!dest)
		return ((void *)0);
	ft_bzero(dest, num * size);
	return ((void *)dest);
}
