#include<iostream>
#include "BST.h"

using namespace std;

void Diccionario::Diccionario(string camino, BST<string*> &diccionario){
    Aeropuerto *aeropuerto;
    string registro;
    double superficie;
    int entero;
    
    

    arch.abrirArchivo(camino);

    while(!arch.finalArchivo()){

        aeropuerto = new Aeropuerto;

        //Carga Codigo IATA
        registro = arch.leerLinea();
        aeropuerto->cargarCodigoIATA(registro);

        //Carga Nombre
        registro=arch.leerLinea();
        aeropuerto->cargarNombre(registro);

        //Carga Ciudad
        registro=arch.leerLinea();
        aeropuerto->cargarCiudad(registro);

        //Carga Pais
        registro=arch.leerLinea();
        aeropuerto->cargarPais(registro);

        //Carga Superficie
        registro=arch.leerLinea();
        superficie=atof(registro.c_str());
        aeropuerto->cargarSuperficie(superficie);

        //Carga Terminales
        registro=arch.leerLinea();
        entero=atoi(registro.c_str());
        aeropuerto->cargarCantidadTerminales(entero);

        //Carga Destino Nacionales
        registro=arch.leerLinea();
        entero=atoi(registro.c_str());
        aeropuerto->cargarDestinosNacionales(entero);

        //Carga Destino Nacionales
        registro=arch.leerLinea();
        entero=atoi(registro.c_str());
        aeropuerto->cargarDestinoInternacionales(entero);

        diccionario.insert(aeropuerto);
        
        registro=arch.leerLinea();
    }
    arch.cerrarArchivo();
}

