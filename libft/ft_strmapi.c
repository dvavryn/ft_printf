/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:31:10 by dvavryn           #+#    #+#             */
/*   Updated: 2025/04/28 17:45:54 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map;
	unsigned int	i;

	map = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!map)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		map[i] = f(i, s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
/* char sample_map(unsigned int i, char c)
{
    if (i % 2 == 0)
        if (c >= 'a' && c <= 'z')
            return c - 32;
    return c;
}
#include <stdio.h>
int main(void)
{
    const char *test_str = "hello world!";
    char *result;
    
    printf("Original string: %s\n", test_str);
    result = ft_strmapi(test_str, sample_map);
    if (!result)
		return (-1);
    printf("Mapped string:   %s\n", result);
    printf("Expected result: HeLlO WoRlD!\n");
    free(result);
} */