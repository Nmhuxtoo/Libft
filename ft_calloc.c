/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:12:05 by jdias-go          #+#    #+#             */
/*   Updated: 2024/04/25 15:42:31 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

// finish

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	ret = malloc(size * count);
	if (!ret)
		return (0);
	ft_bzero(ret, size * count);
	return (ret);
}

/*
int main()
{
  int* p = (int*) ft_calloc(1, sizeof(int));
  
  printf("The value is %d", *p);
  free(p);
  return (0); 
}
*/