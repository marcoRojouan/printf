/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:33:42 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/23 18:50:08 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include "libft/libft.h"

int	ft_print_char(va_list list);
int	ft_print_str(va_list list);
int	ft_print_int(va_list list);
int ft_print_hex(va_list list, char c);
int	ft_printf(const char *format, ...);

// static int ft_putnbr_hex(unsigned int nbr, char c);

#endif