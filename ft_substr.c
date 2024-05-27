/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:46:54 by jdias-go          #+#    #+#             */
/*   Updated: 2024/04/27 19:02:39 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

// Finish

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substr = malloc (sizeof(char *) * (len + 1));
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*
int	main()
{
    const char *cadena_original = "Hello, World!";
    unsigned int inicio = 4;
    size_t longitud = 5;

    char *subcadena = ft_substr(cadena_original, inicio, longitud);
    if (subcadena == NULL) {
        printf("Error al extraer la subcadena.\n");
        return 1;
    }

    size_t longitud_original = ft_strlen(cadena_original);
    char *duplicado = ft_strdup(cadena_original);

    printf("Cadena original: %s\n", cadena_original);
    printf("Subcadena: %s\n", subcadena);
    printf("Longitud original: %zu\n", longitud_original);
    printf("Duplicado: %s\n", duplicado);
    free(subcadena);
    free(duplicado);
    return 0;
} 
*/