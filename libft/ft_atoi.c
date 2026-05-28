/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:45:45 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/20 18:20:44 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	while ((*nptr >= 9 && *nptr <= 12) || *nptr == ' ')
	{
		nptr++;
	}
	if (*nptr == '-' && sign == 1)
	{
		sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = (result * 10) + (*nptr - 48);
		nptr++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char str1[] = " -12345gsgfs";
	char str2[] = "      12345gsgfs";
	char str3[] = "\n         12s345gsgfs";
	char str4[] = "    a12345gsgfs";
	char str5[] = "2147483647";
	char str6[] = "-2147483648";
	char str7[] = "";
    
	printf("\n Tests:\n");
	printf("\n Standard:");
	printf("\n Mine: %d     | Real: %d\n", ft_atoi(str1), atoi(str1));
    
	printf("\n Space before numbers:");
	printf("\n Mine: %d     | Real: %d\n", ft_atoi(str2), atoi(str2));
    
	printf("\n Char in the middle of numbers:");
	printf("\n Mine: %d     | Real: %d\n", ft_atoi(str3), atoi(str3));
    
	printf("\n Char before numbers:");
	printf("\n Mine: %d     | Real: %d\n", ft_atoi(str4), atoi(str4));
    
	printf("\n Normal number:");
	printf("\n Mine: %d     | Real: %d\n", ft_atoi(str5), atoi(str5));
    
	printf("\n Min int:");
	printf("\n Mine: %d     | Real: %d\n", ft_atoi(str6), atoi(str6));
    
	printf("\n Empty string:");
	printf("\n Mine: %d     | Real: %d\n", ft_atoi(str7), atoi(str7));
	return (0);
}
*/