/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:25:33 by jdias-go          #+#    #+#             */
/*   Updated: 2024/05/16 18:12:04 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// Finish

int	flag(char const *s1, char c)
{
	int	i;

	i = 0;
	while (s1[i])
		if (s1[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*new;
	size_t	len;
	size_t	n;

	i = 0;
	n = 0;
	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	while (flag(set, s1[i]) && s1[i])
		i++;
	while (flag(set, s1[len - 1]) && (len - 1))
		len--;
	if (len < 1)
		len = i;
	new = malloc(len - i + 1);
	if (!new)
		return (NULL);
	while (i < len)
		new[n++] = s1[i++];
	new[n] = '\0';
	return (new);
}

/*
int main()
{
    char *s = "       This is the way ";
    char *set = " ";
    
    char *trimmed = ft_strtrim(s, set);

    printf("After: \n%s\n", trimmed);

    return 0;
}

int main() {
    const char *s = "  This is the way ";
    const char *set = " ";
    printf("Trimmed string before: \"%s\"\n", trimmed);
    char *trimmed = ft_strtrim(s, set);
    if (trimmed) {
        printf("Trimmed string: \"%s\"\n", trimmed);
        free(trimmed);
    } else {
        printf("Failed to trim string.\n");
    }
    return 0;
}
*/