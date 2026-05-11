/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 17:33:14 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/07 17:33:14 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c >= 'a' && c<= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char	c;
	
	c = '4';
	printf("Result for %c: %d", c, ft_isalpha(c));
	return (0);
}*/
