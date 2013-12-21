// Sumit Dorle
// CSCI 311 - Program 5
// nodeT.h
// Implemented for vertices of the graph.

#include <vector>
#include <string>
class arcT;

using namespace std;

class nodeT
{
public:
	char nodename;
	int nodevalue;
	string predecessor;
	vector<arcT *> arcs;
};
