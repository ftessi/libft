/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 01:16:47 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/29 00:18:50 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"


int	main(void)
{
	t_list	*head;

	head = NULL;

	ft_lstadd_back(&head, ft_lstnew("1"));
	ft_lstadd_back(&head, ft_lstnew("2"));
	ft_lstadd_back(&head, ft_lstnew("3"));

	while (head)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}

	return (0);
}*/