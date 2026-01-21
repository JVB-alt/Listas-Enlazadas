//
// Created by Valus on 20/1/2026.
//

#ifndef LISTASENLAZADASTUTO_LISTABUSQUEDA_H
#define LISTASENLAZADASTUTO_LISTABUSQUEDA_H
#include "Nodo.h"
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
class ListaBusqueda {
private:
    Nodo* cabeza;
    int cantidad;

public:
public:
    ListaBusqueda();
    ~ListaBusqueda();

    void agregar(int valor);
    bool buscar(int valor);
    int contarApariciones(int valor);
    int obtenerPosicion(int valor);
    bool eliminarPorValor(int valor);
    int eliminarTodasOcurrencias(int valor);

    string toString(); // Devuelve la lista como string
};





#endif //LISTASENLAZADASTUTO_LISTABUSQUEDA_H