/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:14:42 by dvavryn           #+#    #+#             */
/*   Updated: 2025/04/28 12:46:04 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/* #include <stdio.h>
int main(void)
{
	int i = 'a';
	int j = 25;
	printf("'%c' - %d\n'%c' - %d\n", i, ft_isprint(i), j, ft_isprint(j));
} */