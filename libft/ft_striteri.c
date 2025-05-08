/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 22:39:25 by dvavryn           #+#    #+#             */
/*   Updated: 2025/04/28 17:00:00 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/* #include <stdio.h>
static void uppercase_odd(unsigned int index, char *c)
{
	if (index %2 == 1 && *c >= 'a' && *c <= 'z')
		*c = *c - 32;
}
int main(void)
{
    char test_str[] = "hello world";
    printf("Original string: %s\n", test_str);
    ft_striteri(test_str, uppercase_odd);
    printf("Modified string: %s\n", test_str);
} */