#include "libmx.h"

void mx_pop_front(t_list **head) {
    if (head == NULL || *head == NULL) return;

    t_list *next_node = (*head)->next;
    
    free(*head);
    *head = next_node;  
}
