/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:58:47 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/24 18:30:23 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

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