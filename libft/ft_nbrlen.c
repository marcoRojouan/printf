/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojouan <mrojouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 15:38:11 by mrojouan          #+#    #+#             */
/*   Updated: 2025/10/22 15:38:24 by mrojouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_nbrlen(long nbr)
{
	int	nbr_count;

	nbr_count = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		nbr_count++;
	}
	return (nbr_count);
}