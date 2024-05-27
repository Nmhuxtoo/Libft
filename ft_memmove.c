/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:12:42 by jdias-go          #+#    #+#             */
/*   Updated: 2024/05/17 16:38:24 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*pdst;
	unsigned const char	*psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned const char *)src;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (!len || dst == src)
		return (dst);
	while (len--)
		pdst[len] = psrc[len];
	return (dst);
}

/*
int main()
{
    char cSrc[] = "Bonjour";
    char cDest[16];

    ft_memmmove(cDest, cSrc, 8);

    printf("copied string: %s\n", cDest);

    int iSrc[] = {10, 20, 30, 40, 50};
    int n = sizeof(iSrc)/sizeof(iSrc[0]);
    int iDest[n], index = 0;

    ft_memmmove(iDest, iSrc, sizeof(iSrc));

    printf("\n copied array is ");
    for (index=0; index<n; index++)
    {
        printf("%d ", iDest[index]);
    }
    return (0);
}
*/