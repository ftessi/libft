/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 16:47:28 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/27 14:02:09 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_freedtarr(char **arr)
{
	unsigned int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

unsigned int	ft_countstr(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (*s != '\0')
	{
		printf("\n 1");
		while (*s == c)
		{
			s++;
			printf("\n 2");
		}
		printf("\n 3");
		if (*s != '\0')
		{
			i++;
			printf("\n i = %d", i);
			while (*s && *s != c)
			{
				s++;
				printf("\n 5");
			}
			printf("\n 6 | *s: %s", s);
		}
		printf("\n 7");
		if (*s == '\0')
		{
			printf("\n IT'S THE END");
		}
	}
	printf("\n 8 & i = %d, *s = %c", i, *s);
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	unsigned int	subqnty;
	unsigned int	i;
	unsigned int	subi;
	unsigned int	start;
	unsigned int	len;

	subqnty = 0;
	printf("\n subqnty: %d", subqnty);
	subqnty = ft_countstr(s, c);
	printf("\n subqnty: %d", subqnty);
	arr = malloc(sizeof(char *) * (subqnty + 1));
	if (!arr)
	{
		return (NULL);
	}
	i = 0;
	printf("\n el numero i: %d | La string: %s", i, s);
	start = 0;
	subi = 0;
	while (s[i]) 
	{
		while (s[i] == c)
		{
			i++;
		}
		start = i;
		while (s[i] && s[i] != c)
		{
			i++;
		}
		len = i - start;
		if (len > 0)
		{
			arr[subi] = ft_substr(s, start, len);
			if (!arr[subi])
			{
				ft_freedtarr(arr);
				return (NULL);
			}
			subi++;
		}
	}
	arr[subi] = NULL;
	return (arr);
}

int	main(void)
{
	char *str = "Hello world how are you";
	char **arr;

	printf("\n Tests: ");
	printf("\n String: %s", str);
	arr = ft_split(str, ' ');
	printf("\n String: %s | %s", arr[0], arr[4]);
	return (0);
}
