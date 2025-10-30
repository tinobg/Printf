/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjoves <brjoves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:43:38 by brjoves           #+#    #+#             */
/*   Updated: 2023/11/16 14:19:18 by brjoves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer(size_t ptr, int *len)
{
	char	str[25];
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 0;
	if (!ptr)
		ft_str("(nil)", len);
	else
	{
		write (1, "0x", 2);
		(*len) += 2;
	}
	while (ptr != 0)
	{
		str[i] = base[ptr % 16];
		ptr = ptr / 16;
		i++;
	}
	while (i--)
	{
		ft_putchar_len(str[i], len);
	}
}
