// Oleksenko_Sergey_Lesson_5.cpp: определяет точку входа для приложения.
//

#include "Oleksenko_Sergey_Lesson_5.h"
#include "Stack.h"
#include "Task1.h"
#include "Task3.h"

using namespace std;

int main()
{

	//1.Реализовать перевод из 10 в 2 систему счисления с использованием стека.
    SStack* stack = DecToBin(5);

	printf("%d\n", stack_pop(stack));
	printf("%d\n", stack_pop(stack));
	printf("%d\n", stack_pop(stack));
	printf("%d\n", stack_pop(stack));
	printf("%d\n", stack_pop(stack));

	printf("###################\n");

	//3.Написать программу, которая определяет, является ли введенная скобочная последовательность правильной.

	check_squence("{([<>])}");

	system("pause");

	return 0;
}
