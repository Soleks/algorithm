#include "Task1.h"

SStack* DecToBin(int value)
{
	struct SStack* stack = stack_new(100);

	if (stack == NULL)
	{
		printf("Out of memory: function: %s, line: %d\n", __FUNCTION__, __LINE__);

		return NULL;
	}

	while (value)
	{
		stack_push(stack, value % 2);
		value /= 2;
	}

	return stack;
}