//
// Created by Valus on 20/1/2026.
//
#include "ListaBusqueda.h"
#include <sstream>

ListaBusqueda::ListaBusqueda() {
    cabeza=nullptr;
    cantidad=0;
}

ListaBusqueda::~ListaBusqueda() {
    while(cabeza!=nullptr) {
        Nodo* temp=cabeza;
        cabeza=cabeza->getSiguiente();
        delete temp;
    }
}

void ListaBusqueda::agregar(int valor) {
    Nodo* nuevo=new Nodo(valor);
    if(cabeza==nullptr) {
        cabeza=nuevo;
    }
    else {
        Nodo* actual=cabeza;
        while(actual->getSiguiente()!=nullptr) {
            actual=actual->getSiguiente();
        }
        actual->setSiguiente(nuevo);
    }
    cantidad++;
}

bool ListaBusqueda::buscar(int valor) {
    Nodo* temp=cabeza;
    while(temp!=nullptr) {
        if(temp->getDato()==valor) {
            return true;
        }
        temp=temp->getSiguiente();
    }
    return false;
}

int ListaBusqueda::contarApariciones(int valor) {
    int contador=0;
    Nodo* temp=cabeza;
    while(temp!=nullptr) {
        if(temp->getDato()==valor) {
            contador++;
        }
        temp=temp->getSiguiente();
    }
    return contador;
}

int ListaBusqueda::obtenerPosicion(int valor) {
    int pos=0;
    Nodo* temp=cabeza;
    while(temp!=nullptr) {
        if(temp->getDato()==valor) {
            return pos;
        }
        temp=temp->getSiguiente();
        pos++;
    }
    return -1;
}

bool ListaBusqueda::eliminarPorValor(int valor) {
    if(cabeza==nullptr) {
        return false;
    }
    if(cabeza->getDato()==valor) {
        Nodo* temp=cabeza;
        cabeza=cabeza->getSiguiente();
        delete temp;
        cantidad--;
        return true;
    }
    Nodo* actual=cabeza;
    while(actual->getSiguiente()!=nullptr && actual->getSiguiente()->getDato()!=valor) {
        actual=actual->getSiguiente();
    }
    if(actual->getSiguiente()==nullptr) {
        return false;
    }
    Nodo* temp=actual->getSiguiente();
    actual->setSiguiente(temp->getSiguiente());
    delete temp;
    cantidad--;
    return true;
}

int ListaBusqueda::eliminarTodasOcurrencias(int valor) {
    int eliminadas=0;
    while(cabeza!=nullptr && cabeza->getDato()==valor) {
        Nodo* temp=cabeza;
        cabeza=cabeza->getSiguiente();
        delete temp;
        cantidad--;
        eliminadas++;
    }
    Nodo* actual=cabeza;
    while(actual!=nullptr && actual->getSiguiente()!=nullptr) {
        if(actual->getSiguiente()->getDato()==valor) {
            Nodo* temp=actual->getSiguiente();
            actual->setSiguiente(temp->getSiguiente());
            delete temp;
            cantidad--;
            eliminadas++;
        }
        else {
            actual=actual->getSiguiente();
        }
    }
    return eliminadas;
}
string ListaBusqueda::toString() {
    stringstream ss;
    Nodo* temp=cabeza;
    if(temp==nullptr) {
        ss<<"(vacía)";
    }
    while(temp!=nullptr) {
        ss<<"Datos en nodo: "<<temp->getDato()<<endl;
        temp=temp->getSiguiente();
    }
    return ss.str();
}