/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:58:32 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/23 18:53:11 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(va_list list)
{
	int	c;

	c = va_arg(list, int);	
	ft_putchar_fd(c, 1);
	return (1);
}
