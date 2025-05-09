/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 22:17:10 by dvavryn           #+#    #+#             */
/*   Updated: 2025/05/09 13:55:09 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_puts(char *s);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);
int	ft_putnbr_hex(int c, unsigned int n);
int	ft_padress(void *p);
int	ft_putulong_hex(unsigned long n);
size_t	ft_strlen(const char *s);

#endif