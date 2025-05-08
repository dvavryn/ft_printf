/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 22:17:10 by dvavryn           #+#    #+#             */
/*   Updated: 2025/04/29 11:35:12 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_puts(char *s);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);
int	ft_putnbr_hex(int c, unsigned int n);
int	ft_padress(void *p);
int	ft_putulong_hex(unsigned long n);

#endif