/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:13:09 by jdias-go          #+#    #+#             */
/*   Updated: 2024/05/17 16:38:05 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// Finish

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0' && needle == NULL)
		return ((char *) haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
			{
				return ((char *)haystack + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

/*
int main()
{
    const char *haystack = "Hello how are you";
    const char *needle = "how";
    size_t len = 15;

    char *result = ft_strnstr(haystack, needle, len);
    if (result != NULL)
    {
        printf("Substring found %ld", result - haystack);
    } else {
        printf("Substring not found\n");
    }
    return 0;
}
*/