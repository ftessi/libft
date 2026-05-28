/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 10:07:50 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/28 23:24:39 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_nostep(unsigned char *temp, const unsigned char *source, size_t n)
{
	while (n-- > 0)
	{
		*temp = *source;
		temp++;
		source++;
	}
}

void	ft_step(unsigned char *temp, const unsigned char *source, size_t n)
{
	source += n;
	temp += n;
	while (n--)
	{
		temp--;
		source--;
		*temp = *source;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*source;
	unsigned char		*start;
	unsigned char		*temp;

	source = src;
	temp = (unsigned char *)dest;
	start = (unsigned char *)dest;
	if (temp < source)
	{
		ft_nostep(temp, source, n);
	}
	else if (temp > source)
	{
		ft_step(temp, source, n);
	}
	return (start);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[20] = "abcdef";
	char	str2[20] = "abcdef";

	ft_memmove(str1 + 2, str1, 4);
	memmove(str2 + 2, str2, 4);
	printf("Mine : %s\n", str1);
	printf("Real : %s\n", str2);
	return (0);
}
*/
