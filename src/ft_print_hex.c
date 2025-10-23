/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:06:09 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/23 18:53:20 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_hex(unsigned int nbr, char c);

int	ft_print_hex(va_list list, char c)
{
	static int nbr;
	int len;

	nbr = va_arg(list, int);
	if (!nbr)
		return (0);
	len = ft_putnbr_hex(nbr, c);
	return (len);
	
}