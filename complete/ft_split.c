/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftessi <ftessi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 15:17:35 by ftessi            #+#    #+#             */
/*   Updated: 2026/05/22 18:36:06 by ftessi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

size_t  ft_countstr(char const *s, char c)
{
    size_t    i;

    i = 0;
    while (*s)
    {
        while (*s == c)
        {
            s++;
        }
        if (*s)
        {
            i++;
            while (*s && *s != c &&)
            {  
                s++;
            }
        }
    }
    return (i);
}


char    **ft_split(char const *s, char c)
{
    char    *str;
    char    **arr;
    size_t  index;
    size_t  subcount;
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    index = 0;
    subcount = ft_countstr(s, c);
    arr = malloc(sizeof(char *) * subcount + 1)

    while (s[i])
    {   
        while (s[i] == c)
        {
            i++;
        }
        j = i;
        while (s[j] && s[j] != c)
        {
            j++;
        }
        str = malloc(j - i + 1);
        arr[index] = ft_memcpy(str, &s[i], j - i);
        arr[index]++;
    }
    arr[index] = NULL;
    return (arr);
}

/*
Array of pointer to strings: char *arr[] = {"Hello world!", "bye world"}
So I have to split the string into as many strings as delimeters are in
the middle of the string. 
First I need to check the strings up until the delimiter.
How long they are, the first one after the delimiter, and the last one
before that. 
After knowing how many strings I'll have, only then I can allocate the
memory for the array, and then, start allocating the strings in memory 
inside the array. 
*/