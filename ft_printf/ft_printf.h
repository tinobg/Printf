/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brjoves <brjoves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:53:26 by brjoves           #+#    #+#             */
/*   Updated: 2023/11/16 17:38:06 by brjoves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stddef.h>

int		ft_printf(const char *str, ...);
void	ft_hexadecimal(unsigned int x, int *len, char xx);
void	ft_nbr(int nb, int *len);
void	ft_pointer(size_t ptr, int *len);
void	ft_putchar_len(char c, int *len);
void	ft_str(char *args, int *len);
void	ft_unsigned_int(unsigned int u, int *len);

#endif
