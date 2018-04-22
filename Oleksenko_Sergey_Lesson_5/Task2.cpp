
#include "Task2.h"

struct SListElement * list_new(const int value)
{
	struct SListElement * begin = (struct SListElement *) malloc(sizeof(struct SListElement));

	if (begin == NULL)
	{
		printf("Out of memory: function: %s, line: %d\n", __FUNCTION__, __LINE__);

		return NULL;
	}

	begin->value = value;
	begin->next = NULL;

	return begin;
}

void list_delete(struct SListElement * begin)
{
	struct SListElement * current, *next = begin;

	while (next != NULL)
	{
		current = next;
		next = current->next;

		free(current);
	}
}

void list_add_in_end(struct SListElement * begin, const int value)
{
	struct SListElement * current = begin;

	while (current->next != NULL)
		current = current->next;

	current->next = list_new(value);
}

void list_print(struct SListElement * begin)
{
	struct SListElement * current = begin;

	while (current != NULL)
	{
		printf("%d -> ", current->value);

		current = current->next;
	}

	printf("NULL\n");
}

