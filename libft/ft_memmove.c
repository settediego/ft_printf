/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:20:32 by diegomor          #+#    #+#             */
/*   Updated: 2024/10/28 17:38:13 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest_str, const void *src_str, size_t n)
{
	size_t	i;

	i = 0;
	if ((dest_str == NULL) && (src_str == NULL))
		return (NULL);
	if (dest_str <= src_str)
	{
		while (n > i)
		{
			((char *)dest_str)[i] = ((char *)src_str)[i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			((char *)dest_str)[n - 1] = ((char *)src_str)[n - 1];
			n--;
		}
	}
	return (dest_str);
}

// int main(void) {
//     char src1[] = "con\0sec\0\0te\0tur";
//     char dest1[50] = "con^@sec^@^@t dolor sit a";

//     printf("Antes da cópia (sem sobreposição):\n");
//     printf("src1: %s\n", src1);
//     printf("dest1: %s\n\n", dest1);

//     printf("Endereço de src1: %p\n", (void *)src1);
//     printf("Endereço de dest1: %p\n\n", (void *)dest1);

//     ft_memmove(dest1, src1, 5);
//     // printf("Depois da cópia (sem sobreposição):\n");
// 	// memmove(dest1, src1, 10);
//     printf("dest1: %s\n", dest1);

//     return 0;
// }