
#include <iostream>
#include "Graph.h"

using namespace std;

int main()
{
    Graph g;

    g.AddVertex("EZE");
    g.AddVertex("HOS");
    g.AddVertex("LAX");
    g.AddVertex("CRR");
    g.AddVertex("BRC");
    g.AddVertex("ARR");

    g.AddEdge("EZE", "LAX", 30000,12);
    g.AddEdge("EZE", "BRC", 200,2);
    g.AddEdge("BRC", "LAX", 2000,18);

    g.DijkstraShortedPath("EZE");
    g.DijkstraShortedPathHorasVuelo("EZE");



    cout << "Press [Enter] to exit  ";
    getchar();
}