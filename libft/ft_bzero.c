/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 11:47:39 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/20 13:19:36 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n-- > 0 && p)
	{
		*p = '\0';
		p++;
	}
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char    str[] = "Summer summer summer";
	char    str2[] = "Summer summer summer";


	printf("\n%s", str);
	printf("\nLen: %lu", strlen(str));
	ft_bzero(&str[9], 6);
	printf("\n%s", str);
	printf("\nLen: %lu", strlen(str));
	printf("\n%s", str2);
	printf("\nLen: %lu", strlen(str2));
	bzero(&str2[9], 6);
	printf("\n%s", str2);
	printf("\nLen: %lu", strlen(str2));
	return (0);
}*/