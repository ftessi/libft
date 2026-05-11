/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 16:00:17 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/11 16:38:09 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (*s)
	{
		s++;
		size++;
	}
	return (size);
}
/*
size_t ft_strlen2(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' )
	{
		i++;
	}
	return (i);
}

#include <stdio.h>
int	main(void)
{
	char	*s = "Helloo";
	printf("\nSize: %lu", ft_strlen(s));
	printf("\nSize: %lu", ft_strlen2(s));
	return (0);
}
*/