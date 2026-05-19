/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 12:59:42 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/18 16:32:07 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t          srcLen;
    size_t          destLen;
    
    srcLen = ft_strlen(src);
    destLen = ft_strlen(dest);
    if (size <= destLen)
    {
        return (srcLen + size);
    }
    dest += destLen;
    while (*src != '\0' && --size > destLen)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (destLen + srcLen);
}


/*
It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
nating the result.
*/
/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char    mine1[20] = "Hello";
    char    mine2[10] = "Hello";
    char    mine3[6] = "Hello";
    char    mine4[20] = "Hello";
    
    size_t  ret;
    
    ret = ft_strlcat(mine1, " World", 20);
    
    printf("TEST 1 — enough space\n");
    printf("Mine     : %s | ret = %zu\n", mine1, ret);
    printf("Expected : Hello World | ret = 11\n\n");
    
    
    
    ret = ft_strlcat(mine2, " World", 10);
    
    printf("TEST 2 — truncation\n");
    printf("Mine     : %s | ret = %zu\n", mine2, ret);
    printf("Expected : Hello Wor | ret = 11\n\n");
    
    
    ret = ft_strlcat(mine3, " World", 6);
    
    printf("TEST 3 — no remaining space\n");
    printf("Mine     : %s | ret = %zu\n", mine3, ret);
    printf("Expected : Hello | ret = 11\n\n");
    
    
    ret = ft_strlcat(mine4, " World", 3);
    
    printf("TEST 4 — size smaller than dest length\n");
    printf("Mine     : %s | ret = %zu\n", mine4, ret);
    printf("Expected : Hello | ret = 9\n\n");
    
    return (0);
}
*/