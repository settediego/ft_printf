/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegomor <diegomor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 18:45:54 by diegomor          #+#    #+#             */
/*   Updated: 2025/03/12 23:09:24 by diegomor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// Standard Libraries
# include "libft/libft.h"
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

// Functions
int	ft_putchar_src(char c);
int	ft_putstr_src(char *s);
int	ft_putnbr_src(int nbr);
int	ft_putunsigned_src(unsigned int nbr);
int	ptr_to_hex(uintptr_t nbr);
int	lower_x_to_hex(unsigned int nbr);
int	upper_x_to_hex(unsigned int nbr);

#endif