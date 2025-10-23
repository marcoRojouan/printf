/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:58:07 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/23 18:53:41 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	int	i;
	va_list list;
	va_start(list, format);
	char	c;

	i = 0;
	while(format[i])
	{
		if (format[i] == '%')
		{
			i++;
			c = format[i];
			if(c == 'c')
				ft_print_char(list);
			else if (c == 's')
				ft_print_str(list);
			else if (c == 'i' || c == 'd')
				ft_print_int(list);
			else if (c == 'x' || c == 'X')
				ft_print_hex(list, c);
		}
		else 
			ft_putchar_fd(format[i], 1);
		i++;
	}	
	va_end(list);
	return (0);
}

int main(void)
{
	ft_printf("%s %s %d asdfasdfasfsadfsafasf", "pipi", "oups pardon", 3);
}