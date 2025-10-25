/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:59:02 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/25 17:44:31 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr_fd(int n, int fd)
{
	int		count;
	char	c;

	count = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		count += write(fd, "-", 1);
		n = n * -1;
	}
	if (n >= 10)
		count += ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	count += write(fd, &c, 1);
	return (count);
}

int	ft_print_int(va_list list)
{
	int	nbr;
	int	result;

	nbr = va_arg(list, int);
	result = ft_putnbr_fd(nbr, 1);
	return (result);
}
