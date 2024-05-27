/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-go <jdias-go@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:55:48 by jdias-go          #+#    #+#             */
/*   Updated: 2024/05/16 18:35:49 by jdias-go         ###   ########.fr       */
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

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		counter++;
	}
	return (counter);
}

/*
int main() {
    // Create a linked list
    t_list *head = NULL;
    t_list *current = NULL;
    for (int i = 1; i <= 5; i++) {
        // Allocate memory for a new node
        t_list *new_node = (t_list *)malloc(sizeof(t_list));
        if (new_node == NULL) {
            perror("Memory allocation failed");
            return 1;
        }
        new_node->data = i;
        new_node->next = NULL;
        // If it's the first node, set it as head
        if (head == NULL) {
            head = new_node;
            current = head;
        } else {
            // Otherwise, link it to the last node
            current->next = new_node;
            current = current->next;
        }
    }

    // Call ft_lstsize to get the size of the linked list
    int size = ft_lstsize(head);

    // Print the size of the linked list
    printf("Size of the linked list: %d\n", size);

    // Free the memory allocated for the linked list nodes
    current = head;
    while (current != NULL) {
        t_list *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
*/