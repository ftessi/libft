/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 01:02:31 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/29 00:19:39 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}
/*
#include "libft.h"
#include <stdio.h>

void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	char	*str1;
	char	*str2;

	str1 = ft_strdup("Hello");
	str2 = ft_strdup("World");
	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);
	node1->next = node2;
	head = node1;
	printf("Before clear:\n");
	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);
	ft_lstclear(&head, del_content);
	if (head == NULL)
		printf("List cleared successfully\n");
	return (0);
}
*/