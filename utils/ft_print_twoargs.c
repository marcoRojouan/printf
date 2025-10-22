/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_twoargs.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:13:31 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/22 15:05:45 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void print_twoargs(char *fmt, ...)
{	
	va_list list;
	va_start (list, fmt);
	int i = 0;

	while (fmt[i])
	{
		if (fmt[i] == 's')
		{
			ft_putnbr_fd(ft_strlen(va_arg(list, char *)), 1);
		}
		i++;
	}
	va_end(list);
}

int main(void)
{
	print_twoargs("sss", "bwerweradaboum", "caca", "pipi");
}