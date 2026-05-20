/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 13:21:47 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/20 13:19:27 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	unsigned char	i;

	unsigned char	u1, u2, u3;
	u1 = ' ';
	u2 = 'a';
	u3 = '1';
	i = 128;
	printf("\nResult for %c: %d", u1, ft_isascii(u1));
	printf("\nResult for %c: %d", u2, ft_isascii(u2));
	printf("\nResult for %c: %d", u3, ft_isascii(u3));
	printf("\nResult for %d: %d", i, ft_isascii(i));
	printf("\nResult for %c: %d", u1, isascii(u1));
	printf("\nResult for %c: %d", u2, isascii(u2));
	printf("\nResult for %c: %d", u3, isascii(u3));
	printf("\nResult for %d: %d", i, isascii(i));
	return (0);
}
*/