/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 21:19:29 by dvavryn           #+#    #+#             */
/*   Updated: 2025/05/09 13:03:03 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puts(char *s)
{
	int	i;

	if (!s)
	{
		ft_puts("(null)");
		return (6);
	}
	i = 0;
	while (s[i] != '\0')
		ft_putchar(s[i++]);
	return (ft_strlen(s));
}
