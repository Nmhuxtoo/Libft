/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:29:54 by jdias-go          #+#    #+#             */
/*   Updated: 2024/05/17 16:25:17 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if (((unsigned char *)s)[index] == (unsigned char)c)
			return (((unsigned char *)s) + index);
		index++;
	}
	return (NULL);
}

/*
int main()
{
    const char *str = "Hello, world!";
    int ch = 'z';
    size_t n = 13; // Length of the string excluding the null terminator
    
    void *result = memchr(str, ch, n);
    
    if (result != NULL) {
        printf("'%c' found at position: %zu\n",
         ch, (size_t)((char *)result - str));
    } else {
        printf("'%c' not found\n", ch);
    }
    
    return 0;
}
*/