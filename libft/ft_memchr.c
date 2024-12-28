/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:10:00 by diegomor          #+#    #+#             */
/*   Updated: 2024/10/23 23:40:26 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*start;

	i = 0;
	start = (unsigned char *)s;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (*start == (unsigned char)c)
			return ((void *)start);
		start++;
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char str[15] = "Hello World!";
// 	int	c = 'H';

// 	printf("ft_memchr %p\n", ft_memchr(str, c, 3));
// 	printf("memchr %p\n", memchr(str, c, 3));

// 	return (0);
// }