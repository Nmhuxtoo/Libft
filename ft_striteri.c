/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:02:54 by jdias-go          #+#    #+#             */
/*   Updated: 2024/05/17 16:34:17 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// Finish

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s && f)
	{
		i = 0;
		while (*s)
			f(i++, s++);
	}
}

/*
void uppercase(unsigned int index, char *ch)
{
    printf("Index: %u\n", index);
    *ch = ft_toupper(*ch);
    
}

int main()
{
  char test[] = "Weshwerewr";


    printf("Char original: %s\n", test);
    ft_striteri(test, uppercase);
    printf("Index: %s\n", test);
    

	return 0;
} 
*/