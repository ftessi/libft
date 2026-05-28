/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 10:29:51 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/20 13:18:45 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	if (n == 0)
	{
		return (0);
	}
	while (--n && *c1 != '\0' && *c2 != '\0')
	{
		if (*c1 != *c2)
		{
			return (*c1 - *c2);
		}
		c1++;
		c2++;
	}
	return (*c1 - *c2);
}

/*
I don't need to create another pointer since
I'm not actually modifying the content

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Hello World";
	char	str2[] = "Hello";
	char	str3[] = "ello World";
	char	str4[] = "Hello Worl";
	char	str5[] = "Hello\n World";
	char	str6[] = "Hello\0 World";
	char	str7[] = "";

	printf("\nTests:\n");
	printf("\nSame string:");
	printf("\nMine: %d | Expected: %d\n\n", ft_strncmp(str1, str1, 11),
		strncmp(str1, str1, 11));
	printf("\nSame string oversize +1:");
	printf("\nMine: %d | Expected: %d\n\n", ft_strncmp(str1, str1, 12),
		strncmp(str1, str1, 12));
	printf("\nSame string undersize 0:");
	printf("\nMine: %d | Expected: %d\n\n", ft_strncmp(str1, str1, 0),
		strncmp(str1, str1, 0));
	printf("\nLast char diff:");
	printf("\nMine: %d | Expected: %d\n\n", ft_strncmp(str1, str4, 10),
		strncmp(str1, str4, 10));
	printf("\nFirst char diff:");
	printf("\nMine: %d | Expected: %d\n\n", ft_strncmp(str3, str1, 0),
		strncmp(str3, str1, 0));
	printf("\nPrefix case:");
	printf("\nMine: %d | Expected: %d\n\n", ft_strncmp(str1, str2, 11),
		strncmp(str1, str2, 11));
	printf("\nNL in the middle:");
	printf("\nMine: %d | Expected: %d\n\n", ft_strncmp(str1, str5, 11),
		strncmp(str1, str5, 11));
	printf("\nNull char middle:");
	printf("\nMine: %d | Expected: %d\n\n", ft_strncmp(str1, str6, 11),
		strncmp(str1, str6, 11));
	printf("\nEmpty string:");
	printf("\nMine: %d | Expected: %d\n\n", ft_strncmp(str1, str7, 11),
		strncmp(str1, str7, 11));
	return (0);
}
*/