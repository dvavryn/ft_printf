/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvavryn <dvavryn@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:46:32 by dvavryn           #+#    #+#             */
/*   Updated: 2025/04/28 12:44:44 by dvavryn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	out;
	int	sign;
	int	i;

	out = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		out = out * 10 + (nptr[i] - '0');
		i++;
	}
	return (out * sign);
}
/* #include <stdio.h>
#include <stdlib.h> // for atoi comparison

int main(void)
{
    // Test cases
    char *tests[] = {
        "42",           // basic positive number
        "-42",          // basic negative number
        "0",            // zero
        "+123",         // positive with explicit +
        "   456",       // whitespace before
        "   -789  ",    // whitespace before and after
        "   +123abc",   // non-digit characters after
        "2147483647",   // INT_MAX
        "-2147483648",  // INT_MIN
        "9999999999",   // overflow
        "-9999999999",  // underflow
        "   \t\n\v\f\r +123", // various whitespace characters
        "++123",        // invalid signs
        "--456",        // invalid signs
        "-+789",        // invalid signs
        "abc123",       // no digits at start
        "",             // empty string
        NULL            // NULL pointer (should be handled if possible)
    };
    
    int num_tests = sizeof(tests) / sizeof(tests[0]) - 1; // exclude NULL
    
    printf("Testing ft_atoi():\n");
    printf("%-20s | %-10s | %-10s\n", "Input", "ft_atoi", "atoi");
    printf("--------------------------------------------\n");
    
    for (int i = 0; i < num_tests; i++) {
        int ft_result = ft_atoi(tests[i]);
        int std_result = atoi(tests[i]);
        
        printf("%-20s | %-10d | %-10d", tests[i], ft_result, std_result);
        
        if (ft_result != std_result) {
            printf(" [FAIL]");
        }
        printf("\n");
    }
    
    // Test NULL pointer (if your function handles it)
    printf("\nTesting NULL pointer:\n");
    printf("ft_atoi(NULL) = %d\n", ft_atoi(NULL));
    
    return 0;
} */