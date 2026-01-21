//
// Created by Valus on 21/1/2026.
//

#ifndef LISTASENLAZADASTUTO_LISTAORDENADA_H
#define LISTASENLAZADASTUTO_LISTAORDENADA_H

#include "Nodo.h"
#include <string>
#include <sstream>
#include <iostream>
class ListaOrdenada {
private:
    Nodo* cabeza;
    int cantidad;

public:
    ListaOrdenada();
    ~ListaOrdenada();

    void insertarOrdenado(int valor);
    void insertarOrdenadoDesc(int valor);
    bool estaOrdenada();
    void ordenar();
    void ordenarDesc();
};




#endif //LISTASENLAZADASTUTO_LISTAORDENADA_H