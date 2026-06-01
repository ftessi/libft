/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 11:48:54 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/29 00:21:24 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	copy_len;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		copy_len = slen - start;
	else
		copy_len = len;
	substr = malloc(copy_len + 1);
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, copy_len);
	substr[copy_len] = '\0';
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
