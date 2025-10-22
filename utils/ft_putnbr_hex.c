/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:06:51 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/22 17:52:23 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_putnbr_hex(unsigned int nbr, char c)
{
	int i = 0;
	char *base;
	char *baseM;
	
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
#include <stdio.h>

int main(void)
{
	printf("%d", ft_putnbr_hex(12341234, 'x'));
	write(1, "\n", 1);
	printf("%d", ft_putnbr_hex(12341234, 'X'));
	write(1, "\n", 1);
}