/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 00:55:51 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/28 11:33:00 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	t_list	*head;
	t_list	*last;

	head = NULL;

	ft_lstadd_front(&head, ft_lstnew("3"));
	ft_lstadd_front(&head, ft_lstnew("2"));
	ft_lstadd_front(&head, ft_lstnew("1"));

	last = ft_lstlast(head);

	printf("Last node content: %s\n", (char *)last->content);

	return (0);
}
*/
