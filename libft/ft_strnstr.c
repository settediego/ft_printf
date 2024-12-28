/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:33:15 by diego             #+#    #+#             */
/*   Updated: 2024/10/28 17:40:10 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	size_t			needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && len > 0)
	{
		j = 0;
		if (haystack[i] == needle[j] && len >= needle_len)
		{
			while (haystack[i + j] == needle[j] && needle[j] != '\0')
				j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
		len--;
	}
	return (0);
}

// int main(void)
// {
// 	size_t	len = 15;
// 	char *h1 = "Hello World!";
// 	char *result = ft_strnstr(h1, "e", len);
// 	printf("%s \n", result);
// 	printf("%s", h1);
// 	return(0);
// }