/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 01:59:12 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/29 00:19:13 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node;
	char	*str;

	str = strdup("Hello");
	node = ft_lstnew(str);
	printf("Before delete: %s\n", (char *)node->content);
	ft_lstdelone(node, del);
	printf("Node deleted\n");
	return (0);
}
*/
