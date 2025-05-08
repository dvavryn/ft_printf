/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:13:29 by dvavryn           #+#    #+#             */
/*   Updated: 2025/04/28 12:25:27 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/* #include <stdio.h>
int main(void)
{
	int i = 'c';
	int j = 200;
	printf("'%c' - %d\n'%c' - %d\n", i, ft_isascii(i), j, ft_isascii(j));
} */