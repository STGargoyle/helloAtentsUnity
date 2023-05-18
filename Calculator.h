#pragma once
#include <stdlib.h>
#include "LinkedListStack.h"

typedef enum
{
	LEFT_PARENTHESIS='(',RIGHT_PARENTHESIS=')',
	PLUS='+', MINUS='-', 
	MULTIPLY='*', DIVIDE='/', 
	SPACE=' ', OPERAND
} SYMBOL;

int IsNumber(char Cipher); // �����Ǵ�
unsigned int GetNextToken(char* Expression, char* Token, int* TYPE);
int IsPrior(char Operator1, char Operator2);
void GetPostfix(char* InfixExpression, char* PostfixExpression);
double Calculate(char* PostfixExpression);