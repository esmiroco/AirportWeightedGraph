#ifndef TP_FINAL_EDGE_H
#define TP_FINAL_EDGE_H
#include <string>;
using namespace std;

class Edge{

private:
    string origen;
    string destino;
    int costoVuelo;
    double horasVuelo;
public:
    Edge(string origen,string destino,int costoVuelo, double horasVuelo);
    string obtenerOrigen();
    string obtenerDestino();
    int obtenerCostoVuelo();
    double obtenerHorasVuelo();




};
#endif //TP_FINAL_EDGE_H
