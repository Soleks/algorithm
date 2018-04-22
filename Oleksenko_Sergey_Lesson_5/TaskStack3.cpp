#include "StackTask3.h"

struct SCtack* stack_new(const unsigned num)
{
	struct  SCtack* stack = (struct SCtack*) malloc(sizeof(struct SCtack));

	if (stack == NULL)
	{
		printf("Out of memory: function: %s, line: %d\n", __FUNCTION__, __LINE__);

		return NULL;
	}

	stack->ch = (char*)malloc(sizeof(char));
	stack->ind = -1;
	stack->max_num = num;

	return stack;
}

void stack_delete(struct SCtack* stack)
{
	if (stack != NULL)
	{
		if (stack != NULL)
		{
			free(stack->p);
		}

		free(stack);
	}
}

void stack_push(struct SCtack* stack, const char value)
{
	if (stack->ind == stack->max_num - 1)
	{
		return;
	}

	stack->ind++;
	stack->p[stack->ind] = value;
}

int stack_pop(struct SCtack* stack)
{
	if (stack->ind >= 0)
	{
		stack->ind--;

		return stack->p[stack->ind + 1];
	}

	return 0;
}