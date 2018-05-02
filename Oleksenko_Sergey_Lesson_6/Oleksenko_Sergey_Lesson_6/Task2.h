#ifndef TREE_H
#define TREE_H

#include "Oleksenko_Sergey_Lesson_6.h"
#include <stdio.h>
#include <stdlib.h>

struct STree
{
	struct STree * parent, *left, *right;
	unsigned data;
};

struct STree * tree_create(const unsigned data);
void tree_delete(struct STree * tree);
void tree_print(struct STree * tree);

void tree_lrc(struct STree * tree, void(*func)(struct STree *));

void tree_lrc_find(
	struct STree * tree,
	unsigned data,
	void(*func)(struct STree *, unsigned int data));

#endif