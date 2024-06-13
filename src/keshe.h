#ifndef EXAMPLE_H
#define EXAMPLE_H
#define M 10000
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct view {
	char name[20];
	char introduce[200];
	int num;//±àºÅ
};
struct graph {
	view v[10];
	int edge[10][10];//±ß
};
void init(graph* g);
void menu();
void printv(graph* g);
void fapv(graph* g);
void fape1(graph* g, int dist[], int path[]);
void fape2(graph* g, int dist[], int path[]);
void fape3(graph* g, int visited[], int path[], int pathIndex);
void dijkstra(graph* g, int v0, int dist[], int path[]);
void dfs(graph* g, int current, int end, int visited[], int path[], int pathIndex);
# endif
