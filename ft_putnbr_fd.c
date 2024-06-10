/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:10:43 by jdias-go          #+#    #+#             */
/*   Updated: 2024/05/17 16:23:04 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"
#include <fcntl.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (-2147483648 == n)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		n *= -1;
		write(fd, "-", 1);
	}
	if (0 == n)
		write(fd, "0", 1);
	else if (n > 0 && n < 10)
		ft_putchar_fd((n + 48), fd);
	else
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd((n % 10) + 48, fd);
	}
}

/*
int main()
{
    int fd = 1; // Using stdout
    ft_putnbr_fd(12345, fd);
    write(fd, "\n", 1);
    ft_putnbr_fd(-54321, fd);
    write(fd, "\n", 1);
    ft_putnbr_fd(0, fd);
    write(fd, "\n", 1);
    ft_putnbr_fd(-2147483648, fd);
    write(fd, "\n", 1);
    return 0;
}
*/