//
// Created by Valus on 21/1/2026.
//

#include "ListaRango.h"

#include "ListaRango.h"

ListaRango::ListaRango() {
    cabeza=nullptr;
    cantidad=0;
}

ListaRango::~ListaRango() {
    while(cabeza!=nullptr) {
        Nodo* temp=cabeza;
        cabeza=cabeza->getSiguiente();
        delete temp;
    }
}

void ListaRango::agregar(int valor) {
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

ListaRango* ListaRango::obtenerRango(int inicio, int fin) {
    ListaRango* nueva=new ListaRango();
    Nodo* temp=cabeza;
    while(temp!=nullptr) {
        if(temp->getDato()>=inicio && temp->getDato()<=fin) {
            nueva->agregar(temp->getDato());
        }
        temp=temp->getSiguiente();
    }
    return nueva;
}

void ListaRango::eliminarRango(int inicio, int fin) {
    while(cabeza!=nullptr && cabeza->getDato()>=inicio && cabeza->getDato()<=fin) {
        Nodo* temp=cabeza;
        cabeza=cabeza->getSiguiente();
        delete temp;
        cantidad--;
    }
    Nodo* actual=cabeza;
    while(actual!=nullptr && actual->getSiguiente()!=nullptr) {
        if(actual->getSiguiente()->getDato()>=inicio && actual->getSiguiente()->getDato()<=fin) {
            Nodo* borrar=actual->getSiguiente();
            actual->setSiguiente(borrar->getSiguiente());
            delete borrar;
            cantidad--;
        }
        else {
            actual=actual->getSiguiente();
        }
    }
}

void ListaRango::insertarEnPosicion(int posicion, int valor) {
    if(posicion<=0) {
        Nodo* nuevo=new Nodo(valor);
        nuevo->setSiguiente(cabeza);
        cabeza=nuevo;
        cantidad++;
        return;
    }
    Nodo* temp=cabeza;
    int i=0;
    while(temp!=nullptr && i<posicion-1) {
        temp=temp->getSiguiente();
        i++;
    }
    if(temp!=nullptr) {
        Nodo* nuevo=new Nodo(valor);
        nuevo->setSiguiente(temp->getSiguiente());
        temp->setSiguiente(nuevo);
        cantidad++;
    }
}

bool ListaRango::eliminarEnPosicion(int posicion) {
    if(cabeza==nullptr) {
        return false;
    }
    if(posicion==0) {
        Nodo* temp=cabeza;
        cabeza=cabeza->getSiguiente();
        delete temp;
        cantidad--;
        return true;
    }
    Nodo* actual=cabeza;
    int i=0;
    while(actual->getSiguiente()!=nullptr && i<posicion-1) {
        actual=actual->getSiguiente();
        i++;
    }
    if(actual->getSiguiente()==nullptr) {
        return false;
    }
    Nodo* borrar=actual->getSiguiente();
    actual->setSiguiente(borrar->getSiguiente());
    delete borrar;
    cantidad--;
    return true;
}

int ListaRango::obtenerEnPosicion(int posicion) {
    Nodo* temp=cabeza;
    int i=0;
    while(temp!=nullptr) {
        if(i==posicion) {
            return temp->getDato();
        }
        temp=temp->getSiguiente();
        i++;
    }
    return 0;
}
