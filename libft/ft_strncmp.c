/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:25:37 by dvavryn           #+#    #+#             */
/*   Updated: 2025/04/28 13:19:14 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/* #include <stdio.h>
int main(void)
{
	char *s1 = "Hello World here I am";
	char *s2 = "Hello world here I am";
	int i = 5;
	int j = 10;
	
	printf("s1 & s2 = %i", ft_strncmp(s1, s2, i));
	printf("s1 & s2 = %i", ft_strncmp(s1, s2, j));
} */
