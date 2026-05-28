/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 22:38:07 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/29 00:17:45 by ftessi           ###   ########.fr       */
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
	str = malloc(len + 1);
	if (!str)
	{
		return (NULL);
	}
	start = ft_memcpy(str, s1, len);
	str[len] = '\0';
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
	int		i;

	cpy1 = NULL;
	cpy2 = NULL;
	i = 0;
	printf("\n Tests:");
	printf("\n Before:");
	printf("\n String: %s", cpy1);
	cpy1 = ft_strdup(str);
	cpy2 = strdup(str);
	printf("\n Mine: %s", cpy1);
	printf("\n Real: %s", cpy2);
	while (cpy1[i])
	{
		printf("\n pos: %d, char: %c", i, cpy1[i]);
		i++;
	}
	printf("\n pos: %d, char: %c", i, cpy1[i]);
	printf("\n len: %zu", ft_strlen(cpy1));
	return (0);
}
*/
