/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:59:02 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/23 18:53:28 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(va_list list)
{
	int	nbr;

	nbr = va_arg(list, int);
	ft_putnbr_fd(nbr, 1);
	return (1);
}