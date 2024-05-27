/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:35:09 by jdias-go          #+#    #+#             */
/*   Updated: 2024/05/16 17:32:53 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// Finish

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str || !s)
		return (NULL);
	while (i < ft_strlen(s))
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[ft_strlen(s)] = '\0';
	return (str);
}

/*
 char    to_upper(unsigned int index, char c)
{
    printf("Index: %u\n", index);

	if (c >= 'a' && c <= 'z')
		return c - 'a' + 'A';
	return c;
}

int main()
{
  char test[] = "Weshwerewr";
  char *result;

  printf("Char original: %s\n", test);
  result = ft_strmapi(test, &to_upper);

	if (result)
	{
		printf("String modifie: %s\n", result);
		free(result);
	}
	else
		printf("Pas possible\n");
	return 0;
} 
*/