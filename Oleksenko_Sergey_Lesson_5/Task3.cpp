#include "Task3.h"

SCtack* save_squence(char* str)
{
	SCtack* stack = stack_new(100);

	if (stack == NULL)
	{
		printf("Out of memory: function: %s, line: %d\n", __FUNCTION__, __LINE__);
	}

	for (unsigned int i = 0; i < strlen(str); i++)
	{
		stack_push(stack,str[i]);
	}

	printf("%c\n", stack_pop(stack));
	printf("%c\n", stack_pop(stack));
	printf("%c\n", stack_pop(stack));
	printf("%c\n", stack_pop(stack));
	printf("%c\n", stack_pop(stack));
	printf("%c\n", stack_pop(stack));

	return stack;
}

ReturnT check_squence(char* str, SCtack* stack)
{
	return BadSquence;
}