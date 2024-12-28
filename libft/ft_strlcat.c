/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:21:46 by diego             #+#    #+#             */
/*   Updated: 2024/10/17 12:20:29 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			dst_length;
	size_t			src_length;
	unsigned int	i;

	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	i = 0;
	if (dstsize <= dst_length)
		return (dstsize + src_length);
	while (src[i] && (dst_length + 1) < dstsize)
	{
		dst[dst_length] = src[i];
		dst_length++;
		i++;
	}
	dst[dst_length] = '\0';
	return (dst_length + src_length - i);
}

// int main(void)
// {
//     char dst1[20] = "Hello";
//     char dst2[20] = "Hello";
//     char dst3[20] = "Hello";
//     const char src[] = "World";
//     size_t dstsize;
//     size_t result;

// // Teste 1: dstsize menor que o comprimento de dst
// 	dstsize = 3;  // Menor que o tamanho de "Hello"
// 	result = ft_strlcat(dst1, src, dstsize);
// 	printf("dst: \"%s\", src:\"%s\", dstsize = %zu\n", dst1, src, dstsize);
// 	printf("Resultado (retorno): %zu\n", result);
// 	// printf("Esperado (strlcat): %zu\n", strlcat(dst1, src, dstsize));
// 	printf("String resultante: \"%s\"\n\n", dst1);

// // Teste 2: dstsize menor que a soma da concatenação
// 	dstsize = 8;  // Capacidade insuficiente para a concatenação completa
// 	result = ft_strlcat(dst2, src, dstsize);
// 	printf("dst:\"%s\", src:\"%s\", dstsize:%zu\n", dst2, src, dstsize);
// 	printf("Resultado (retorno): %zu\n", result);
// 	// printf("Esperado (strlcat): %ld\n", strlcat(dst2, src, dstsize));
// 	printf("String resultante: \"%s\"\n\n", dst2);

// // Teste 3: dstsize suficiente para a concatenação completa
// 	dstsize = 15;  // Capacidade suficiente para "Hello" + "World"
// 	result = ft_strlcat(dst3, src, dstsize);
// 	printf("dst = \"%s\", src = \"%s\", dstsize = %zu\n", dst3, src, dstsize);
// 	printf("Resultado (retorno): %zu\n", result);
// 	// printf("Esperado (strlcat): %zu\n", strlcat(dst3, src, dstsize));
// 	printf("String resultante: \"%s\"\n", dst3);

// 	return (0);
// }