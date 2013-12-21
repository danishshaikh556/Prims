// Sumit Dorle
// CSCI 311 - Program 5
// graphT.h

#include <vector>
#include <map>
//Forward referencing.
class nodeT;
class arcT;

using namespace std;

class graphT
{
public:
	vector<nodeT *>nodes;
	vector<arcT *> arcs;
	map<char,nodeT * > nodemap;
};
