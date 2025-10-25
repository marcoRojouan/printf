/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loup <loup@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:58:07 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/26 00:53:12 by loup             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_def_type(va_list list, char c)
{
	if (c == 'c')
		return (ft_print_char(list));
	if (c == 's')
		return (ft_print_str(list));
	if (c == 'p')
		return (ft_print_hex(list, c));
	if (c == 'd' || c == 'i')
		return (ft_print_int(list));
	if (c == 'u')
		return (ft_print_uns(list));
	if (c == 'x' || c == 'X')
		return (ft_print_hex(list, c));
	if (c == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	list;

	va_start(list, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += (ft_def_type(list, format[i]) - 1);
		}
		else
			write(1, &format[i], 1);
		count++;
		i++;
	}
	va_end(list);
	return (count);
}
