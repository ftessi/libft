/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:28:57 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/21 11:57:08 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	ptr += (ft_strlen(s) - 1);
	while (*ptr != '\0')
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		ptr--;
	}
	if (c == '\0')
	{
		return (ptr + ft_strlen(s) + 1);
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str[] = "Hello and adios aloha a los vivos world";
	char	*mine;
	char	*real;

	mine = ft_strrchr(str, 'o');
	real = strrchr(str, 'o');
	printf("\nTest character exists\n");
	printf("\nMine: %s", mine);
	printf("\nReal: %s\n", real);
	mine = ft_strrchr(str, 'H');
	real = strrchr(str, 'H');
	printf("\nTest first character\n");
	printf("\nMine: %s", mine);
	printf("\nReal: %s\n", real);
	mine = ft_strrchr(str, 'd');
	real = strrchr(str, 'd');
	printf("\nTest last character\n");
	printf("\nMine: %s", mine);
	printf("\nReal: %s\n", real);
	mine = ft_strrchr(str, 'x');
	real = strchr(str, 'x');
	printf("\nTest not found\n");
	printf("\nMine: %s", mine);
	printf("\nReal: %s\n", real);
	mine = ft_strrchr(str, '\0');
	real = strchr(str, '\0');
	printf("\nTest null terminator\n");
	printf("\nMine: %p", mine);
	printf("\nReal: %p", real);
	return (0);
}
*/