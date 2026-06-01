/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 16:47:28 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/31 23:00:00 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_freedtarr(char **arr)
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

static unsigned int	ft_countstr(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	return (i);
}

static char	**ft_fillstr(char **arr, char const *s, char c, unsigned int n)
{
	unsigned int	i;
	unsigned int	subi;
	unsigned int	start;

	i = 0;
	subi = 0;
	while (s[i] && subi < n)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i - start > 0)
		{
			arr[subi] = ft_substr(s, start, i - start);
			if (!arr[subi])
				return (NULL);
			subi++;
		}
	}
	arr[subi] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char			**arr;
	unsigned int	subqnty;

	subqnty = ft_countstr(s, c);
	arr = malloc(sizeof(char *) * (subqnty + 1));
	if (!arr)
		return (NULL);
	if (!ft_fillstr(arr, s, c, subqnty))
	{
		ft_freedtarr(arr);
		return (NULL);
	}
	return (arr);
}
