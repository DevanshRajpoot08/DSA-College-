#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct node{
	int vertex;
	struct node* next;
}*GNODE;
GNODE graph[MAX];
void insertvertex(int*N);
void insertEdge(int*N);
void deleteVertex(int*N);
void deleteEdge(int*N);
void print(int*N);
void print(int*N){
	for(int i=1;i<=*N;i++){
		if(graph[i]!=NULL){
			printf("%d=>",i);
			GNODE temp=graph[i];
			while(temp!=NULL){
				printf("%d\t",temp->vertex);
							  temp=temp->next;
			}
			printf("\n");
		}
	}
}

void insertVertex(int * N) {
	(*N)++;
	graph[*N]=NULL;
	printf("Vertex %d inserted.\n",*N);
}

void insertEdge(int *N) {
	int src,des;
	GNODE q,p;
}
