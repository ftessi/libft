/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 11:19:29 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/28 11:32:50 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	to_upper(void *content)
{
	char	*str;
	int		i;

	str = (char *)content;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	node1 = ft_lstnew(ft_strdup("hello"));
	node2 = ft_lstnew(ft_strdup("world"));

	node1->next = node2;
	head = node1;

	printf("Before:\n");
	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);

	ft_lstiter(head, to_upper);

	printf("\nAfter:\n");
	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);

	ft_lstclear(&head, free);

	return (0);
}
*/
