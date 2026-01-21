//
// Created by Valus on 21/1/2026.
//

#include "ListaPila.h"

ListaPila::ListaPila() {
    cabeza=nullptr;
    cantidad=0;
}

ListaPila::~ListaPila() {
    while(cabeza!=nullptr) {
        Nodo* temp=cabeza;
        cabeza=cabeza->getSiguiente();
        delete temp;
    }
}

void ListaPila::push(int valor) {
    Nodo* nuevo=new Nodo(valor);
    nuevo->setSiguiente(cabeza);
    cabeza=nuevo;
    cantidad++;
}

int ListaPila::pop() {
    if(cabeza==nullptr) {
        return 0;
    }
    Nodo* temp=cabeza;
    int valor=temp->getDato();
    cabeza=cabeza->getSiguiente();
    delete temp;
    cantidad--;
    return valor;
}

int ListaPila::top() {
    if(cabeza==nullptr) {
        return 0;
    }
    return cabeza->getDato();
}

bool ListaPila::estaVacia() {
    if(cabeza==nullptr) {
        return true;
    }
    else {
        return false;
    }
}

int ListaPila::tamaño() {
    return cantidad;
}