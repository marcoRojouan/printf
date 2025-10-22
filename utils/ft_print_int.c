/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:59:02 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/22 16:19:39 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_print_int(va_list list)
{
	int	len;
	int	nbr;

	nbr = va_arg(list, int);
	len = ft_nbrlen(nbr);
	ft_putnbr_fd(nbr, 1);
	return (len);	
}