//
// Created by Valus on 21/1/2026.
//

#ifndef LISTASENLAZADASTUTO_LISTAREALES_H
#define LISTASENLAZADASTUTO_LISTAREALES_H
#include "Nodo.h"
class ListaReales {
private:
    Nodo* cabeza;
    int cantidad;

public:
    ListaReales();
    ~ListaReales();

    void agregarInicio(double valor);
    void agregarFinal(double valor);
    bool eliminarInicio();
    bool eliminarFinal();

    double suma();
    double promedio();
    double producto();
    int contarPositivos();
    int contarNegativos();
    double encontrarMayor();
    double encontrarMenor();
};


#endif //LISTASENLAZADASTUTO_LISTAREALES_H