/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 17:13:11 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/13 16:37:52 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>
#include <stdio.h>
#include <string.h>

// void    *ft_memset(void *s, int c, size_t n)
// {
//     unsigned int    i;
//     unsigned char   *p;

//     p = s;
//     i = 0;
//     while (i < n)
//     {
//         p[i] = c;
//         i++;
//     }
//     return (p);
// }

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *p;
    unsigned char   *start;

    p = s;
    start = p;
    while (n > 0)
    {
        *p = c;
        p++;
        n--;
    }
    printf("\nReturn: add %p | val %c", start, *start);
    printf("\nReturn: add %p | val %c", p, *p);
    return (start);
}

int     main(void)
{
    char    str[] = "Hello how are you? I'm memset";
    char    str2[] = "Hello how are you? I'm memset";

    printf("\nString: %s", str);
    ft_memset(&str[25], '.', 4);
    printf("\nString: %s", str);
    printf("\nString: %s", str2);
    memset(&str2[25], '.', 4);
    printf("\nString: %s", str2);
    return (0);
}