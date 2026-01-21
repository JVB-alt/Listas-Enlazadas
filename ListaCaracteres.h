//
// Created by Valus on 21/1/2026.
//

#ifndef LISTASENLAZADASTUTO_LISTACARACTERES_H
#define LISTASENLAZADASTUTO_LISTACARACTERES_H


#include "Nodo.h"
#include <string>

using namespace std;

class ListaCaracteres {
private:
    Nodo* cabeza;
    int cantidad;

public:
    ListaCaracteres();
    ~ListaCaracteres();

    void agregarInicio(char c);
    void agregarFinal(char c);
    int contarCaracter(char c);
    bool esPalindromo();
    string obtenerCadena();
    void invertir();
};

#endif //LISTASENLAZADASTUTO_LISTACARACTERES_H