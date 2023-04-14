#define _CRT_SECURE_NO_WARNINGS
#include "LinkedQueue.h"

void  LQ_CreateQueue(LinkedQueue** Queue)
{
	/*  ť�� ��������ҿ� ���� */
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

	/*  ť�� ���� ����ҿ��� ���� */
	free(Queue);
}

Node* LQ_CreateNode(char* NewData, int Priority)
{
	Node* NewNode = (Node*)malloc(sizeof(Node));
	NewNode->Data = (char*)malloc(strlen(NewData) + 1);

	strcpy(NewNode->Data, NewData);  /*  �����͸� �����Ѵ�. */

	NewNode->NextNode = NULL; /*  ���� ��忡 ���� �����ʹ� NULL�� �ʱ�ȭ �Ѵ�. */
	NewNode->Priority = Priority;

	return NewNode;/*  ����� �ּҸ� ��ȯ�Ѵ�. */
}

void  LQ_DestroyNode(Node* _Node)
{
	free(_Node->Data);
	free(_Node);
}

void LQ_Enqueue(LinkedQueue* Queue, Node* NewNode)
{
	if (Queue->Front == NULL) // queue�� �߰��� ��尡 ���� ���
	{
		Queue->Front = NewNode;
		Queue->Rear = NewNode;
		Queue->Count++;
	}
	else // queue�� �߰��� ��尡 �ִ� ���
	{
		if (Queue->Rear->Priority >= NewNode->Priority)
		{
			// ���Ӱ� �߰��� ����� �켱������ ��������� �켱�������� �۴�.
			// ������ ������� �ڿ� ���Ӱ� �߰��Ǵ� ��� ����.
			Queue->Rear->NextNode = NewNode;
			Queue->Rear = NewNode;
			Queue->Count++;

			return;
		}

		Node* Current = Queue->Front; // ������� �ּҰ��� Current�� ����
		Node* Prev = NULL; // Current ����� ���� ����� �ּҰ��� ����

		// ����� �������� ������� ������
		// NewNode�� ���� ��ġ�� ã�´�
		while (Current != NULL)
		{
			if (Current->Priority < NewNode->Priority)
			{
				Queue->Count++;

				if (Current == Queue->Front) // ����� ���
				{   // Current�� ���� ��尡 �ٲ��� ��
					NewNode->NextNode = Current;
					Queue->Front = NewNode;
					break;
				}
				else // ����� �̿��� ���
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
	/*  LQ_Dequeue() �Լ��� ��ȯ�� �ֻ��� ��� */
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