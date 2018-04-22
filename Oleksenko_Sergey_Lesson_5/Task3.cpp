#include "Task3.h"

RetrunT check_squence(char* str)
{
	SCtack* stack = stack_new(100);

	for (unsigned int i = 0; i < strlen(str); i++)
	{
		//printf("%c\n", str[i]);

		stack_push(stack,str[i]);
	}

	printf("%c\n", stack_pop(stack));
	printf("%c\n", stack_pop(stack));
	printf("%c\n", stack_pop(stack));
	printf("%c\n", stack_pop(stack));
	printf("%c\n", stack_pop(stack));
	printf("%c\n", stack_pop(stack));

	return BadSquence;
}