//#include<stdio.h>
//int main()
//{
//	/*int num;
//	int i = 0;
//	printf("양의 정수를 입력: ");
//	scanf_s("%d", &num);
//	while (i < num)
//	{
//		printf("Hello World! \n");
//		i++;
//	}*/
//
//
//	// 문제2
//	/*int n = 0;
//	int count = 0;
//	printf("배수의 갯수는? : "), scanf_s("%d", &n);
//	while (count++ < n)
//		printf("%d ", 3 * count);*/
//
//
//	// 문제3
//	/*int total = 0;
//	int num = 1;
//	do
//	{
//		printf("정수 입력 (0 to quit) : ");
//		scanf_s("%d", &num);
//		total += num;
//	} while (num != 0);
//	printf("%d \n", total);*/
//
//	// 문제4
//	/*int dan = 0;
//	int num = 9;
//	printf("정수를 입력하십시오. ");
//	scanf_s("%d", &dan);
//	do
//	{
//		printf("%d × %d =%d \n", dan, num, dan * num);
//		num--;
//	} while (num != 0);*/
//
//	// 문제5
//	/*int total = 0, i = 0;
//	int num, input;
//	printf("입력할 정수의 수는 : ");
//	scanf_s("%d", &num);
//	while(i++ < num)
//	{
//		printf("정수의 입력: ");
//		scanf_s("%d", &input);
//		total += input;
//	}
//	printf("입력한 평균 : %f \n", (double)total / num);*/
//
//	// 문제6
//	/*int sum = 0, num = 0, i = 0;
//	while (i < 5)
//	{
//		while (num <= 0)
//		{
//			printf("-보다 큰 수를 입력 (%d번째) :", i + 1);
//			scanf_s("%d", &num);
//		}
//		sum += num;
//		num = 0;
//		i++;
//	}
//	printf("총 합: %d \n", sum);*/
//
//	// 문제7
//	/*for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			printf("0");
//		}
//		printf("*\n");
//	}*/
//	
//	// 문제8
//	// 1이상 100미만 정수 중에서 7의 배수와 9의 배수를 출력하는프로그램을 작성해보자
//	// 단 7의 배수이면서 9의 배수인 정수는 한번만 출력 되어야 한다.
//	
//	/*for (int i = 1; i < 100; i++)
//	{
//		if (i % 7 == 0 || i % 9 == 0)
//			printf("%d \n", i);
//	}*/
//	
//	
//
//
//	return 0;
//}