/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 01:52:50 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/28 11:34:10 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <unistd.h>

void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	ft_putchar_fd('A', 1);
	write(1, "\n", 1);

	ft_putchar_fd('B', 2);
	write(2, "\n", 1);

	return (0);
}
*/
