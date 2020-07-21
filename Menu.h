#ifndef TP_FINAL_MENU_H
#define TP_FINAL_MENU_H
using namespace std;

class Menu{

private:

    char opcion;

public:

    //Mostrar las opciones que el usuario puede elegir
    //Pre-Condicion: -
    //Post-Condicion: Imprime por pantalla las decisiones que tiene el usuario
    void mostrarMenu();

    //Procesa la opcion del usuario
    //Pre-Condicion: -
    //Post-Condicion: Procesa la opcion invocando las funciones correspondientes
    bool selectorDeOpciones();
};
#endif //TP_FINAL_MENU_H
