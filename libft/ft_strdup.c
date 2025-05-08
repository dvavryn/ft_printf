/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:01:49 by dvavryn           #+#    #+#             */
/*   Updated: 2025/04/28 12:58:38 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*out;
	size_t	i;

	out = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!out)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		out[i] = s[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
/* #include <stdio.h>
int main(void)
{
	char *s1 = "Hello World";
	char *s2;

	s2 = ft_strdup(s1);
	printf("%s - s1\n%s - strdup", s1, s2);
	free (s2);	
} */