/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:39:51 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/29 00:21:10 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

static int	ft_isset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
		{
			return (1);
		}
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = ft_strlen(s1);
	while (j > i && ft_isset(s1[j - 1], set))
		j--;
	while (i < j && ft_isset(s1[i], set))
		i++;
	str = malloc(j - i + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[i], j - i + 1);
	return (str);
}
/*
int	main(void)
{
	char	*str;
	char	*trmd;
	char	*str1;

	str = "asasxaaHello beautiful peopleeaxaaasasasas";
	trmd = NULL;
	str1 = "";
	printf("\n Test: \n");
	printf("\n String: %s", str);
	trmd = ft_strtrim(str, "as");
	printf("\n String: %s", trmd);
	free(trmd);
	printf("\n Test: \n");
	printf("\n String: %s", str1);
	trmd = ft_strtrim(str1, "as");
	printf("\n String: %s", trmd);
	free(trmd);
	return (0);
}
*/

/*
I need to:
"Allocates memory (using malloc(3)) and returns a
copy of ’s1’ with characters from ’set’ removed
from the beginning and the end"
Strlen I need for sure,
then, I need to iterate in each position to see if
it checks the condition of having one of the set's
characters.

*/