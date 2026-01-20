//
// Created by Valus on 20/1/2026.
//

#include "ListaEnteros.h"

ListaEnteros::ListaEnteros() {
    cabeza=nullptr;
    cantidad=0;
}

ListaEnteros::~ListaEnteros() {
    while (cabeza!=nullptr) {
        Nodo* temp= cabeza;
        cabeza=cabeza->getSiguiente();
        delete temp;
    }
}


bool ListaEnteros::vacia() {
    if (cabeza==nullptr) {
        return true;
    }
}

int ListaEnteros::getCantidad() {
    return cantidad;
}

void ListaEnteros::agregarInicio(int valor) {
    Nodo* nuevo=new Nodo(valor);
    nuevo->setSiguiente(cabeza);
    cabeza=nuevo;
    cantidad++;
}

void ListaEnteros::agregarFinal(int valor) {
    Nodo* nuevo= new Nodo(valor);
    if (vacia()) {
        cabeza=nuevo;
    }
    else {
        Nodo* actual;
        while(actual->getSiguiente()!=nullptr) {
            actual=actual->getSiguiente();
        }
        nuevo=actual->getSiguiente();
    }
cantidad++;
}

bool ListaEnteros::eliminaInicio() {
}

bool ListaEnteros::eliminaFinal() {
}

string ListaEnteros::toString() {
}
