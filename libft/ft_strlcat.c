/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:26:24 by dvavryn           #+#    #+#             */
/*   Updated: 2025/04/28 13:25:04 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	i;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (s);
	if (size <= d)
		return (size + s);
	while (d + i < size - 1 && src[i] != '\0')
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}
/* #include <stdio.h>
int main(void)
{
	char *s1 = " I am a string";
	char s2[40] = "Hello World";
	ft_strlcat(s2, s1, 20);
	printf("%s", s2);
} */