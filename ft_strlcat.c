/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:12:56 by jdias-go          #+#    #+#             */
/*   Updated: 2024/04/25 18:20:25 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h" 

// Finish

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	londst;
	size_t	lonsrc;
	size_t	cont;

	londst = ft_strlen(dst);
	lonsrc = ft_strlen(src);
	if (dstsize <= londst)
		return (lonsrc + dstsize);
	cont = londst;
	while (*src != '\0' && cont < (dstsize - 1))
	{
		*(dst + cont++) = *src++;
	}
	*(dst + cont) = '\0';
	return (londst + lonsrc);
}
/*
int main()
{
      char dest[20] = "Hello";
    const char *source = " world!";
    size_t result;

    result = ft_strlcat(dest, source, sizeof(dest));
    printf("Resulting string: %s\n", dest);
    printf("Length of resulting string: %zu\n", result);
    
    return 0;
}
*/