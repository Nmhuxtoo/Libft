/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:31:49 by jdias-go          #+#    #+#             */
/*   Updated: 2024/04/25 18:07:13 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// finish

int	ft_atoi(const char *str)
{
	int	nb;
	int	sign;

	nb = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str <= '9' && *str >= '0')
		nb = (nb * 10) + (*str++ - '0');
	return (nb * sign);
}

/*
int main()
{
    char test[]= "-15-+7";
    int result = ft_atoi(test);
    int result2 = atoi(test);
    printf("%d", result);
    printf("%d", result2);
}


int	ft_atoi(const char *str)
{
	int	nb;
	int	sign;

	nb = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -sign;
	while (*str <= '9' && *str >= '0')
		nb = (nb * 10) + (*str++ - '0');
	return (nb * sign);
}
*/