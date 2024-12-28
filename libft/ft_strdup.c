/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 01:13:46 by diego             #+#    #+#             */
/*   Updated: 2024/10/30 16:51:01 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	int		len;

	len = ft_strlen(str) + 1;
	dup = (char *)malloc(len * sizeof(char));
	if (!dup)
		return (0);
	ft_strlcpy(dup, str, len);
	return (dup);
}

// int main(void)
// {
// 	char	str[15] = "bkjlw djlwad";

// 	printf ("%s \n", ft_strdup(str));
// 	printf ("%s \n", strdup(str));
// 	return(0);
// }