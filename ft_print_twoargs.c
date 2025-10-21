/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_twoargs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:13:31 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/21 17:41:01 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void print_twoargs(char *fmt, ...)
{	
	va_list list;
	va_start (list, fmt);
	int i = 0;

	while (fmt[i])
	{
		if (fmt[i] == 's')
			ft_putendl_fd(va_arg(list, char *), 1);
		else if (fmt[i] == 'd')
			ft_putnbr_fd(va_arg(list, int), 1);
		i++;
	}
	va_end(list);
}

int main(void)
{
	print_twoargs("sd", "badaboum", 456);
}