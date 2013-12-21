// Sumit Dorle
// CSCI 311 - Program 5
// GraphApp.cpp
// Implementation of the priority queue.

#include "MinPriority.h"

//Function to perform min heapify to implement min priority queue.
void MinPriority::minHeapify(int i,int heapsize, vector<nodeT *> & pqueue)
{
    int l;
    int r;
    int smallest;

    l = 2*i+1;
    r = 2*i+2;

	//Comparing parent with left child
	if ((l<heapsize) && (pqueue[l]->nodevalue<=pqueue[i]->nodevalue))	
	//if ((l<heapsize) && (pqueue[l]->nodevalue < pqueue[i]->nodevalue))		
	{
		if(pqueue[l]->nodevalue==pqueue[i]->nodevalue)				
			{
				if(pqueue[l]->nodename<pqueue[i]->nodename)
					smallest=l;
				else
					smallest=i;
			}		
			else smallest=l;		
	}
	else 
		smallest = i;
	
	int t=smallest;
    
	//if ((r<heapsize) && (pqueue[r]->nodevalue < pqueue[smallest]->nodevalue))
	if ((r<heapsize) && (pqueue[r]->nodevalue<=pqueue[smallest]->nodevalue)) 
		if(pqueue[r]->nodevalue==pqueue[smallest]->nodevalue)      
			{
				if(pqueue[r]->nodename<pqueue[smallest]->nodename)
					smallest=r;
				else 
					smallest=t;
			}
		else
				smallest=r;

	if (smallest!=i)							
    {
		swap(pqueue[smallest],pqueue[i]);        		
		minHeapify(smallest, heapsize, pqueue);
    }

	
}
nodeT * MinPriority::extractMin(vector<nodeT *> & pqueue)
{   for(int j=((pqueue.size()) / 2)-1; j>=0 ;j--) 
	
	minHeapify(j,pqueue.size(),pqueue);	
    
	nodeT * extractMinNode= pqueue[0];
	heapDecreaseKey(pqueue);
	return extractMinNode;
}

//Function to rearrage the queue.
void MinPriority::heapDecreaseKey(vector<nodeT *> & pqueue)
{
	for(unsigned int i=0;i<pqueue.size()-1;i++)
	{
		pqueue[i]=pqueue[i+1];
	}
	pqueue.pop_back();
}