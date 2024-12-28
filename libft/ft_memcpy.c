/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:56:45 by diegomor          #+#    #+#             */
/*   Updated: 2024/10/28 17:34:53 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	dest_ptr = (unsigned char *)dest_str;
	src_ptr = (unsigned char *)src_str;
	if (dest_ptr == NULL && src_ptr == NULL)
		return (NULL);
	while (n--)
		*dest_ptr++ = *src_ptr++;
	return (dest_str);
}

// int	main(void)
// {
// 	char	src[50];
// 	char	dest[50];
// 	strcpy(src, "12345");
// 	strcpy(dest, "Hello World");
// 	printf("Before ft_memcpy function: %s\n", dest);
// 	ft_memcpy(dest, src, 5);
// 	printf("After ft_memcpy function: %s\n", dest);
// 	return(0);
// }

// What is the while doing:
// while (n > 0)
// {
// 	*dest_ptr = *src_ptr;
// 	dest_ptr++;
// 	src_ptr++;
// 	n--;
// }