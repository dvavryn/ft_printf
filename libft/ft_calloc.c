/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:53:02 by dvavryn           #+#    #+#             */
/*   Updated: 2025/04/28 12:55:52 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*out;
	size_t	total;

	total = nmemb * size;
	if (nmemb == 0 || size == 0 || total / nmemb != size)
		return (NULL);
	out = malloc(nmemb * size);
	if (!out)
		return (NULL);
	ft_bzero(out, nmemb * size);
	return (out);
}
/* #include <stdio.h>
int main(void)
{
	int *i;
	size_t size = 2;
	size_t counter = 0;
	i = calloc(size, sizeof(int));
	while (counter < size)
		printf("%i", i[counter++]);
	free(i);
} */