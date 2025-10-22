/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:58:07 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/22 17:58:26 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "printf.h"

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
			c = format[i + 1];
			if(c == 'c')
				ft_print_char(list);
			else if (c == 's')
				ft_print_str(list);
			else if (c == 'i' || c == 'd')
				ft_print_int(list);
			else if (c == 'x' || c == 'X')
				ft_print_hex(list, c);
		}
		i++;
	}	
	va_end(list);
}

#include <stdio.h>

int main(void)
{
	ft_printf("caca du %s ca mets %d minutes", "pipi", 3);
}