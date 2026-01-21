//
// Created by Valus on 21/1/2026.
//

#ifndef LISTASENLAZADASTUTO_LISTAPILA_H
#define LISTASENLAZADASTUTO_LISTAPILA_H

#include "Nodo.h"

class ListaPila {
    using namespace std;


    private:
        Nodo* cabeza;
        int cantidad;

    public:
        ListaPila();
        ~ListaPila();

        void push(int valor);
        int pop();
        int top();
        bool estaVacia();
        int tamaño();

};


#endif //LISTASENLAZADASTUTO_LISTAPILA_H