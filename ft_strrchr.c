/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:31:27 by jdias-go          #+#    #+#             */
/*   Updated: 2024/05/17 15:41:31 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

// finish

char	*ft_strrchr(const char *str, int c)
{
	int	longitud;

	longitud = ft_strlen(str);
	while (longitud >= 0)
	{
		if (str[longitud] == c)
		{
			return ((char *)&str[longitud]);
		}
		longitud--;
	}
	return (NULL);
}

/*
int main()
{
    char str[] = "Bonjour le monde";
    char *ptr = ft_strrchr(str, 'j');

    if (ptr != NULL)
    {
        printf("found 'o' at %ld\n", ptr - str);
    }
    else
    {
        printf("Character 'o' not found \n");
    }
    return 0;
}
*/