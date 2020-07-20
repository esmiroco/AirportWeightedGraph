#ifndef TP_FINAL_GRAPH_H
#define TP_FINAL_GRAPH_H
#include <string>;
using namespace std;
class Vertex {
public:
    Vertex() = default;
    string label;
    int distance;
    int prevV;
    bool visited;
};
class Graph
{
public:
    Graph();

    bool AddVertex(string label);
    void PrintGraphCosto();
    void PrintGraphHorasVuelo();
    void AddEdge(string from, string to, int costo,double horasVuelo);
    int    GetCosto(int sourceIndex, int targetIndex);
    double getHorasVuelos(int sourceIndex, int targetIndex);

private:
    const static int MAX_VERTICES = 30;
    const int MAXINT = 999999;
    int matrizCosto[MAX_VERTICES][MAX_VERTICES];
    float matrizHorasVuelo[MAX_VERTICES][MAX_VERTICES];
    int numVertices;
    string labels[MAX_VERTICES];
    int FindIndex(const string &label);
    bool VerticesHaveAFalse(Vertex array[], int size);
    int PopSmallestIndexOfFalse(Vertex array[], int size);
};
#endif //TP_FINAL_GRAPH_H
