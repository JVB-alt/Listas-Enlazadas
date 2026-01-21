//
// Created by Valus on 21/1/2026.
//

#include "ListaDuplicados.h"

ListaDuplicados::ListaDuplicados() {
    cabeza=nullptr;
    cantidad=0;
}

ListaDuplicados::~ListaDuplicados() {
    while(cabeza!=nullptr) {
        Nodo* temp=cabeza;
        cabeza=cabeza->getSiguiente();
        delete temp;
    }
}

void ListaDuplicados::agregar(int valor) {
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

bool ListaDuplicados::tieneDuplicados() {
    Nodo* actual=cabeza;
    while(actual!=nullptr) {
        Nodo* temp=actual->getSiguiente();
        while(temp!=nullptr) {
            if(temp->getDato()==actual->getDato()) {
                return true;
            }
            temp=temp->getSiguiente();
        }
        actual=actual->getSiguiente();
    }
    return false;
}

void ListaDuplicados::eliminarDuplicados() {
    Nodo* actual=cabeza;
    while(actual!=nullptr) {
        Nodo* temp=actual;
        while(temp->getSiguiente()!=nullptr) {
            if(temp->getSiguiente()->getDato()==actual->getDato()) {
                Nodo* borrar=temp->getSiguiente();
                temp->setSiguiente(borrar->getSiguiente());
                delete borrar;
                cantidad--;
            }
            else {
                temp=temp->getSiguiente();
            }
        }
        actual=actual->getSiguiente();
    }
}

int ListaDuplicados::contarUnicos() {
    int contador=0;
    Nodo* actual=cabeza;
    while(actual!=nullptr) {
        bool repetido=false;
        Nodo* temp=cabeza;
        while(temp!=actual) {
            if(temp->getDato()==actual->getDato()) {
                repetido=true;
                break;
            }
            temp=temp->getSiguiente();
        }
        if(!repetido) {
            contador++;
        }
        actual=actual->getSiguiente();
    }
    return contador;
}

ListaDuplicados* ListaDuplicados::obtenerUnicos() {
    ListaDuplicados* nueva=new ListaDuplicados();
    Nodo* actual=cabeza;
    while(actual!=nullptr) {
        bool existe=false;
        Nodo* temp=nueva->cabeza;
        while(temp!=nullptr) {
            if(temp->getDato()==actual->getDato()) {
                existe=true;
                break;
            }
            temp=temp->getSiguiente();
        }
        if(!existe) {
            nueva->agregar(actual->getDato());
        }
        actual=actual->getSiguiente();
    }
    return nueva;
}