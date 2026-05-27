/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 01:45:58 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/27 01:46:47 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	test_function(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c - 32);
	return (c);
}

int	main(void)
{
	char	*result;

	result = ft_strmapi("hello world", test_function);
	if (result)
	{
		printf("Result: %s\n", result);
		free(result);
	}
	return (0);
}