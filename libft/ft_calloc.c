/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 18:21:42 by ftessi            #+#    #+#             */
/*   Updated: 2026/06/01 16:45:01 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*ptr;
	size_t		total;

	if (size != 0 && nmemb > (size_t)-1/ size)
	{
		return (NULL);
	}
	if (size == 0 || nmemb == 0)
	{
		return (malloc(1));
	}
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, total);
	return (ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size);


** Helper function to print memory as integers

void	print_int_array(int *arr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int		*mine;
	int		*real;
	size_t	i;
	char	*mine_char;
	char	*real_char;

	printf("===== BASIC TEST =====\n");
	mine = ft_calloc(5, sizeof(int));
	real = calloc(5, sizeof(int));
	printf("Mine: ");
	print_int_array(mine, 5);
	printf("Real: ");
	print_int_array(real, 5);
	free(mine);
	free(real);
	** Test writing values
	printf("\n===== WRITE TEST =====\n");
	mine = ft_calloc(5, sizeof(int));
	real = calloc(5, sizeof(int));
	i = 0;
	while (i < 5)
	{
		mine[i] = i + 1;
		real[i] = i + 1;
		i++;
	}
	printf("Mine: ");
	print_int_array(mine, 5);
	printf("Real: ");
	print_int_array(real, 5);
	free(mine);
	free(real);
	** Zero allocation
	printf("\n===== ZERO SIZE TEST =====\n");
	mine = ft_calloc(0, sizeof(int));
	real = calloc(0, sizeof(int));
	printf("Mine pointer: %p\n", mine);
	printf("Real pointer: %p\n", real);
	free(mine);
	free(real);
	** Char test
	printf("\n===== CHAR TEST =====\n");
	mine_char = ft_calloc(10, sizeof(char));
	real_char = calloc(10, sizeof(char));
	printf("Mine first byte: %d\n", mine_char[0]);
	printf("Real first byte: %d\n", real_char[0]);
	free(mine_char);
	free(real_char);
	** Large allocation
	printf("\n===== LARGE TEST =====\n");
	mine = ft_calloc(1000, sizeof(int));
	real = calloc(1000, sizeof(int));
	if (mine && real)
	printf("Both allocations succeeded\n");
else
printf("Allocation failed\n");
free(mine);
free(real);
return (0);
}
*/