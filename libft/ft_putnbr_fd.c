/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 22:50:04 by dvavryn           #+#    #+#             */
/*   Updated: 2025/04/28 13:33:36 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd((n % 10) + '0', fd);
}
/* #include <stdio.h>
#include <limits.h>
int main(void)
{
	int i[5] = {
		0,
		150,
		-4078,
		INT_MAX,
		INT_MIN
	};
	int j = 0;
	while (j < 5)
	{
		ft_putnbr_fd(i[j], 1);
		printf("\n");
		j++;
	}
} */