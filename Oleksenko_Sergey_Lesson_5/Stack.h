#ifndef STACK_H
#define STACK_H

#include "Oleksenko_Sergey_Lesson_5.h"
#include <stdlib.h>

struct SStack
{
	int* p;
	int ind;
	int max_num;
};

struct SStack* stack_new(const unsigned num);
void stack_delete(struct SStack* stack);
void stack_push(struct SStack* stack, const int value);
int stack_pop(struct SStack* stack);

#endif