/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:33:42 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/25 16:08:52 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

// Core
int		ft_printf(const char *format, ...);

// Print functions
int		ft_print_char(va_list list);
int		ft_print_str(va_list list);
int		ft_print_int(va_list list);
int		ft_print_uns(va_list list);
int		ft_print_hex(va_list list, char c);

#endif