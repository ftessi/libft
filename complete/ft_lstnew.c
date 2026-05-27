/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:01:53 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/27 13:46:58 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list *newnode;

	newnode = malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
    newnode->content = content;
    newnode->next = NULL;
    return (newnode);
}

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	t_list	*node;
	char	*str;

	str = "Hello";
	node = ft_lstnew(str);

	if (node)
	{
		printf("\n Content: %s", (char *)node->content);
		printf("\n Next: %p", node->next);
	}

	free(node);
	return (0);
}