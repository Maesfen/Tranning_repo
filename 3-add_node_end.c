#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	

	while (*head != NULL)
	{
		;
	}

	if(*head == NULL)
	{
		list_t *new;

		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;

		(*head)->next = new;
		(head) = new;
	}
	return (*head);
