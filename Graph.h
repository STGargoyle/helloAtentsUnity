#pragma once
#include <stdio.h>
#include <stdlib.h>

enum VisitMode { Visited, NotVisited };

typedef int ElementType;

typedef struct tagVertex
{
	ElementType Data;
	int         Visited;
	int         Index;

	struct tagVertex* Next;
	struct tagEdge* AdjacencyList;
} Vertex;

typedef struct tagEdge
{
	int Weight; // 가중치값 현재는 거의 안쓴다
	struct tagEdge* Next;
	Vertex* From;
	Vertex* Target;
} Edge;

typedef struct tagGraph
{
	Vertex* Vertices;
	int VertexCount;
} Graph;

Graph*  CreateGraph();
void    DestroyGraph(Graph* G);

Vertex* CreateVertex(ElementType Data);
void    DestroyVertex(Vertex* V);

Edge*   CreateEdge(Vertex* From, Vertex* Target, int Weight);
void    DestroyEdge(Edge* E);

void    AddVertex(Graph* G, Vertex* V);
void    AddEdge(Vertex* V, Edge* E);
void    PrintGraph(Graph* G);