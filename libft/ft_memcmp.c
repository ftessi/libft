/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:28:28 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/20 13:30:15 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*pos1;
	const unsigned char	*pos2;

	pos1 = (unsigned char *)s1;
	pos2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*pos1 != *pos2)
		{
			return (*pos1 - *pos2);
		}
		pos1++;
		pos2++;
		n--;
	}
	return (0);
}

/*
This function checks the memmory positions () in the passed
memmory area (n) to check for the difference in bytes between
the first pair of bytes. It returns zero if n = 0, and the
difference between the two data sets, being 0 if they match.
It's only read so keep it constant keep it cool
*/
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char			str1[] = "Hello World";
	char			str2[] = "Hello World";
	char			str3[] = "Hello";
	char			str4[] = "\0";
	unsigned char	data1[] = {'H', 2, 4, 'o', 66, 'x'};
	unsigned char	data2[20];

	printf("\n Test:\n\n");
	printf("\n Same under n:");
	printf("\n Mine: %d     | Expected: %d\n", ft_memcmp(str1, str2, 6),
	memcmp(str1, str2, 6));
	printf("\n Same over n:");
	printf("\n Mine: %d     | Expected: %d\n", ft_memcmp(str1, str2, 22),
	memcmp(str1, str2, 22));
	printf("\n first smaller:");
	printf("\n Mine: %d     | Expected: %d\n", ft_memcmp(str1, str3, 10),
	memcmp(str1, str3, 10));
	printf("\n second smaller:");
	printf("\n Mine: %d     | Expected: %d\n", ft_memcmp(str3, str1, 10),
	memcmp(str3, str1, 10));
	printf("\n First position:");
	printf("\n Mine: %d     | Expected: %d\n", ft_memcmp(str1, data1, 3),
	memcmp(str1, data1, 3));
	printf("\n n = 0:");
	printf("\n Mine: %d     | Expected: %d\n", ft_memcmp(str1, str2, 0),
	memcmp(str1, str2, 0));
	printf("\n Null string:");
	printf("\n Mine: %d     | Expected: %d\n", ft_memcmp(str1, str4, 6),
	memcmp(str1, str4, 6));
	printf("\n Empty Data array:");
	printf("\n Mine: %d     | Expected: %d\n", ft_memcmp(data1, data2, 6),
	memcmp(data1, data2, 6));
	return (0);
}

*/