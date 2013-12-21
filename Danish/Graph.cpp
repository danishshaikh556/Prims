// Sumit Dorle
// CSCI 311 - Program 5
// GraphApp.cpp
// Implementation of the prims algorithm.

#include "Graph.h"

//Graph Constructor.
Graph::Graph(string xd)
{
	g = new graphT;
	minPriority = new MinPriority;
}

//Graph Destructor.
Graph::~Graph()
{
	delete(g);
	delete(minPriority);
}

//Function to Add vertices of the graph in the vector.
void Graph::addnode(char name)
{
  //if(!nodemap[name])
	nodeT *t = new nodeT;
	t->nodename = name;
	t->nodevalue = 9999;		//9999 is put in as infinity.
	t->predecessor = "NIL";

	g->nodes.push_back(t);
	pqueue.push_back(t);
	g->nodemap[name]=t;	
}

//Function to add egdes (arcs) of the graph.
void Graph::addarc(char n1,char n2,int dist)
{   
	nodeT *t1=g->nodemap[n1];
	nodeT *t2=g->nodemap[n2];
	arcfinal(t1,t2,dist);
	arcfinal(t2,t1,dist);
}

//pushing back edges into the vectors.
void Graph::arcfinal(nodeT * a,nodeT * b, int len)
{
	arcT * d=new arcT;
	d->start=a;
	d->finish=b;
	d->distance=len;

	g->arcs.push_back(d);
	a->arcs.push_back(d);
}


void Graph::setNodeValue(char name ,int value,char prede)
{
	nodeT *t1=g->nodemap[name];
	t1->nodevalue=value;
	t1->predecessor=prede;
}



void Graph::printarcs()
{  
	for (unsigned int i=0; i<g->arcs.size(); i++)
	{
		cout<<g->arcs[i] -> start->nodename << "-----" << g->arcs[i]-> finish->nodename << endl;
	}
}



//Implementation of the prims algorithm for minimum spanning tree.
void Graph::MST_Prim()
{
	int totalWeight=0;
	
	vector<char> cycle;
	while(!pqueue.empty())
	{
		int valuePrint=0; 
		nodeT *f =minPriority->extractMin( pqueue);
		
		if(f->nodevalue == 9999)
		{
			valuePrint = 0;
		}
		else
		{
			valuePrint = f->nodevalue;
		}
			
		cout<< f->nodename <<" " << f->predecessor<< " " << valuePrint<<endl;
        totalWeight += valuePrint;
		cycle.push_back(f->nodename);
		
		for(unsigned int m=0;m < f->arcs.size();m++)
		{   
			int x = 0;
		   //Checking if already visited.
			for(unsigned int i=0;i<cycle.size();i++)
			{
				if(cycle[i]==f->arcs[m]->finish->nodename)
				{
					x=1;
				}
			}
			if(x == 0)
			{
				if(f->arcs[m]->finish->nodevalue > f->arcs[m]->distance)
				{
					setNodeValue(f->arcs[m]->finish->nodename,f->arcs[m]->distance,f->arcs[m]->start->nodename);					
				}
			}
		}
		
	//	for(int j=((pqueue.size()) / 2)-1;j>=0;j--) 
	//	pqueue=minPriority->minHeapify(j,pqueue.size(),pqueue);   
	}
	cout<<totalWeight<<endl;
}

