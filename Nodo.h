//
// Created by Valus on 19/1/2026.
//

#ifndef LISTASENLAZADASTUTO_NODO_H
#define LISTASENLAZADASTUTO_NODO_H


class Nodo {
private:
    int dato;
    Nodo* siguiente;
public:
    Nodo(int dato);
    int getDato();
    void setDato(int dato);
    Nodo* getSiguiente();
    void setSiguiente(Nodo* siguiente);
};


#endif //LISTASENLAZADASTUTO_NODO_H