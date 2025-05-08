/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:08:32 by dvavryn           #+#    #+#             */
/*   Updated: 2025/04/28 12:24:34 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/* #include <stdio.h>
int main(void)
{
	int i = 'c';
	int j = '1';
	printf("'%c' - %d\n'%c' - %d\n", i, ft_isalpha(i), j, ft_isalpha(j));
} */