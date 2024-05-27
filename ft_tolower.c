/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:55:26 by jdias-go          #+#    #+#             */
/*   Updated: 2024/04/18 14:44:44 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// finish

int	ft_tolower(int c)
{
	if (c <= 90 && c >= 65)
	{
		c += 32;
	}
	return (c);
}

/*
int main()
{
    char test = 'M';
    char result;
    result = ft_tolower(test);
    printf("%c", result);
}
*/