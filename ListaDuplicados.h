//
// Created by Valus on 21/1/2026.
//

#ifndef LISTASENLAZADASTUTO_LISTADUPLICADOS_H
#define LISTASENLAZADASTUTO_LISTADUPLICADOS_H


#include "Nodo.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class ListaDuplicados {
private:
    Nodo* cabeza;
    int cantidad;

public:
    ListaDuplicados();
    ~ListaDuplicados();

    void agregar(int valor);
    bool tieneDuplicados();
    void eliminarDuplicados();
    int contarUnicos();
    ListaDuplicados* obtenerUnicos();
};

#endif //LISTASENLAZADASTUTO_LISTADUPLICADOS_H