//
// Created by LHF on 18/07/2020.
//
#include "Edge.h"
Edge::Edge(string origen,string destino,int costoVuelo, double horasVuelo){
    this->origen = origen;
    this->destino = destino;
    this->costoVuelo = costoVuelo;
    this->horasVuelo = horasVuelo;

}

string Edge::obtenerOrigen() {
    return this->origen;
}

string Edge::obtenerDestino() {
    return this->destino;
}

int Edge::obtenerCostoVuelo() {
    return this->costoVuelo;
}

double Edge::obtenerHorasVuelo() {
    return this->horasVuelo;
}