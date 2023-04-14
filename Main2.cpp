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
	else // ��ǥ���� ã�� ���
	{
		Removed = tree;

		// �� ����� ��� �ٷ� ����
		if (tree->Left == NULL && tree->Right == NULL)
		{
			if (parent->Left == tree)
				parent->Left = NULL;
			else
				parent->Right = NULL;
		}
		else
		{
			// �ڽ��� ���� �� �ִ� ���
			if (tree->Left != NULL && tree->Right != NULL)
			{
				// �ּҰ� ��带 ã�� ������ �� ������ ��忡 ��ġ��Ų��.
				BSTNode* MinNode = BST_SearchMinNode(tree->Right);
				MinNode = BST_RemoveNode(tree, NULL, MinNode->Data);
				tree->Data = MinNode->Data;
			}
			else
			{
				// �ڽ��� �ϳ��� �ִ� ���
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

	// ���� ���� Ʈ�� ���
	BST_InorderPrintTree(node->Left);

	// ��Ʈ ��� ���
	printf("%d ", node->Data);

	// ������ ���� Ʈ�� ���
	BST_InorderPrintTree(node->Right);
}