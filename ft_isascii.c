/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:36:40 by jdias-go          #+#    #+#             */
/*   Updated: 2024/04/18 14:44:03 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// finish

int	ft_isascii(int c)
{
	return (c >= 000 && c <= 0177);
}

/*
int main()
{
    int test, result;
    test = ' ';
    result = ft_isascii(test);
    printf("%d", result);
}
*/