/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:04:17 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/21 16:06:29 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_check_needle(const char *big, const char *little, size_t len)
{
	unsigned char	*pos;
	unsigned char	*tomatch;
	unsigned char	*start;
	size_t			i;

	pos = (unsigned char *)little;
	tomatch = (unsigned char *)big;
	start = tomatch;
	i = 0;
	while (len > i && *tomatch == *pos && *tomatch != '\0')
	{
		tomatch++;
		pos++;
		i++;
		if (*pos == '\0')
		{
			return ((char *)start);
		}
	}
	return (NULL);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*found;

	if (*little == '\0')
	{
		return ((char *)big);
	}
	while (len > 0 && *big != '\0')
	{
		found = ft_check_needle(big, little, len);
		if (found)
		{
			return (found);
		}
		big++;
		len--;
	}
	return (NULL);
}
/*

Checks the needle in the haystack. It will search for
the smaller string in the bigger one, and will return 
a pointer to the location of the little string inside the big one. 

#include <stdio.h>
#include <string.h>


int	main(void)
{
	char	big[] = "Hello World";
	char	little1[] = "World";
	char	little2[] = "Worldd";
	char	*mine;
	char	*real;

	mine = ft_strnstr(big, little1, 11);
	real = strnstr(big, little1, 11);
	printf("\n Tests:\n");
	printf("\n Found string:");
	printf("\n Mine: %p     | Real: %p", mine, real);
	printf("\n Mine: %s     | Real: %s\n", mine, real);
	mine = ft_strnstr(big, little1, 8);
	real = strnstr(big, little1, 8);
	printf("\n Not enough bytes to check:");
	printf("\n Mine: %p     | Real: %p", mine, real);
	printf("\n Mine: %s     | Real: %s\n", mine, real);
	mine = ft_strnstr(big, little2, 20);
	real = strnstr(big, little2, 20);
	printf("\n n bytes > big not found:");
	printf("\n Mine: %p     | Real: %p", mine, real);
	printf("\n Mine: %s     | Real: %s\n", mine, real);
	return (0);
}

*/

/*

int	main(void)
{
	char	*ret;

	printf("\n========== STRNSTR TESTS ==========\n");
		TEST 1 — normal match
	ret = ft_strnstr("Hello World", "World", 11);
	printf("\nTEST 1 — normal match");
	printf("\nExpected: World");
	printf("\nMine    : %s\n", ret);
	TEST 2 — not enough len
	ret = ft_strnstr("Hello World", "World", 8);
	printf("\nTEST 2 — len too small");
	printf("\nExpected: (null)");
	printf("\nMine    : %p\n", ret);
		TEST 3 — exact boundary
	ret = ft_strnstr("Hello World", "World", 11);
	printf("\nTEST 3 — exact boundary");
	printf("\nExpected: World");
	printf("\nMine    : %s\n", ret);
		TEST 4 — empty needle
	ret = ft_strnstr("Hello World", "", 5);
	printf("\nTEST 4 — empty needle");
	printf("\nExpected: Hello World");
	printf("\nMine    : %s\n", ret);
		TEST 5 — needle not found
	ret = ft_strnstr("Hello World", "abc", 11);
	printf("\nTEST 5 — not found");
	printf("\nExpected: (null)");
	printf("\nMine    : %p\n", ret);
		TEST 6 — partial match failure
	ret = ft_strnstr("aaabaaaab", "aaaab", 9);
	printf("\nTEST 6 — partial match");
	printf("\nExpected: aaaab");
	printf("\nMine    : %s\n", ret);
		TEST 7 — needle bigger than big
	ret = ft_strnstr("abc", "abcdef", 10);
	printf("\nTEST 7 — needle bigger");
	printf("\nExpected: (null)");
	printf("\nMine    : %p\n", ret);
	TEST 8 — len = 0
	ret = ft_strnstr("Hello", "He", 0);
	printf("\nTEST 8 — len = 0");
	printf("\nExpected: (null)");
	printf("\nMine    : %p\n", ret);
	TEST 9 — match at beginning
	ret = ft_strnstr("abcdef", "abc", 6);
	printf("\nTEST 9 — beginning");
	printf("\nExpected: abcdef");
	printf("\nMine    : %s\n", ret);
		TEST 10 — match at end
	ret = ft_strnstr("abcdef", "def", 6);
	printf("\nTEST 10 — end");
	printf("\nExpected: def");
	printf("\nMine    : %s\n", ret);
	return (0);
}
*/