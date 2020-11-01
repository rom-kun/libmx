#include "libmx.h"

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
	if (list == NULL) return NULL;
	if (list->next == NULL) return list; 
	t_list **headp = &list;
	t_list **headNextp = &list;
	void *dataTmp = NULL;
	while(*headp) {
		headNextp = &((*headp)->next);
		while(*headNextp) {
			if (cmp((*headp)->data, (*headNextp)->data)) {
				dataTmp = (*headp)->data;
				(*headp)->data = (*headNextp)->data;
				(*headNextp)->data = dataTmp;
			}
			headNextp = &((*headNextp)->next);
		}
		headp = &((**headp).next);
	}
	return list;
}
