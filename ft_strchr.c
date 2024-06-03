/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:59:06 by jdias-go          #+#    #+#             */
/*   Updated: 2024/06/03 23:00:07 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

// finish

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c && *s)
		++s;
	if (*s)
		return ((char *)s);
	else if (!*s && 0 == (char)c)
		return ((char *)s);
	else
		return (NULL);
}

/*
int main()
{
	char str[] = "Bonj";
	char *ptr = ft_strchr(str, 'z');

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