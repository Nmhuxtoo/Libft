/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:47:37 by jdias-go          #+#    #+#             */
/*   Updated: 2024/05/17 15:37:58 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// finish

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
int main()
{
    int test, result;
    test = '\0';
    result = ft_isprint(test);
    printf("%d", result);
}
*/