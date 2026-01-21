//
// Created by Valus on 21/1/2026.
//

#include "ListaCola.h"

ListaCola::ListaCola() {
    cabeza=nullptr;
    cantidad=0;
}

ListaCola::~ListaCola() {
    while(cabeza!=nullptr) {
        Nodo* temp=cabeza;
        cabeza=cabeza->getSiguiente();
        delete temp;
    }
}

void ListaCola::encolar(int valor) {
    Nodo* nuevo=new Nodo(valor);
    if(cabeza==nullptr) {
        cabeza=nuevo;
    }
    else {
        Nodo* temp=cabeza;
        while(temp->getSiguiente()!=nullptr) {
            temp=temp->getSiguiente();
        }
        temp->setSiguiente(nuevo);
    }
    cantidad++;
}

int ListaCola::desencolar() {
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

int ListaCola::frente() {
    if(cabeza==nullptr) {
        return 0;
    }
    return cabeza->getDato();
}

bool ListaCola::estaVacia() {
    return cabeza==nullptr;
}

int ListaCola::tamaño() {
    return cantidad;
}