/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:39:02 by diegomor          #+#    #+#             */
/*   Updated: 2024/10/13 23:24:50 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[12];

// 	strcpy(str, "hello world");
// 	printf("antes: %s\n", str);
// 	ft_memset(str, '7', 3);
// 	printf("depois: %s\n", str);
// 	return (0);
// }
