//
// Created by Valus on 20/1/2026.
//

#ifndef LISTASENLAZADASTUTO_LISTAENTEROS_H
#define LISTASENLAZADASTUTO_LISTAENTEROS_H

using namespace std;
#include "Nodo.h"
#include  <string>
class ListaEnteros {
private:
    Nodo* cabeza;
    int cantidad;
public:
    ListaEnteros();
    ~ListaEnteros();

    bool vacia();
    int getCantidad();
    void agregarInicio(int valor);
    void agregarFinal(int valor);
    bool eliminaInicio();
    bool eliminaFinal();
    string toString();
    //ejercicio 2
    int obtenerPrimero() ;
    int obtenerUltimo() ;
    int sumarElementos() ;
    double promedio() ;
    int encontrarMaximo() ;
    int encontrarMinimo() ;
};


#endif //LISTASENLAZADASTUTO_LISTAENTEROS_H
