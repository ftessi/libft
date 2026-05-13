/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 13:24:36 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/13 17:05:22 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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

	i = '3';
	printf("Result for %d: %d", i, ft_isdigit(i));
	i = 52;
	printf("\nResult for %d: %d", i, ft_isdigit(i));
	i = '3';
	printf("\nResult for %d: %d", i, isdigit(i));
	i = 52;
	printf("\nResult for %d: %d", i, isdigit(i));
	return (0);
}*/