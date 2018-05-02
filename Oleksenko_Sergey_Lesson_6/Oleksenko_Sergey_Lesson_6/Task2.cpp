
#include "Task2.h"

struct STree * tree_create(const unsigned data)
{
	struct STree * tree = (struct STree *) malloc(sizeof(struct STree));

	if (tree == NULL)
	{
		fprintf(stderr, "Невозможно выделить память\n");

		exit(-1);
	}

	tree->right = NULL;
	tree->left = NULL;
	tree->parent = NULL;

	tree->data = data;

	return tree;
}

//аргумет типа void (__cdecl*)(void *Block) не совместим с параметром void (*)(STree*)
//void tree_delete(struct STree * tree)
//{
//	tree_lrc(tree, &free);
//}

void tree_lrc(struct STree * tree, void(*func)(struct STree *))
{
	if (tree != NULL)
	{
		tree_lrc(tree->left, func);
		tree_lrc(tree->right, func);

		(*func)(tree);
	}
}

void tree_lrc_find(
	STree * tree, 
	unsigned data, 
	void(*func)(STree *, unsigned int data))
{
	if (tree != NULL)
	{
		tree_lrc_find(tree->left, data, func);
		tree_lrc_find(tree->right, data, func);

		(*func)(tree, data);
	}
}

void tree_print(struct STree * tree)
{
	if (tree != NULL)
	{
		printf("%u (", tree->data);

		tree_print(tree->left);

		printf(" , ");

		tree_print(tree->right);

		printf(" )");
	}
	else
		printf("NULL");
}