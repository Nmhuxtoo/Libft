/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:31:27 by jdias-go          #+#    #+#             */
/*   Updated: 2024/06/03 23:04:50 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

// finish

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if ((char)c == *(s + len))
			return ((char *)(s + len));
		--len;
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