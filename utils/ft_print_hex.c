/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:06:09 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/22 17:32:44 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_hex(va_list list, char c)
{
	int nbr;
	int len;

	nbr = list;
	len = ft_nbrlen(nbr);
	ft_putnbr_hex(nbr, c);
}