//
// Created by Valus on 21/1/2026.
//

#ifndef LISTASENLAZADASTUTO_LISTACOLA_H
#define LISTASENLAZADASTUTO_LISTACOLA_H

#include "Nodo.h"
class ListaCola {

    private:
        Nodo* cabeza;
        int cantidad;

    public:
        ListaCola();
        ~ListaCola();

        void encolar(int valor);
        int desencolar();
        int frente();
        bool estaVacia();
        int tamaño();

};


#endif //LISTASENLAZADASTUTO_LISTACOLA_H