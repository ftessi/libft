/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 11:48:54 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/21 14:24:55 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

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
	printf("\n 1 substr: %p | %s", substr, substr);
	printf("\n 2 pos: %d | %s | %d", i, s, start);
	ft_memcpy(substr, s, len);
	printf("\n 3 substr: %p | %s", substr, substr);
	return (substr);
}

int	main(void)
{
	unsigned int i;
	char *str = "Hello World!";
	char *sub;

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