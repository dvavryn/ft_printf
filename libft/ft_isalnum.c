/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:12:08 by dvavryn           #+#    #+#             */
/*   Updated: 2025/04/28 13:25:44 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/* #include <stdio.h>
int main(void)
{
	int i = 'c';
	int j = '1';
	int k = '-';
	printf("'%c' - %d\n'%c' - %d\n'%c' - %d\n", i, ft_isalnum(i),
	j, ft_isalnum(j), k, ft_isalnum(k));
} */