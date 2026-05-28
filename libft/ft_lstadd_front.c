/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:16:06 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/28 11:32:09 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_front(t_list **head, t_list *new)
{

    new->next = *head;
    *head = new;
}
/*

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	t_list	*head;
	t_list	*new1;
	t_list	*new2;

	head = NULL;

	new1 = ft_lstnew("World");
	new2 = ft_lstnew("Hello");

	ft_lstadd_front(&head, new1);
	ft_lstadd_front(&head, new2);

	printf("First node: %s\n", (char *)head->content);
	printf("Second node: %s\n", (char *)head->next->content);

	free(new2);
	free(new1);

	return (0);
}
*/
