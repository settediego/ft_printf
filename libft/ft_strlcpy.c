/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:21:53 by diegomor          #+#    #+#             */
/*   Updated: 2024/10/21 20:59:51 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			src_length;
	unsigned int	i;

	i = 0;
	src_length = ft_strlen(src);
	if (size == 0)
		return (src_length);
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_length);
}

// int	main(void)
// {
// 	char	dest1[20] = "test";
// 	char	dest2[20] = "test";
// 	char	dest3[20] = "test";
// 	char	src[20] = "Hello World";
// 	size_t	size;

// 	// Testing size = 0:
// 	size = 0;
// 	printf("for size = 0: %ld \n", ft_strlcpy(dest1, src, size));
// 	printf("dest: %s \n", dest1);
// 	// Testing size > src_length:
// 	size = 15;
// 	printf("for size >: %ld \n", ft_strlcpy(dest2, src, size));
// 	printf("dest: %s \n", dest2);
// 	// Testing size < src_length:
// 	size = 8;
// 	printf("for size <: %ld \n", ft_strlcpy(dest3, src, size));
// 	printf("dest: %s \n", dest3);
// 	return (0);
// }