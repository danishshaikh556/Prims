// Sumit Dorle
// CSCI 311 - Program 5
// GraphApp.cpp

#ifndef _Graph_h
#define _Graph_h

#include <map>
#include <vector>
#include <string>
#include "MinPriority.h"

using namespace std;

class Graph
{
public:
	Graph(void);
	Graph(string xd);
	Graph::~Graph();
	void MST_Prim();
	void addnode(char name);
	void addarc(char n1,char n2,int dist);	
	void printarcs();
	vector<nodeT *>pqueue;
	void rearrangeQueue();	
	void setNodeValue(char name,int value,char prede);
	void arcfinal(nodeT * a,nodeT * b, int len);
	graphT *g;
	MinPriority *minPriority;
};

#endif