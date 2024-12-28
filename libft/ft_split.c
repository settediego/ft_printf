/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:58:01 by diegomor          #+#    #+#             */
/*   Updated: 2024/11/04 21:49:01 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_ptrs(char const *s, char c);
static char	**make_array_ptrs(char **array_ptrs, char const *s, char c);
static char	**ft_free(char **array);

char	**ft_split(char const *s, char c)
{
	char	**array_ptrs;
	char	**final_check;

	if (!s)
		return (NULL);
	array_ptrs = (char **)malloc((nbr_ptrs(s, c) + 1) * sizeof(char *));
	if (!array_ptrs)
		return (NULL);
	final_check = make_array_ptrs(array_ptrs, s, c);
	if (!final_check)
		return (NULL);
	return (array_ptrs);
}

static int	nbr_ptrs(char const *s, char c)
{
	size_t	i;
	size_t	ptrs;

	i = 0;
	ptrs = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			ptrs++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (ptrs);
}

static char	**make_array_ptrs(char **array_ptrs, char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	piece;

	i = 0;
	piece = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			array_ptrs[piece] = ft_substr(s, start, i - start);
			if (!array_ptrs[piece])
				return (ft_free(array_ptrs));
			piece++;
		}
	}
	array_ptrs[piece] = NULL;
	return (array_ptrs);
}

static char	**ft_free(char **array)
{
	size_t	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
	return (NULL);
}
