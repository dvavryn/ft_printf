/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:10:30 by dvavryn           #+#    #+#             */
/*   Updated: 2025/04/28 12:26:16 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/* #include <stdio.h>
int main(void)
{
	int i = 'a';
	int j = '1';
	printf("'%c' - %d\n'%c' - %d\n", i, ft_isdigit(i), j, ft_isdigit(j));
} */