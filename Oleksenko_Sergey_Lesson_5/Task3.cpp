#include "Task3.h"

void check_squence(char* str)
{
	SCtack* stack = cstack(strlen(str));
	bool balance = true;
	unsigned int i = 0;

	if (stack == NULL)
	{
		printf("Out of memory: function: %s, line: %d\n", __FUNCTION__, __LINE__);
	}

	while (balance &&  i < strlen(str))
	{
		char ch = str[i];
		++i;

		if (ch == '{' || 
			ch == '(' || 
			ch == '[' || 
			ch == '<')
		{
			stack_push(stack, ch);
		}
		else if (ch == '}' || 
				ch == ')' || 
				ch == ']' || 
				ch == '>')
		{
			stack_pop(stack);
		}
		else
		{
			balance = false;
		}
	}

	if (balance && stack->ind == -1)
	{
		printf("balanced\n");
	}
	else
	{
		printf("not balanced\n");
	}
}