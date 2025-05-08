/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:13:16 by dvavryn           #+#    #+#             */
/*   Updated: 2025/04/28 17:08:39 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	i;
	size_t	j;

	out = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!out)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		out[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		out[i] = s2[j];
		i++;
		j++;
	}
	out[i] = '\0';
	return (out);
}
/* #include <stdio.h>
int main(void)
{
	char *s1 = "Hello World ";
	char *s2 = "I am a string";
	char *s3;
	s3 = ft_strjoin(s1, s2);
	printf("%s", s3);
	free (s3);
} */