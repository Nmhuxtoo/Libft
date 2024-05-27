/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:59:06 by jdias-go          #+#    #+#             */
/*   Updated: 2024/05/17 15:51:22 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// finish

char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = c;
	while (*s)
	{
		if (*s == a)
		{
			return ((char *) s);
		}
		s++;
	}
	if (a == '\0')
		return ((char *) s);
	return (0);
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