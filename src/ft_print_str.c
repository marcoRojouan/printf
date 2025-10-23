/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:58:47 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/23 18:53:35 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(va_list list)
{
	int		len;
	char 	*str;

	str = va_arg(list, char *);
	if (!str)
	{
		str = "(null)";
		ft_putstr_fd(str, 1);
		return (6);
	}
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);	
	return (len);
}