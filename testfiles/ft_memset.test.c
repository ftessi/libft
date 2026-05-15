/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 17:13:11 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/15 17:18:05 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Hello how are you? I'm memset";
	char	str2[] = "Hello how are you? I'm memset";

	printf("\nString: %s", str);
	ft_memset(&str[25], '.', 4);
	printf("\nString: %s", str);
	printf("\nString: %s", str2);
	memset(&str2[25], '.', 4);
	printf("\nString: %s", str2);
	return (0);
}
