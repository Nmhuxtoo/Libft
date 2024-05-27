/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 20:58:20 by jdias-go          #+#    #+#             */
/*   Updated: 2024/05/17 15:32:51 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// finish

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

/*
int main()
{
    int test;
    int result;
    test = 1;
    result = ft_isdigit(test);
    printf("%d", result);
}
*/