/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 17:48:11 by jdias-go          #+#    #+#             */
/*   Updated: 2024/05/16 17:58:29 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof (*element));
	if (!(element))
		return (NULL);
	element -> content = content;
	element -> next = NULL;
	return (element);
}
/*
int main()
{
    t_list *new_node = ft_lstnew("Hola, mundo");

    if (new_node != NULL)
    {
        printf("Nouveau contenu %s\n", (char *)new_node->content);
        free(new_node);
    }
    else
        printf("Erreur a la creation\n");
    return (0); 
}
*/