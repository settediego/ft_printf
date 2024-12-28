/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:57:46 by diegomor          #+#    #+#             */
/*   Updated: 2024/10/28 17:31:42 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]));
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char str1[] = "paradelepipedo";
// 	char str2[] = "para";
// 	int	n = 5;

// 	printf("%d\n", ft_strncmp(str1, str2, n));
// 	printf("%d", strncmp(str1, str2, n));
// 	return (0);
// }