/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:58:32 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/22 15:32:05 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	ft_print_char(va_list list)
{
	char	c;

	c = va_arg(list, char);	
	ft_putchar_fd(va_arg(list, char), 1);
	return (1);
}
