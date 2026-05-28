/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 11:38:59 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/20 13:28:45 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned long int	length;

	length = ft_strlen(src);
	if (size == 0)
	{
		return (length);
	}
	while (*src != '\0' && --size > 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (length);
}

/*if return_value >= size:
	truncation happened
This is practically WHY it gives back the total length of the original string,
just to detect truncation.
#include <string.h>
*/
/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	mine[20];
	size_t	func_ret;
    
	func_ret = ft_strlcpy(mine, "hello", 20);
	printf("TEST 1 — normal copy\n");
	printf("Mine     : %s | ret = %zu\n", mine, func_ret);
	printf("Expected : %s | ret = %d\n\n", "hello", 5);
	func_ret = ft_strlcpy(mine, "hello world", 5);
	printf("TEST 2 — truncation\n");
	printf("Mine     : %s | ret = %zu\n", mine, func_ret);
	printf("Expected : %s | ret = %d\n\n", "hell", 11);
	func_ret = ft_strlcpy(mine, "abcdef", 1);
	printf("TEST 3 — size = 1\n");
	printf("Mine     : %s | ret = %zu\n", mine, func_ret);
	printf("Expected : %s | ret = %d\n\n", "", 6);
	func_ret = ft_strlcpy(mine, "test", 0);
	printf("TEST 4 — size = 0\n");
	printf("Mine     : %s | ret = %zu\n", mine, func_ret);
	printf("Expected : %s | ret = %d (buffer unchanged)\n\n",
    "test (unchanged)", 4);
	return (0);
}

*/