/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 21:14:08 by jdias-go          #+#    #+#             */
/*   Updated: 2024/05/17 15:33:23 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// finish

int	ft_isalnum(int c)
{
	return ((c <= 57 && c >= 48) || (c <= 'Z' && c >= 'A')
		|| (c <= 'z' && c >= 'a'));
}

/*
int main()
{
    int test;
    int result;
    test = '%';
    result = ft_isalnum(test);
    printf("%d", result);
}
*/