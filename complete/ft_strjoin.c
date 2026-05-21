/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 14:37:23 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/21 15:36:52 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    size_t  len;
    
    len = ft_strlen(s1) + ft_strlen(s2);
    printf("\n len: %zu", len);
    str = malloc(len);
    printf("\n init: %s", str);
    str = ft_memcpy(str, s1, ft_strlen(s1));
    printf("\n alloc: %s", str);
    ft_strlcat(str, s2, (len + 1));
    printf("\n join: %s", str);
    return (str);
}

int main(void)
{
    char    *s1 = "Hello";
    char    *s2 = " world!";
    char    *s3 = NULL;

    printf("\n Tests: \n");
    printf("\n strings: %s, %s", s1, s2);
    printf("\n Res: %s", s3);
    s3 = ft_strjoin(s1, s2);
    printf("\n Res: %s", s3);
    return (0);    
}