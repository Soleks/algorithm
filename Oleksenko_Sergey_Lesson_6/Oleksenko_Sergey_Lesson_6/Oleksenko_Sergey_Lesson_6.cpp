// Oleksenko_Sergey_Lesson_6.cpp: определяет точку входа для приложения.
//

#include "Oleksenko_Sergey_Lesson_6.h"
#include "Task1.h"
#include "Task2.h"
#include "Find.h"

//using namespace std;

int main()
{
	//Реализовать простейшую хэш - функцию.
	//На вход функции подается строка, 
	//на выходе XOR кодов символов.

	cryptoString("abc");


	//
	struct STree * tree = tree_create(17);

	tree->left = tree_create(25);
	tree->left->left = tree_create(11);

	tree->right = tree_create(1);
	tree->right->left = tree_create(2);
	tree->right->right = tree_create(3);

	tree->right->right->right = tree_create(7);

	tree_lrc_find(tree, 1, &find);

	getchar();

	return 0;
}
