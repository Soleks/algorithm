#include "Stack.h"

struct SStack* stack_new(const unsigned num)
{
	struct  SStack* stack = (struct SStack*) malloc(sizeof(struct SStack));

	if (stack == NULL)
	{
		printf("Out of memory: function: %s, line: %d\n", __FUNCTION__, __LINE__);

		return NULL;
	}

	stack->p = (int*)malloc(sizeof(int) * num);
	stack->ind = -1;
	stack->max_num = num;

	return stack;
}

void stack_delete(struct SStack* stack)
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

void stack_push(struct SStack* stack, const int value)
{
	if (stack->ind == stack->max_num - 1)
	{
		return;
	}

	stack->ind++;
	stack->p[stack->ind] = value;
}

int stack_pop(struct SStack* stack) 
{
	if (stack->ind >= 0)
	{
		stack->ind--;
		
		return stack->p[stack->ind + 1];
	}

	return 0;
}