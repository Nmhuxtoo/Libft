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

void	*ft_memmove(void *str1, const void *str2, size_t len)
{
	unsigned char		*p_str1;
	unsigned const char	*p_str2;

	if (str1 < str2)
		return (ft_memcpy(str1, str2, n));
	p_str1 = (unsigned char *)str1;
	p_str2 = (unsigned const char *)str2;
	if (!n || str1 == str2)
		return (str1);
	while (n--)
		p_str1[n] = p_str2[n];
	return (str1);
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