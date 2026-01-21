//
// Created by Valus on 21/1/2026.
//

#include "ListaOrdenada.h"

#include "ListaOrdenada.h"

ListaOrdenada::ListaOrdenada() {
    cabeza=nullptr;
    cantidad=0;
}

ListaOrdenada::~ListaOrdenada() {
    while(cabeza!=nullptr) {
        Nodo* temp=cabeza;
        cabeza=cabeza->getSiguiente();
        delete temp;
    }
}

void ListaOrdenada::insertarOrdenado(int valor) {
    Nodo* nuevo=new Nodo(valor);
    if(cabeza==nullptr || cabeza->getDato()>valor) {
        nuevo->setSiguiente(cabeza);
        cabeza=nuevo;
    }
    else {
        Nodo* temp=cabeza;
        while(temp->getSiguiente()!=nullptr && temp->getSiguiente()->getDato()<=valor) {
            temp=temp->getSiguiente();
        }
        nuevo->setSiguiente(temp->getSiguiente());
        temp->setSiguiente(nuevo);
    }
    cantidad++;
}

void ListaOrdenada::insertarOrdenadoDesc(int valor) {
    Nodo* nuevo=new Nodo(valor);
    if(cabeza==nullptr || cabeza->getDato()<valor) {
        nuevo->setSiguiente(cabeza);
        cabeza=nuevo;
    }
    else {
        Nodo* temp=cabeza;
        while(temp->getSiguiente()!=nullptr && temp->getSiguiente()->getDato()>=valor) {
            temp=temp->getSiguiente();
        }
        nuevo->setSiguiente(temp->getSiguiente());
        temp->setSiguiente(nuevo);
    }
    cantidad++;
}

bool ListaOrdenada::estaOrdenada() {
    if(cabeza==nullptr) {
        return true;
    }
    Nodo* temp=cabeza;
    while(temp->getSiguiente()!=nullptr) {
        if(temp->getDato()>temp->getSiguiente()->getDato()) {
            return false;
        }
        temp=temp->getSiguiente();
    }
    return true;
}

void ListaOrdenada::ordenar() {
    if(cabeza==nullptr) {
        return;
    }
    bool cambio=true;
    while(cambio) {
        cambio=false;
        Nodo* temp=cabeza;
        while(temp->getSiguiente()!=nullptr) {
            if(temp->getDato()>temp->getSiguiente()->getDato()) {
                int aux=temp->getDato();
                temp->setDato(temp->getSiguiente()->getDato());
                temp->getSiguiente()->setDato(aux);
                cambio=true;
            }
            temp=temp->getSiguiente();
        }
    }
}

void ListaOrdenada::ordenarDesc() {
    if(cabeza==nullptr) {
        return;
    }
    bool cambio=true;
    while(cambio) {
        cambio=false;
        Nodo* temp=cabeza;
        while(temp->getSiguiente()!=nullptr) {
            if(temp->getDato()<temp->getSiguiente()->getDato()) {
                int aux=temp->getDato();
                temp->setDato(temp->getSiguiente()->getDato());
                cambio=true;
            }
            temp=temp->getSiguiente();
        }
    }
}