/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:45:15 by dvavryn           #+#    #+#             */
/*   Updated: 2025/04/28 17:52:23 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/* #include <stdio.h>
int main(void)
{
	char *s1 = "Hello World";
	//char *s2 = "        ";
	char *s2 = malloc(6*sizeof(char));

	ft_memcpy(s2, s1, 5);
	printf("%s", s2);
	free (s2);
} */