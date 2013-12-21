// Sumit Dorle
// CSCI 311 - Program 5
// GraphApp.h
// MinPriority class header.

#include<iostream>
#include <vector>
#include "arcT.h"
#include "nodeT.h"
#include "graphT.h"
using namespace std;

class MinPriority
{
public:
	nodeT * extractMin(vector<nodeT *> & pqueue);
	void  minHeapify(int i,int heapsize, vector<nodeT *> & pqueue);
	void heapDecreaseKey(vector<nodeT *> & pqueue);
};
