/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjoves <brjoves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:44:07 by brjoves           #+#    #+#             */
/*   Updated: 2023/11/16 17:30:06 by brjoves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_check(char c, va_list *args, int *len, int *i)
{
	if (c == 's')
		ft_str(va_arg(*args, char *), len);
	else if (c == 'd' || c == 'i')
		ft_nbr(va_arg(*args, int), len);
	else if (c == 'u')
		ft_unsigned_int(va_arg(*args, unsigned int), len);
	else if (c == 'x')
		ft_hexadecimal(va_arg(*args, unsigned int), len, 'x');
	else if (c == 'X')
		ft_hexadecimal(va_arg(*args, unsigned int), len, 'X');
	else if (c == 'p')
		ft_pointer(va_arg(*args, size_t), len);
	else if (c == 'c')
		ft_putchar_len(va_arg(*args, int), len);
	else if (c == '%')
		ft_putchar_len('%', len);
	else
		(*i)--;
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			ft_check(str[i], &args, &len, &i);
			i++;
		}
		else
		{
			ft_putchar_len((char)str[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}
