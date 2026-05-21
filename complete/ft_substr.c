/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 11:48:54 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/21 14:36:56 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	i = 0;
	while (s && i < start)
	{
		s++;
		i++;
	}
	substr = malloc(len);
	ft_memcpy(substr, s, len);
	if (*substr != *s)
		return (NULL);
	else
		return (substr);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned int	i;
	char			*str;
	char			*sub;

	str = "Hello World!";
	i = 6;
	printf("\n Tests: \n");
	printf("\n Copy substring: %s", str);
	sub = ft_substr(str, i, 6);
	printf("\n Copied: %s\n", sub);
	free(sub);
	i = 6;
	printf("\n Last char: %s", str);
	sub = ft_substr(str, i, 6);
	printf("\n Copied: %s\n", sub);
	free(sub);
	i = 0;
	printf("\n First char: %s", str);
	sub = ft_substr(str, i, 12);
	printf("\n Copied: %s\n", sub);
	free(sub);
	i = 0;
	printf("\n Copy len 0: %s", str);
	sub = ft_substr(str, i, 0);
	printf("\n Copied: %s\n", sub);
	free(sub);
	return (0);
}
*/