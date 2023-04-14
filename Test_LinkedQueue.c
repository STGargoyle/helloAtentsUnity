#define _CRT_SECURE_NO_WARNINGS
#include "LinkedQueue.h"

int main( void )
{
    Node* Popped;
    LinkedQueue* Queue;

    LQ_CreateQueue(&Queue );

	char data[100];	// ���ڿ� �Է¿�
	int priority = 0; // �켱���� �Է¿�

	while (1) {
		printf("�켱����ť�� ������ ����Ÿ�� �Է��ϼ��� (�켱������ ���ڿ�)(10 monster): (exit: -1 data)");
		scanf("%d %s", &priority, data);

		if (priority <= -1) {
			break;
		}

		LQ_Enqueue(Queue, LQ_CreateNode(data, priority));

		// ť�� ���� ���
		printf("\nť�� ���� ���\n");
		Node* Current = Queue->Front;	// ������� �ּҰ��� Current�� ����
		while (Current != NULL) {
			printf("[Priority: %d, Data: %s]\n", Current->Priority, Current->Data);

			Current = Current->NextNode;
		}
	}
    
    printf("Queue Size : %d\n", Queue->Count);

    while ( LQ_IsEmpty( Queue ) == 0 )
    {
        Popped = LQ_Dequeue( Queue );

        printf( "Dequeue: %s \n", Popped->Data );

        LQ_DestroyNode( Popped );
    }

    LQ_DestroyQueue( Queue );

    return 0;
}