/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:12:53 by jdias-go          #+#    #+#             */
/*   Updated: 2024/04/26 16:07:42 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// Finish

char	*ft_strdup(const char *s1)
{
	char	*mall;
	int		i;

	mall = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!mall)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		mall[i] = s1[i];
		i++;
	}
	mall[i] = 0;
	return (mall);
}

/* int main()
{
    char test[] = "Bonjour le monde";
    char *result = ft_strdup(test);
    printf("%s", result);
} */
