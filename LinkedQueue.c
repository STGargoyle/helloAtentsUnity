#define _CRT_SECURE_NO_WARNINGS
#include "LinkedQueue.h"

void  LQ_CreateQueue(LinkedQueue** Queue)
{
	/*  큐를 자유저장소에 생성 */
	(*Queue) = (LinkedQueue*)malloc(sizeof(LinkedQueue));
	(*Queue)->Front = NULL;
	(*Queue)->Rear = NULL;
	(*Queue)->Count = 0;
}

void LQ_DestroyQueue(LinkedQueue* Queue)
{
	while (!LQ_IsEmpty(Queue))
	{
		Node* Popped = LQ_Dequeue(Queue);
		LQ_DestroyNode(Popped);
	}

	/*  큐를 자유 저장소에서 해제 */
	free(Queue);
}

Node* LQ_CreateNode(char* NewData, int Priority)
{
	Node* NewNode = (Node*)malloc(sizeof(Node));
	NewNode->Data = (char*)malloc(strlen(NewData) + 1);

	strcpy(NewNode->Data, NewData);  /*  데이터를 저장한다. */

	NewNode->NextNode = NULL; /*  다음 노드에 대한 포인터는 NULL로 초기화 한다. */
	NewNode->Priority = Priority;

	return NewNode;/*  노드의 주소를 반환한다. */
}

void  LQ_DestroyNode(Node* _Node)
{
	free(_Node->Data);
	free(_Node);
}

void LQ_Enqueue(LinkedQueue* Queue, Node* NewNode)
{
	if (Queue->Front == NULL) // queue에 추가된 노드가 없는 경우
	{
		Queue->Front = NewNode;
		Queue->Rear = NewNode;
		Queue->Count++;
	}
	else // queue에 추가된 노드가 있는 경우
	{
		if (Queue->Rear->Priority >= NewNode->Priority)
		{
			// 새롭게 추가된 노드의 우선순위가 꼬리노드의 우선순위보다 작다.
			// 작으면 꼬리노드 뒤에 새롭게 추가되는 노드 붙임.
			Queue->Rear->NextNode = NewNode;
			Queue->Rear = NewNode;
			Queue->Count++;

			return;
		}

		Node* Current = Queue->Front; // 헤드노드의 주소값을 Current에 저장
		Node* Prev = NULL; // Current 노드의 앞쪽 노드의 주소값을 저장

		// 헤드노드 에서부터 꼬리노드 전까지
		// NewNode의 삽입 위치를 찾는다
		while (Current != NULL)
		{
			if (Current->Priority < NewNode->Priority)
			{
				Queue->Count++;

				if (Current == Queue->Front) // 헤드인 경우
				{   // Current가 헤드면 헤드가 바뀌어야 함
					NewNode->NextNode = Current;
					Queue->Front = NewNode;
					break;
				}
				else // 헤드노드 이외의 경우
				{
					Prev->NextNode = NewNode;
					NewNode->NextNode = Current;
					break;
				}
			}

			Prev = Current;
			Current = Current->NextNode;
		}

	}
}

Node* LQ_Dequeue(LinkedQueue* Queue)
{
	/*  LQ_Dequeue() 함수가 반환할 최상위 노드 */
	Node* Front = Queue->Front;

	if (Queue->Front->NextNode == NULL)
	{
		Queue->Front = NULL;
		Queue->Rear = NULL;
	}
	else
	{
		Queue->Front = Queue->Front->NextNode;
	}

	Queue->Count--;

	return Front;
}

int LQ_IsEmpty(LinkedQueue* Queue)
{
	return (Queue->Front == NULL);
}