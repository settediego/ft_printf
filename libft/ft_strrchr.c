/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:13:51 by diegomor          #+#    #+#             */
/*   Updated: 2024/10/28 16:04:44 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	len;

	len = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)&s[len]);
	while (len > 0)
	{
		if (s[len - 1] == (unsigned char)c)
			return ((char *)&s[len - 1]);
		len--;
	}
	return (0);
}

// int main(void)
// {
// 	char str[15] = "teste";
// 	int c = 1024 + 'e';

// 	// printf("%p\n", &str[7]);
// 	printf("ft_strrcht: %p \n", ft_strrchr(str, c));
// 	printf("strrchr:    %p \n", strrchr(str, c));

// 	return(0);
// }