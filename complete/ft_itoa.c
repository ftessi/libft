/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 01:22:53 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/27 01:40:50 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;

	nb = n;
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);

int	main(void)
{
	char	*str;

	str = ft_itoa(42);
	printf("42 -> %s\n", str);
	free(str);

	str = ft_itoa(-42);
	printf("-42 -> %s\n", str);
	free(str);

	str = ft_itoa(0);
	printf("0 -> %s\n", str);
	free(str);

	str = ft_itoa(2147483647);
	printf("INT_MAX -> %s\n", str);
	free(str);

	str = ft_itoa(-2147483648);
	printf("INT_MIN -> %s\n", str);
	free(str);

	return (0);
}