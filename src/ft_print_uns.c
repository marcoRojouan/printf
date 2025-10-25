/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:05:50 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/25 16:19:47 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_uns(unsigned int nbr)
{
	int		count;
	char	c;

	count = 0;
	if (nbr >= 10)
		count += ft_putnbr_uns(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
	return (count + 1);
}

int	ft_print_uns(va_list list)
{
	unsigned int	nbr;
	int				len;

	nbr = va_arg(list, unsigned int);
	len = ft_putnbr_uns(nbr);
	return (len);
}
