/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 10:07:50 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/18 11:37:45 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    const unsigned char     *source;
    unsigned char           *start;
    unsigned char           *temp;

    source = src;
    temp = dest;
    start = dest;
    
    if (temp < source)
    {
        while (n-- > 0)
        {
            *temp = *source;
            temp++;
            source++;
        }
    }
    else if (temp > source)
    {
        source += n;
        temp += n;
        while (n--)
        {
            temp--;
            source--;
            *temp = *source;
        }
    }
    return (start);
}

#include <string.h>
#include <stdio.h>
int main(void)
{
    char str1[20] = "abcdef";
    char str2[20] = "abcdef";

    ft_memmove(str1 + 2, str1, 4);
    memmove(str2 + 2, str2, 4);

    printf("Mine : %s\n", str1);
    printf("Real : %s\n", str2);

    return (0);
}