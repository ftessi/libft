/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 13:37:40 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/20 13:19:21 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
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
	unsigned char	c1, c2;

	c1 = 31;
	c2 = 32;
	printf("\nResult for %d: %d", c1, ft_isprint(c1));
	printf("\nResult for %d: %d", c2, ft_isprint(c2));
	printf("\nResult for %d: %d", c1, isprint(c1));
	printf("\nResult for %d: %d", c2, isprint(c2));
	return (0);
}*/