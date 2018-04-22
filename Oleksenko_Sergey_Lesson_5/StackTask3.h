#ifndef SCTACK_H
#define SCTACK_H

#include "Oleksenko_Sergey_Lesson_5.h"
#include <stdlib.h>

struct SCtack
{
	char* p;
	int ind;
	int max_num;
};

struct SCtack* stack_new(const unsigned num);
void stack_delete(struct SCtack* stack);
void stack_push(struct SCtack* stack, const char value);
char stack_pop(struct SCtack* stack);

#endif