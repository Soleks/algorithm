#include "Task1.h"

void cryptoString(char* str)
{	
	if (str == NULL)
	{
		printf("few arguments\n");

		return;
	}

	int cryptoValue = 255;

	char* result = (char*)malloc(sizeof(char) * strlen(str));

	if (result == NULL)
	{
		printf("function: %s, line: %d  error: OOM\n", __FUNCTION__, __LINE__);
	}
	
	for (unsigned int i = 0; i < strlen(str); i++)
	{
		result[i] = str[i] ^ cryptoValue;

		if (--cryptoValue == 0)
		{
			cryptoValue = 255;
		}
	}

	printf("origin string : %s\n", str);
	printf("string result : %s\n", result);
	printf("unsigned char result : %s\n", result);
	printf("hex result : %02x\n", result);

	free(result);
}