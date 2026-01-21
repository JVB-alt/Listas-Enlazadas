//
// Created by Valus on 21/1/2026.
//

#ifndef LISTASENLAZADASTUTO_LISTARANGO_H
#define LISTASENLAZADASTUTO_LISTARANGO_H


#include "Nodo.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class ListaRango {
private:
    Nodo* cabeza;
    int cantidad;

public:
    ListaRango();
    ~ListaRango();

    void agregar(int valor);
    ListaRango* obtenerRango(int inicio, int fin);
    void eliminarRango(int inicio, int fin);
    void insertarEnPosicion(int posicion, int valor);
    bool eliminarEnPosicion(int posicion);
    int obtenerEnPosicion(int posicion);
};



#endif //LISTASENLAZADASTUTO_LISTARANGO_H