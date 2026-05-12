/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 16:00:17 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/12 12:28:41 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <aio.h>

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
#include <string.h>
int	main(void)
{
	char	*s = "";
	printf("\nSize: %lu", ft_strlen(s));
	printf("\nSize: %lu", ft_strlen2(s));
	printf("\nSize: %lu", strlen(s));
	return (0);
}
