#pragma once
#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

typedef int PriorityType;

typedef struct tagePQNode
{
	PriorityType Priority;
	void*        Data; // 아직 자료형이 결정되어지지 않은 포인터 이기 때문에 만능형이라고도 하지만 
	                   // 대신 사용할 때 자료형을 먼저 결정하고 들어가야 한다.
} PQNode;

typedef struct tagPriorityQueue
{
	PQNode* Nodes;
	int     Capacity;
	int     UsedSize;
} PriorityQueue;

PriorityQueue* PQ_Create(int InitialSize);
void           PQ_Destroy(PriorityQueue* PQ);
void           PQ_Enqueue(PriorityQueue* PQ, PQNode NewData);
void           PQ_Dequeue(PriorityQueue*PQ, PQNode* Root);
int            PQ_GetParent(int Index);
int            PQ_GetLeftChild(int Index);
void           PQ_SwapNodes(PriorityQueue* PQ, int Index1, int Index2);
int            PQ_IsEmpty(PriorityQueue* PQ);