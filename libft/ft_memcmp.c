/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:09:19 by diego             #+#    #+#             */
/*   Updated: 2024/10/25 11:10:12 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int main(){
//   char fonteA[23] = "Compu'\0'         tacao";
//   char fonteB[23] = "Compu'\0'         tacap";
//   printf("Bloco de memória A: %s\n", fonteA);
//   printf("Bloco de memória B: %s\n", fonteB);
//   printf("Valor da primeira comparação: %d\n", 
//   memcmp(fonteA, fonteB, sizeof(fonteA)));
//   printf("Valor da primeira comparação: %d\n\n", 
//   ft_memcmp(fonteA, fonteB, sizeof(fonteA)));

//   char fonteC[12] = "BCcC";
//   char fonteD[12] = "BCC";
//   printf("String C: %s\n", fonteC);
//   printf("String D: %s\n", fonteD);
//   printf("Valor da segunda comparação: %d\n",
//   memcmp(fonteC, fonteD, sizeof(fonteC)));
//   printf("Valor da segunda comparação: %d\n\n",
//   ft_memcmp(fonteC, fonteD, sizeof(fonteC)));

//   return 0;
// }	