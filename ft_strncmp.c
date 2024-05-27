/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:20:05 by jdias-go          #+#    #+#             */
/*   Updated: 2024/05/17 16:19:40 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include "libft.h"

// finish

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		}
		else if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (0);
}

/*
int main()
{
    char s1[] = "Bonour";
    char s2[] = "Bonjour";

    int result;
    result = ft_strncmp(s1, s2, 5);
    printf("%d", result);
}
*/