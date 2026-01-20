//
// Created by Valus on 19/1/2026.
//

#include "Nodo.h"

Nodo::Nodo(int dato) {
    this->dato = dato;
}
int Nodo:: getDato() {
    return dato;
}
void Nodo::setDato(int dato) {
    this->dato = dato;
}
Nodo* Nodo::getSiguiente() {
    return siguiente;
}
void Nodo::setSiguiente(Nodo* siguiente) {
    this->siguiente = siguiente;
}

