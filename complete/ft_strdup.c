/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 22:38:07 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/21 00:20:37 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*start;
	size_t	len;

	len = ft_strlen(s1);
	str = malloc(len);
	start = ft_memcpy(str, s1, len);
	return (start);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[20] = "Hello world!";
	char	*cpy1;
	char	*cpy2;

	cpy1 = NULL;
	cpy2 = NULL;
	printf("\n Tests:");
	printf("\n Before:");
	printf("\n String: %s", cpy1);
	cpy1 = ft_strdup(str);
	cpy2 = strdup(str);
	printf("\n Mine: %s", cpy1);
	printf("\n Real: %s", cpy2);
	return (0);
}
ß*/