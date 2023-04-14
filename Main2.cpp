#include "BinarySearchTree.h"

BSTNode* BST_CreateNode(ElementType NewData)
{
	BSTNode* NewNode = (BSTNode*)malloc(sizeof(BSTNode));
	NewNode->Left = NULL;
	NewNode->Right = NULL;
	NewNode->Data = NewData;

	return NewNode;
}

void BST_DestroyNode(BSTNode* Node)
{
	free(Node);
}

void BST_DestroyTree(BSTNode* tree)
{
	if (tree->Right != NULL)
		BST_DestroyTree(tree->Right);

	if (tree->Left != NULL)
		BST_DestroyTree(tree->Left);

	tree->Left = NULL;
	tree->Right = NULL;

	BST_DestroyNode(tree);
}

BSTNode* BST_SearchNode(BSTNode* tree, ElementType target)
{
	if (tree == NULL)
		return NULL;

	if (tree->Data == target)
		return tree;
	else if (tree->Data > target)
		return BST_SearchNode(tree->Left, target);
	else
		return BST_SearchNode(tree->Right, target);
}

BSTNode* BST_SearchMinNode(BSTNode* tree, BSTNode* child)
{
	if (tree == NULL)
		return NULL;

	if (tree->Left == NULL)
		return tree;
	else
		return BST_SearchMinNode(tree->Left);
}

void BST_InsertNode(BSTNode* tree, BSTNode*child)
{
	if (tree->Data < child->Data)
	{
		if (tree->Right == NULL)
			tree->Right = child;
		else
			BST_InsertNode(tree->Right, child);
	}
	else if (tree->Data > child->Data)
	{
		if (tree->Left == NULL)
			tree->Left = child;
		else
			BST_InsertNode(tree->Left, child);
	}
}

BSTNode* BST_RemoveNode(BSTNode* tree, BSTNode* parent, ElementType target)
{
	BSTNode* Removed = NULL;

	if (tree == NULL)
		return NULL;

	if (tree->Data > target)
		Removed = BST_RemoveNode(tree->Left, tree, target);
	else if (tree->Data < target)
		Removed = BST_RemoveNode(tree->Right, tree, target);
	else // 목표값을 찾은 경우
	{
		Removed = tree;

		// 잎 노드인 경우 바로 삭제
		if (tree->Left == NULL && tree->Right == NULL)
		{
			if (parent->Left == tree)
				parent->Left = NULL;
			else
				parent->Right = NULL;
		}
		else
		{
			// 자식이 양쪽 다 있는 경우
			if (tree->Left != NULL && tree->Right != NULL)
			{
				// 최소값 노드를 찾아 제거한 뒤 현재의 노드에 위치시킨다.
				BSTNode* MinNode = BST_SearchMinNode(tree->Right);
				MinNode = BST_RemoveNode(tree, NULL, MinNode->Data);
				tree->Data = MinNode->Data;
			}
			else
			{
				// 자식이 하나만 있는 경우
				BSTNode* Temp = NULL;
				if (tree->Left != NULL)
					Temp = tree->Left;
				else
					Temp = tree->Right;

				if (parent->Left == tree)
					parent->Left = Temp;
				else
					parent->Right = Temp;
			}
		}
	}

	return Removed;
}

void BST_InorderPrintTree(BSTNode* node)
{
	if (node == NULL)
		return;

	// 왼쪽 하위 트리 출력
	BST_InorderPrintTree(node->Left);

	// 루트 노드 출력
	printf("%d ", node->Data);

	// 오른쪽 하위 트리 출력
	BST_InorderPrintTree(node->Right);
}