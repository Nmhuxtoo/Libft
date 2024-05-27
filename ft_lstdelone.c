/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:03:28 by jdias-go          #+#    #+#             */
/*   Updated: 2024/05/16 18:01:38 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
// Example deletion function for freeing memory allocated to an integer
void delete_int(void *ptr) {
    int *p = (int*)ptr;
    free(p);
}

int main() {
    // Creating a node with content dynamically allocated
    t_list *node = malloc(sizeof(t_list));
    int *data = malloc(sizeof(int));
    *data = 42; // Example data
    node->content = data;
    node->next = NULL;

    // Deleting the node using ft_lstdelone
    printf("Before deletion: %d\n", *((int*)node->content)); 
    // Print the content before deletion
    ft_lstdelone(node, delete_int); // Delete the node
    // Attempting to access the content after 
    deletion would result in undefined behavior
    printf("After deletion: This might cause undefined behavior!\n");

    return 0;
}
*/