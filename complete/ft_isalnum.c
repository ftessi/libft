/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 13:24:03 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/13 17:05:04 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a'
			&& c <= 'z'))
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
	char	c;
	int		i;
	char	sp;

	c = 'A';
	i = 6;
	sp = ' ';
	printf("\nResult for %c: %d", c, ft_isalnum(c));
	printf("\nResult for %d: %d", i, ft_isalnum(i));
	printf("\nResult for %c: %d", sp, ft_isalnum(sp));
	printf("\nResult for %c: %d", c, isalnum(c));
	printf("\nResult for %d: %d", i, isalnum(i));
	printf("\nResult for %c: %d", sp, isalnum(sp));
	return (0);
}
*/