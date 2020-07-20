#include "Graph.h"
#include <iostream>
#include <cassert>
#include <stack>
#include <unordered_set>
#include <climits>
#include <queue>
#include <vector>

#include "Graph.h"

using namespace std;

Graph::Graph()
{
    for (int from = 0; from < MAX_VERTICES; from++)
    {
        for (int to = 0; to < MAX_VERTICES; to++)
        {
            matrizCosto[from][to] = MAXINT;
            matrizHorasVuelo[from][to] = MAXINT;
        }
    }

    numVertices = 0;
}

bool Graph::AddVertex(string label)
{
    if (numVertices == MAX_VERTICES)
        return false;
    else
        labels[numVertices++] = label;

    return true;
}

void Graph::AddEdge(string from, string to, int costo,double horasVuelo)
{
    int fromIndex = FindIndex(from);
    int toIndex = FindIndex(to);

    if (fromIndex == -1 || toIndex == -1){

        cout << "No existe" << endl;
        return;

    }


    matrizCosto[fromIndex][toIndex] = costo;
    matrizHorasVuelo[fromIndex][toIndex] = horasVuelo;

}

int Graph::FindIndex(const string & label)
{
    for (int i = 0; i < numVertices; i++)
    {
        if (labels[i] == label)
            return i;
    }

    return -1;
}

void Graph::PrintGraphCosto()
{
    cout << "\t";
    for (int i = 0; i < numVertices; i++)
    {
        cout << labels[i] << "\t";
    }
    cout << endl;

    for (int from = 0; from < numVertices; from++)
    {
        cout << labels[from];
        for (int to = 0; to < numVertices; to++)
        {
            if (matrizCosto[from][to] != MAXINT)
                cout << "\t"<<matrizCosto[from][to];
            else
                cout << "\t ";
        }
        cout << endl;
    }


    cout << endl;
}

void Graph::PrintGraphHorasVuelo()
{
    cout << "\t";
    for (int i = 0; i < numVertices; i++)
    {
        cout << labels[i] << "\t";
    }
    cout << endl;

    for (int from = 0; from < numVertices; from++)
    {
        cout << labels[from];
        for (int to = 0; to < numVertices; to++)
        {
            if (matrizHorasVuelo[from][to] != MAXINT)
                cout << "\t"<<matrizHorasVuelo[from][to];
            else
                cout << "\t ";
        }
        cout << endl;
    }


    cout << endl;
}


int Graph::GetCosto(int sourceIndex, int targetIndex)
{
    if (matrizCosto[sourceIndex][targetIndex] == MAXINT) {
        return MAXINT;
    }
    int costo = matrizCosto[sourceIndex][targetIndex];
    return costo;

}

double Graph::getHorasVuelos(int sourceIndex, int targetIndex)
{
    if (matrizHorasVuelo[sourceIndex][targetIndex] == MAXINT) {
        return MAXINT;
    }
    double horasVuelo = matrizHorasVuelo[sourceIndex][targetIndex];
    return horasVuelo;

}