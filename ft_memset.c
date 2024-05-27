/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:58:05 by jdias-go          #+#    #+#             */
/*   Updated: 2024/04/25 18:22:49 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// finish

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	a = b;
	while (len--)
	{
		*a++ = c;
	}
	return (b);
}

/*
int main()
{
    char buffer[20];

    ft_memset(buffer, 'A', sizeof(buffer));

    int i;
    for (i = 0; i < (int)sizeof(buffer); i++)
    {
        if (buffer[i] != 'A')
        {
            printf("memset failed at index %d\n", i);
            return 1;
        }
    }

    printf("memset succeeded\n");
    return 0;
}
*/