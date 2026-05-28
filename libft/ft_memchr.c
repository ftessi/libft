/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 11:13:25 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/20 13:19:18 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*found;

	found = (unsigned char *)s;
	while (n > 0)
	{
		if (*found == (unsigned char)c)
		{
			return (found);
		}
		found++;
		n--;
	}
	found = NULL;
	return (found);
}

/*
In this function we move memmory positions (found)
so we can find the byte (unsigned char c) position for the
memmory area (n) that we pass to the function
*/

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char			str1[] = "Hello World";
	char			str2[] = "";
	char			str3[] = "\0";
	unsigned char	data1[] = {1, 2, 4,'o', 66, 'x'};
	unsigned char	data2[20];

	printf("\n Test:\n\n");
	printf("\n Byte find:");
	printf("\n Mine: %p     | Expected: %p\n", ft_memchr(str1, 'o', 6),
		memchr(str1, 'o', 6));
	printf("\n \\0 find:");
	printf("\n Mine: %p     | Expected: %p\n", ft_memchr(str1, '\0', 12),
		memchr(str1, '\0', 12));
	printf("\n first position find:");
	printf("\n Mine: %p     | Expected: %p\n", ft_memchr(str1, 'H', 6),
		memchr(str1, 'H', 6));
	printf("\n Not found:");
	printf("\n Mine: %p     | Expected: %p\n", ft_memchr(str1, 'x', 6),
		memchr(str1, 'x', 6));
	printf("\n Overbound:");
	printf("\n Mine: %p     | Expected: %p\n", ft_memchr(str1, 'x', 20),
		memchr(str1, 'x', 20));
	printf("\n 0 size find:");
	printf("\n Mine: %p     | Expected: %p\n", ft_memchr(str1, 'o', 0),
		memchr(str1, 'o', 0));
	printf("\n Null string:");
	printf("\n Mine: %p     | Expected: %p\n", ft_memchr(str3, 'o', 6),
		memchr(str3, 'o', 6));
	printf("\n Empty string:");
	printf("\n Mine: %p     | Expected: %p\n", ft_memchr(str2, 'o', 6),
		memchr(str2, 'o', 6));
	printf("\n Data array:");
	printf("\n Mine: %p     | Expected: %p\n", ft_memchr(data1, 'o', 6),
		memchr(data1, 'o', 6));
	printf("\n Not found Data array:");
	printf("\n Mine: %p     | Expected: %p\n", ft_memchr(data1, 'y', 6),
		memchr(data1, 'y', 6));
	printf("\n Empty Data array:");
	printf("\n Mine: %p     | Expected: %p\n", ft_memchr(data2, 'o', 6),
		memchr(data2, 'o', 6));
	return (0);
}
*/