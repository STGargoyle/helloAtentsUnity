#define _CRT_SECURE_NO_WARNINGS
#include "LinkedQueue.h"

int main( void )
{
    Node* Popped;
    LinkedQueue* Queue;

    LQ_CreateQueue(&Queue );

	char data[100];	// 문자열 입력용
	int priority = 0; // 우선순위 입력용

	while (1) {
		printf("우선순위큐에 저장할 데이타를 입력하세요 (우선순위값 문자열)(10 monster): (exit: -1 data)");
		scanf("%d %s", &priority, data);

		if (priority <= -1) {
			break;
		}

		LQ_Enqueue(Queue, LQ_CreateNode(data, priority));

		// 큐의 값을 출력
		printf("\n큐의 값을 출력\n");
		Node* Current = Queue->Front;	// 헤드노드의 주소값을 Current에 저장
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