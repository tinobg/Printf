/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjoves <brjoves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:42:16 by brjoves           #+#    #+#             */
/*   Updated: 2023/11/15 19:54:03 by brjoves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_nbr(int nb, int *len)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_len('-', len);
		ft_nbr(nb * -1, len);
	}
	else
	{
		if (nb > 9)
			ft_nbr(nb / 10, len);
		ft_putchar_len(nb % 10 + '0', len);
	}
}
