/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:12:25 by jdias-go          #+#    #+#             */
/*   Updated: 2024/04/18 14:44:52 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// finish

int	ft_toupper(int c)
{
	if (c <= 122 && c >= 97)
	{
		c -= 32;
	}
	return (c);
}

/*
int main()
{
    char test = 'm';
    char result;
    result = ft_toupper(test);
    printf("%c", result);
}
*/