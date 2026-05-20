/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 17:13:11 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/20 19:29:36 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	value;

	p = s;
	value = (unsigned char)c;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (s);
}
/*
HERE I HAVE TO STORE THE INT I'M PASSING AS AN UNSIGNED CHAR BECAUSE I WANT TO MOVE BYTE
BY BYTE, AND NOW I'M JUST TAKING THE n AS IS, 

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
		unsigned int    i;
		unsigned char   *p;

		p = s;
		i = 0;
		while (i < n)
		{
				p[i] = c;
				i++;
			}
			return (p);
		}
int	main(void)
{
	char    str[] = "Hello how are you? I'm memset";
	char    str2[] = "Hello how are you? I'm memset";

	printf("\nString: %s", str);
	ft_memset(&str[25], '.', 4);
	printf("\nString: %s", str);
	printf("\nString: %s", str2);
	memset(&str2[25], '.', 4);
	printf("\nString: %s", str2);
	return (0);
	}*/