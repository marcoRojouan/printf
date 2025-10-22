/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:33:42 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/22 18:00:30 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_F
#define PRINT_F

#include "libft/libft.h"

int	ft_print_char(va_list list);
int	ft_print_str(va_list list);
int	ft_print_int(va_list list);

void	ft_putnbr_hex(unsigned int nbr, char c);


#endif