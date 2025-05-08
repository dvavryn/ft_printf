/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:53:12 by dvavryn           #+#    #+#             */
/*   Updated: 2025/04/28 18:24:41 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (d == s)
		return (dest);
	if (s < d && s + n > d)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}
/* #include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Hello, World!";
	char strx[] = "Hello, World!";
    char buffer[20];
	char bufferx[20];

    memmove(buffer, str, strlen(str) + 1);
    printf("Test 1 (non-overlapping): %s\n", buffer);
	ft_memmove(bufferx, strx, strlen(strx) + 1);
    printf("Test 1 (non-overlapping): %s\n", bufferx);

    memmove(str, str + 7, strlen(str + 7) + 1);
    printf("Test 2 (overlapping left): %s\n", str);
	ft_memmove(strx, strx + 7, strlen(strx + 7) + 1);
    printf("Test 2 (overlapping left): %s\n", strx);

    char str2[] = "Hello, World!";
	char str2x[] = "Hello World!";
    memmove(str2 + 7, str2, strlen(str2) + 1);
    printf("Test 3 (overlapping right): %s\n", str2 + 7);
	ft_memmove(str2x + 7, str2x, strlen(str2x) + 1);
    printf("Test 3 (overlapping right): %s\n", str2x + 7);
} */