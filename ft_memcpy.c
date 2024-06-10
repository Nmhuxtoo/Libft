/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:46:20 by jdias-go          #+#    #+#             */
/*   Updated: 2024/04/27 19:02:47 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// Finish

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*srccpy;
	size_t	i;

	dest = (char *)dst;
	srccpy = (char *)src;
	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest[i] = srccpy[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
    char src[] = "copie mon frere";
    char dest[50];
    
    ft_memcpy(dest, src, 16);

    printf("%s\n", src);
    printf("%s\n", dest);   
}
*/