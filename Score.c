#include<stdlib.h>
#include<stdio.h>
#include "Score.h"

Score* BinarySearch(Score ScoreList[], int Size, double Target, int* pcount)
{
	int Left, Right, Mid;

	Left = 0;
	Right = Size - 1;
	int Count = 0;
	while (Left <= Right)
	{
		Mid = (Left + Right) / 2;

		if (Target == ScoreList[Mid].score) {
			*pcount = Count;
			printf("Count = %d\n", Count);
			return &(ScoreList[Mid]);
		}
		else if (Target > ScoreList[Mid].score)
			Left = Mid + 1;
		else
			Right = Mid - 1;

		Count++;
	}

	//printf("Count = %d\n", Count);
	*pcount = Count;

	return NULL;
}

int CompareScore(const void *_elem1, const void*_elem2)
{
	Score* elem1 = (Score*)_elem1;
	Score* elem2 = (Score*)_elem2;

	if (elem1->score > elem2->score)
		return 1;
	else if (elem1->score < elem2->score)
		return -1;
	else
		return 0;
}

int main()
{
	int Length = sizeof DataSet / sizeof DataSet[0];
	int i = 0;
	Score* found = NULL;

	// 점수의 오름차순으로 정렬
	qsort((void*)DataSet, Length, sizeof(Score), CompareScore);

	// 671.78점을 받은 학생 찾기
	//double searchValue = 539.13;
	double searchValue = 671.78;
	//found = BinarySearch(DataSet, Length, searchValue);

	if (found != NULL)
	{
		printf("Found [ Number: %d, Score: %lf ]\n", found->number, found->score);
	}

	int countArray[1000] = { 0, };

	for (int i = 0; i < 1000; i++) {
		int randvalue = rand() % 30000;
		found = BinarySearch(DataSet, Length, DataSet[randvalue].score, &countArray[i]);

		if (found != NULL) {
			printf("found: %d %f \n", found->number, found->score);
		}
	}

	int sum = 0;
	for (int i = 0; i < 100; i++) {
		sum += countArray[i];
	}

	/*
	for (int i = 0; i < 100; i++) {
	   printf("countArray[%d] = %d\n", i, countArray[i]);
	}
	*/

	printf("100개의 값을 찾을때 찾는 횟수당 평균 비교횟수 sum %d,  %f\n", sum, sum / (float)100);


	return 0;
}