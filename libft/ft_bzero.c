/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:42:47 by dvavryn           #+#    #+#             */
/*   Updated: 2025/04/28 12:41:24 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[20] = "Hello, World!";
    char str2[20] = "Hello, World!";
    int n = 5;

    printf("Before ft_bzero: %s\n", str1);
    ft_bzero(str1, n);
    printf("After ft_bzero:  ");
    for (size_t i = 0; i < sizeof(str1); i++) {
        printf("%d ", str1[i]);
    }
    printf("\n");

    // Compare with standard bzero
    printf("\nBefore bzero:    %s\n", str2);
    bzero(str2, n);
    printf("After bzero:     ");
    for (size_t i = 0; i < sizeof(str2); i++) {
        printf("%d ", str2[i]);
    }
    printf("\n");

    // Test with zero length
    char str3[10] = "Test";
    ft_bzero(str3, 0);
    printf("\nZero length test: %s\n", str3);

    return 0;
} */