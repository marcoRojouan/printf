/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:12:04 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/24 18:30:46 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_hex(unsigned int nbr, char c)
{
	int i;
	char *base;
	char *baseM;
	
	i = 0;
	base = "0123456789abcdef";
	baseM = "0123456789ABCDEF";
	if(nbr >= 16)
		i += ft_putnbr_hex(nbr / 16, c);
	if (c == 'x')
		write(1, &base[nbr % 16], 1);
	else if (c == 'X')
		write(1, &baseM[nbr % 16], 1);
	return (i + 1);
}

int	ft_print_hex(va_list list, char c)
{
	int nbr;
	int len;

	nbr = va_arg(list, int);
	if (!nbr)
		return (0);
	len = ft_putnbr_hex(nbr, c);
	return (len);
}
