//// Sumit Dorle
//// CSCI 311 - Program 5
//// MSTapp.cpp
//// Implementation of the MSTapp class. 
//
//#include <iostream>
//#include <string>
//#include "MSTApp.h"
//#include "Graph.h"
//#include "MinPriority.h"

//using namespace std;

//void MSTApp::processApp()
/*{
  Graph graph_obj;
  MinPriority pq_obj;

  char vertex, edge;
  int weight;

  while(cin.peek() != '\n') // gets first line
  {
    cin >> vertex;
	graph_obj.addnode(vertex);
  }

  while(cin >> vertex) // Populate adjacency list
  {
    cin >> edge;
    cin >> weight;
    graph_obj.addarc(vertex, edge, weight);
  }

  // Transfer pqueue to graph queue
  graph_obj.MST_Prim(); // Calls Prim's MST
}
*/
//
//int main()
//{
//  MSTApp mstapp_obj;
//  mstapp_obj.processApp();
//}


#include <iostream>
#include<map>
#include <fstream>
#include <vector>
#include <string>
#include "Graph.h"

using namespace std;


string a,m,n;
float b,c,l;

int main()
{
  Graph danny("danish");

  //original test case.
  danny.addnode('A');
  danny.addnode('B');
  danny.addnode('C');
  danny.addnode('D');
  danny.addnode('E');
  danny.addnode('F');
  danny.addnode('G');
 
  danny.addarc('A','B',3); 
  danny.addarc('A','E',4);
  danny.addarc('B','C',7);
  danny.addarc('B','E',6);
  danny.addarc('B','F',5);
  danny.addarc('C','D',9);
  danny.addarc('C','F',8);
  danny.addarc('D','F',9);
  danny.addarc('D','G',4);
  danny.addarc('E','F',6);
  danny.addarc('F','G',8);

  ////test2
  //danny.addnode('A');
  //danny.addnode('B');
  //danny.addnode('C');
  //danny.addnode('D');
  //danny.addnode('E');
  //danny.addnode('F');
  //danny.addnode('G');
  //danny.addnode('H');
  //danny.addnode('I');
  //  
  //danny.addarc('A','B',4);
  //danny.addarc('A','H',8);
  //danny.addarc('B','C',8);
  //danny.addarc('B','H',11);
  //danny.addarc('C','D',7);
  //danny.addarc('C','I',2);
  //danny.addarc('C','F',4);
  //danny.addarc('I','H',7);
  //danny.addarc('I','G',6);
  //danny.addarc('G','H',1);
  //danny.addarc('G','F',2);
  //danny.addarc('D','F',14);
  //danny.addarc('D','E',9);
  //danny.addarc('F','E',10);

  ////test6
  //danny.addnode('J');
  //danny.addnode('I');
  //danny.addnode('H');
  //danny.addnode('G');
  //danny.addnode('F');
  //danny.addnode('E');
  //danny.addnode('D');
  //danny.addnode('C');
  //danny.addnode('B');
  //danny.addnode('A');
  //  
  //danny.addarc('A','B',1);
  //danny.addarc('A','C',1);
  //danny.addarc('A','D',1);
  //danny.addarc('E','A',1);
  //danny.addarc('F','A',1);
  //danny.addarc('G','A',1);
  //danny.addarc('H','A',1);
  //danny.addarc('I','A',1);
  //danny.addarc('A','J',1);


	//danny.printarcs();
	danny.MST_Prim();
	int yu;	
	cin>>yu;

	return 1;
}


