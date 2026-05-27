/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 11:16:34 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/27 13:47:40 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd);

int	main(void)
{
	ft_putstr_fd("\n Hello stdout", 1);
	ft_putstr_fd("\n Hello stderr", 2);
	return (0);
}
