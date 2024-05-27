/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 19:07:45 by jdias-go          #+#    #+#             */
/*   Updated: 2024/04/18 16:01:54 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>
#include <stddef.h>
#include "libft.h"

// finish

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

/*
int main()
{
    char arr[10];
    int e, a;

    e = 0;
    a = 0;

    for (size_t i = 0; i < 9 ; i++)
    {
        arr[i] = 'A';
    }
    while (arr[e] != '\0')
    {
        printf("%c", arr[e]);
        e++;
    }

    printf("\n\n");

    ft_bzero(arr, 9);
    
    for (size_t i = 0; i < 9; i++)
    {
        printf("%d", arr[a]);
        a++;
    }
    return (0); 
}
*/