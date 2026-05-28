/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 22:47:56 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/29 00:01:28 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		*cpy;
	unsigned char		*start;

	ptr = (unsigned char *)src;
	start = (unsigned char *)dest;
	cpy = (unsigned char *)dest;
	while (n-- > 0)
	{
		*cpy = *ptr;
		ptr++;
		cpy++;
	}
	return (start);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "1";
	char	str2[] = "333";
	char	str3[] = "1";
	char	str4[] = "333";

	ft_memcpy(str2, str1, 1);
	memcpy(str4, str3, 1);
	printf("\n1st Mine: %s | Expected: %s", str2, str4);
	return (0);
}
*/