/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:12:04 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/26 11:24:09 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_hex(unsigned long nbr, char c)
{
	int		count;
	char	*base;
	char	*base_m;

	count = 0;
	base = "0123456789abcdef";
	base_m = "0123456789ABCDEF";
	if (nbr >= 16)
		count += ft_putnbr_hex(nbr / 16, c);
	if (c == 'x')
		write(1, &base[nbr % 16], 1);
	else if (c == 'X')
		write(1, &base_m[nbr % 16], 1);
	return (count + 1);
}

static int	ft_print_pointer(void *ptr)
{
	unsigned long	ptr_nbr;
	int				count;

	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	count = 0;
	ptr_nbr = (unsigned long)ptr;
	count += write(1, "0x", 2);
	count += ft_putnbr_hex(ptr_nbr, 'x');
	return (count);
}

int	ft_print_hex(va_list list, char c)
{
	unsigned long	element;
	void			*ptr;
	int				len;

	if (c == 'p')
	{
		ptr = va_arg(list, void *);
		len = ft_print_pointer(ptr);
		return (len);
	}
	element = va_arg(list, unsigned int);
	len = ft_putnbr_hex(element, c);
	return (len);
}
