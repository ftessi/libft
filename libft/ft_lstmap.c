/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 01:06:19 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/29 00:22:42 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*to_upper_copy(void *content)
{
	char	*str;
	char	*copy;
	int		i;

	str = (char *)content;
	copy = ft_strdup(str);
	if (!copy)
		return (NULL);
	i = 0;
	while (copy[i])
	{
		if (copy[i] >= 'a' && copy[i] <= 'z')
			copy[i] -= 32;
		i++;
	}
	return (copy);
}

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*new_lst;
	t_list	*n1;
	t_list	*n2;

	n1 = ft_lstnew(ft_strdup("hello"));
	n2 = ft_lstnew(ft_strdup("world"));
	n1->next = n2;
	lst = n1;
	new_lst = ft_lstmap(lst, to_upper_copy, del);
	printf("Original:\n");
	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)lst->next->content);
	printf("\nMapped:\n");
	printf("%s\n", (char *)new_lst->content);
	printf("%s\n", (char *)new_lst->next->content);
	ft_lstclear(&lst, del);
	ft_lstclear(&new_lst, del);
	return (0);
}
*/
