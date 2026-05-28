/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 00:28:32 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/29 00:22:54 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	t_list	*head;

	head = NULL;
	ft_lstadd_front(&head, ft_lstnew("3"));
	ft_lstadd_front(&head, ft_lstnew("2"));
	ft_lstadd_front(&head, ft_lstnew("1"));
	printf("List size: %d\n", ft_lstsize(head));
	return (0);
}
*/
