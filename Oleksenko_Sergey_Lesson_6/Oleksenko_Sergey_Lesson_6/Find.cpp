#include "Find.h"
#include "Task2.h"

void find(struct STree * tree, unsigned int data)
{
	if (tree->data == data)
	{
		printf(
			"Find elment = %u with left child = %u and with right child = %u\n", 
			tree->data, tree->left->data, tree->right->data);
	}
}

