/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:03:14 by jdias-go          #+#    #+#             */
/*   Updated: 2024/05/16 17:57:46 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*
typedef struct s_list {
    int data;
    struct s_list *next;
} t_list;
*/

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;

	p = lst;
	if (p == NULL || lst == NULL)
		return (NULL);
	if (p ->next == NULL)
		return (p);
	while (p)
	{
		if (p->next == NULL)
			return (p);
		p = p->next;
	}
	return (p);
}

/*
int main() {
    // Create some sample linked list nodes
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    t_list *node3 = (t_list *)malloc(sizeof(t_list));

    // Assign data and next pointers
    node1->data = 1;
    node1->next = node2;

    node2->data = 2;
    node2->next = node3;

    node3->data = 3;
    node3->next = NULL;

    // Call the ft_lstlast function to find the last node
    t_list *lastNode = ft_lstlast(node1);

    // Print the data of the last node
    if (lastNode != NULL)
        printf("The data of the last node is: %d\n", lastNode->data);
    else
        printf("The list is empty!\n");

    // Free the allocated memory for the nodes
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
*/