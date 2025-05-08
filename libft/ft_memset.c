/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:26:33 by dvavryn           #+#    #+#             */
/*   Updated: 2025/04/28 12:50:30 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	uc;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n > 0)
	{
		ptr[i] = uc;
		i++;
		n--;
	}
	return (s);
}
/* #include <stdio.h>
#include <string.h>

void    *ft_memset(void *s, int c, size_t n);

int main(void)
{
    char str1[20] = "Hello, World!";
    char str2[20] = "Hello, World!";
    int c = '*';
    size_t n = 5;

    printf("Original string: %s\n", str1);
    
    // Test your ft_memset
    ft_memset(str1, c, n);
    printf("After ft_memset: %s\n", str1);
    
    // Compare with standard memset
    memset(str2, c, n);
    printf("After memset:    %s\n", str2);
    
    // Check if they match
    if (memcmp(str1, str2, 20) == 0)
        printf("SUCCESS: ft_memset matches memset!\n");
    else
        printf("FAIL: ft_memset differs from memset\n");
    
    return (0);
} */