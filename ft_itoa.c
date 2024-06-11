/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:42:39 by jdias-go          #+#    #+#             */
/*   Updated: 2024/05/16 18:06:20 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	digit_counter(int n)
{
	int	i;
	int	copy;

	i = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	copy = n;
	while (copy > 0)
	{
		copy = copy / 10;
		i++;
	}
	return (i);
}

int	exp_counter(int n)
{
	int	exp;
	int	digits;

	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (1000000000);
	digits = digit_counter(n);
	if (n < 0)
		digits--;
	exp = 1;
	while (--digits)
		exp = exp * 10;
	return (exp);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			exp;
	int			i;
	long int	copy;

	copy = (long int)n;
	exp = exp_counter(n);
	i = 0;
	str = malloc(digit_counter(n) + 1);
	if (!(str))
		return (NULL);
	if (n < 0)
	{
		str[i++] = '-';
		copy = -copy;
	}
	while (exp > 0)
	{
		str[i] = (copy / exp) + 48;
		copy = copy % exp;
		exp = exp / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int	main()
{
	int n1 = 222;
    int n2 = -1;
    int n3 = -2147483648;

    char *result1 = ft_itoa(n1);
    char *result2 = ft_itoa(n2);
    char *result3 = ft_itoa(n3);

    if (result1) {
        printf("Resultado 1: %s\n", result1);
        free(result1);
    }
    if (result2) {
        printf("Resultado 2: %s\n", result2);
        free(result2);
    }
    if (result3) {
        printf("Resultado 3: %s\n", result3);
        free(result3);
    }
    return 0;
}
*/