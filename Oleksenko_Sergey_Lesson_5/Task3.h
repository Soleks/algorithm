#include "Oleksenko_Sergey_Lesson_5.h"
#include "StackTask3.h"

enum ReturnT
{
	BadSquence = 0,
	GoodSquence = 1
};

SCtack* save_squence(char* str);
ReturnT check_squence(char* str, SCtack* stack);