#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "PriorityQueue.h"

#define MAX_CHAR 256
#define MAX_BIT 8

typedef unsigned int UINT;
typedef unsigned char UCHAR;

typedef struct TagSymbolInfo
{
	UCHAR Symbol;
	int   Frequency;
} SymbolInfo;

typedef struct TagHuffmanNode
{
	SymbolInfo Data;
	struct TagHuffmanNode* Left;
	struct TagHuffmanNode* Right;
} HuffmanNode;

typedef struct TagBitBuffer
{
	UCHAR* Buffer;
	UINT   Size;
} BitBuffer;

typedef struct TagHuffmanCode
{
	UCHAR Code[MAX_BIT];
	int   Size;
} HuffmanCode;

HuffmanCode* Huffman_CreateNode(SymbolInfo NewData);
void         Huffman_DestroyNode(HuffmanNode* Node);
void Huffman_DestroyTree(HuffmanNode* Node);
void Huffman_AddBit(BitBuffer* Buffer, char value);

void Huffman_Encode(HuffmanNode** Tree, UCHAR* Source, BitBuffer* Encoded, HuffmanCode CodeTavble[MAX_CHAR]);
void Huffman_Decode(HuffmanNode* Tree, BitBuffer* Encoded, UCHAR* Decoded);
void Huffman_BuildPrefixTree(HuffmanNode** Tree, SymbolInfo SymbolInfoTable[MAX_CHAR]);
void Huffman_BuildCodeTable(HuffmanNode* Tree, HuffmanCode CodeTable[MAX_CHAR], UCHAR Code[MAX_BIT], int Size);
void Huffman_PrintBinary(BitBuffer* Buffer);