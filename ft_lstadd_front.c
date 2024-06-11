/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:37:26 by jdias-go          #+#    #+#             */
/*   Updated: 2024/05/16 18:35:25 by jdias-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*
int main() 
{
    // Initialize an empty linked list
    t_list *head = NULL;

    // Add some elements to the front of the list
    for (int i = 5; i >= 1; i--) {
        // Create a new node
        t_list *new_node = malloc(sizeof(t_list));
        if (new_node == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            return 1;
        }
        new_node->data = i;
        new_node->next = NULL;

        // Add the new node to the front of the list
        lstadd_front(&head, new_node);
    }

    // Print the elements of the list
    printf("List elements: ");
    t_list *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");

    // Free the memory allocated for the list
    while (head != NULL) {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }
    return 0;
}
*/