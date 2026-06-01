/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:40:23 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/20 13:29:35 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr != '\0')
	{
		if ((unsigned char)*ptr == (unsigned char)c)
		{
			return (ptr);
		}
		ptr++;
	}
	if ((unsigned char)c == '\0')
	{
		return (ptr);
	}
	return (NULL);
}

/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hello world";
	char	*mine;
	char	*real;
    
	mine = ft_strchr(str, 'o');
	real = strchr(str, 'o');
	printf("\nTest character exists\n");
	printf("\nMine: %s", mine);
	printf("\nReal: %s\n", real);
	mine = ft_strchr(str, 'H');
	real = strchr(str, 'H');
	printf("\nTest first character\n");
	printf("\nMine: %s", mine);
	printf("\nReal: %s\n", real);
	mine = ft_strchr(str, 'd');
	real = strchr(str, 'd');
	printf("\nTest last character\n");
	printf("\nMine: %s", mine);
	printf("\nReal: %s\n", real);
	mine = ft_strchr(str, 'x');
	real = strchr(str, 'x');
	printf("\nTest not found\n");
	printf("\nMine: %s", mine);
	printf("\nReal: %s\n", real);
	mine = ft_strchr(str, '\0');
	real = strchr(str, '\0');
	printf("\nTest null terminator\n");
	printf("\nMine: %p", mine);
	printf("\nReal: %p", real);
	return (0);
}

*/