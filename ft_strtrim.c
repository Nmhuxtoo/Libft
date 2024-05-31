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

static int	ft_isset(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ret;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (0);
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && ft_isset(*start, set))
		++start;
	while (start < end && ft_isset(*(end - 1), set))
		--end;
	ret = ft_substr(start, 0, end - start);
	return (ret);
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