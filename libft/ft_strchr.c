/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:01:54 by diegomor          #+#    #+#             */
/*   Updated: 2024/10/28 16:05:08 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (!(unsigned char)c)
		return ((char *)s);
	return (0);
}

// int main(void)
// {
// 	char	str[15] = "Hello World!";
// 	int		c = 'a';
// 	const char *test_str = "teste";
//  int test_char = '\0';
// 	printf("%p\n", (void *)&str[12]);
// 	printf("%p\n", ft_strchr(test_str, test_char));
// 	printf("%p", strchr(test_str, test_char));
// 	return(0);
// }