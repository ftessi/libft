/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:39:51 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/22 18:19:10 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int ft_isset(char c, char const *set)
{
    while (*set)
    {
        if (*set == c)
        {
            return (1);
        }
        set++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char            *str;
    char            c;
    unsigned int    i;
    unsigned int    j;
    size_t          strlen;

    strlen = ft_strlen(s1);
    i = 0;
    j = strlen - 1;
    c = *s1;
    while (s1[i] && ft_isset(c, set) == 1)
    {
        i++;
        c = s1[i];
    }
    c = s1[j];
    // printf("\n 1: s1[j]: %c", s1[j]);
    while (s1[j] && ft_isset(c, set) == 1)
    {
        j--;
        c = s1[j];
        // printf("\n 2:  j: %d", j);
    }
    str = malloc(j - i + 1);
    // printf("\n 3: str: %s", str);
    // printf("\n 4: i: %d, j: %d, strlen: %zu", i, j, strlen);
    ft_strlcpy(str, &s1[i], (j - i + 2));
    // printf("\n 5: str: %s", str);
    return (str);
}

int main(void)
{
    char    *str = "asasxaaHello beautiful peopleeaxaaasasasas";
    char    *trmd = NULL;
    char    *str1 = "";

    printf("\n Test: \n");
    printf("\n String: %s", str);
    trmd = ft_strtrim(str, "as");
    printf("\n String: %s", trmd);
    free(trmd);

    printf("\n Test: \n");
    printf("\n String: %s", str1);
    trmd = ft_strtrim(str1, "as");
    printf("\n String: %s", trmd);
    free(trmd);
    return (0);
}
/*
I need to:
"Allocates memory (using malloc(3)) and returns a
copy of ’s1’ with characters from ’set’ removed
from the beginning and the end"
Strlen I need for sure,
then, I need to iterate in each position to see if
it checks the condition of having one of the set's
characters. 

*/