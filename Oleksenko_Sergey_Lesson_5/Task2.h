
#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>

struct SListElement
{
	int value;
	struct SListElement * next;
};

struct SListElement * list_new(const int value);
void list_delete(struct SListElement * begin);
void list_add_in_end(struct SListElement * begin, const int value);
void list_print(struct SListElement * begin);

#endif

