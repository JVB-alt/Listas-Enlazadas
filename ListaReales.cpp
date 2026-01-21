//
// Created by Valus on 21/1/2026.
//

#include "ListaReales.h"

#include "ListaReales.h"

ListaReales::ListaReales() {
    cabeza=nullptr;
    cantidad=0;
}

ListaReales::~ListaReales() {
    while(cabeza!=nullptr) {
        Nodo* temp=cabeza;
        cabeza=cabeza->getSiguiente();
        delete temp;
    }
}

void ListaReales::agregarInicio(double valor) {
    Nodo* nuevo=new Nodo(valor);
    nuevo->setSiguiente(cabeza);
    cabeza=nuevo;
    cantidad++;
}

void ListaReales::agregarFinal(double valor) {
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

bool ListaReales::eliminarInicio() {
    if(cabeza==nullptr) {
        return false;
    }
    Nodo* temp=cabeza;
    cabeza=cabeza->getSiguiente();
    delete temp;
    cantidad--;
    return true;
}

bool ListaReales::eliminarFinal() {
    if(cabeza==nullptr) {
        return false;
    }
    if(cabeza->getSiguiente()==nullptr) {
        delete cabeza;
        cabeza=nullptr;
        cantidad--;
        return true;
    }
    Nodo* actual=cabeza;
    while(actual->getSiguiente()->getSiguiente()!=nullptr) {
        actual=actual->getSiguiente();
    }
    delete actual->getSiguiente();
    actual->setSiguiente(nullptr);
    cantidad--;
    return true;
}

double ListaReales::suma() {
    double total=0;
    Nodo* temp=cabeza;
    while(temp!=nullptr) {
        total+=temp->getDato();
        temp=temp->getSiguiente();
    }
    return total;
}

double ListaReales::promedio() {
    if(cantidad==0) {
        return 0;
    }
    return suma()/cantidad;
}

double ListaReales::producto() {
    if(cabeza==nullptr) {
        return 0;
    }
    double prod=1;
    Nodo* temp=cabeza;
    while(temp!=nullptr) {
        prod*=temp->getDato();
        temp=temp->getSiguiente();
    }
    return prod;
}

int ListaReales::contarPositivos() {
    int contador=0;
    Nodo* temp=cabeza;
    while(temp!=nullptr) {
        if(temp->getDato()>0) {
            contador++;
        }
        temp=temp->getSiguiente();
    }
    return contador;
}

int ListaReales::contarNegativos() {
    int contador=0;
    Nodo* temp=cabeza;
    while(temp!=nullptr) {
        if(temp->getDato()<0) {
            contador++;
        }
        temp=temp->getSiguiente();
    }
    return contador;
}

double ListaReales::encontrarMayor() {
    if(cabeza==nullptr) {
        return 0;
    }
    double mayor=cabeza->getDato();
    Nodo* temp=cabeza->getSiguiente();
    while(temp!=nullptr) {
        if(temp->getDato()>mayor) {
            mayor=temp->getDato();
        }
        temp=temp->getSiguiente();
    }
    return mayor;
}

double ListaReales::encontrarMenor() {
    if(cabeza==nullptr) {
        return 0;
    }
    double menor=cabeza->getDato();
    Nodo* temp=cabeza->getSiguiente();
    while(temp!=nullptr) {
        if(temp->getDato()<menor) {
            menor=temp->getDato();
        }
        temp=temp->getSiguiente();
    }
    return menor;
}