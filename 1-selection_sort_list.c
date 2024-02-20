#include "sort.h"

/**
 * swap - Swap two nodes in a listint_t doubly-linked list.
 * @d: A pointer to the head of the doubly-linked list.
 * @node_1: A pointer to the first node to swap.
 * @node_2: The second node to swap.
 */
void swap(listint_t **d, listint_t **node_1, listint_t *node_2)
{
	(*node_1)->next = node_2->next;
	if (node_2->next != NULL)
		node_2->next->prev = *node_1;
	node_2->prev = (*node_1)->prev;
	node_2->next = *node_1;
	if ((*node_1)->prev != NULL)
		(*node_1)->prev->next = node_2;
	else
		*d = node_2;
	(*node_1)->prev = node_2;
	*node_1 = node_2->prev;
}



/**
 * insertion_sort_list - sorts a doubly linked list of
 * integers in ascending order
 * @list: A pointer to the head of the doubly linked list
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = temp)
	{
		temp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap_nodes(list, &insert, iter);
			print_list((const listint_t *)*list);
		}

	}


}
