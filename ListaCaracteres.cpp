//
// Created by Valus on 21/1/2026.
//

#include "ListaCaracteres.h"

#include "ListaCaracteres.h"
#include <sstream>

ListaCaracteres::ListaCaracteres() {
    cabeza=nullptr;
    cantidad=0;
}

ListaCaracteres::~ListaCaracteres() {
    while(cabeza!=nullptr) {
        Nodo* temp=cabeza;
        cabeza=cabeza->getSiguiente();
        delete temp;
    }
}

void ListaCaracteres::agregarInicio(char c) {
    Nodo* nuevo=new Nodo(c);
    nuevo->setSiguiente(cabeza);
    cabeza=nuevo;
    cantidad++;
}

void ListaCaracteres::agregarFinal(char c) {
    Nodo* nuevo=new Nodo(c);
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

int ListaCaracteres::contarCaracter(char c) {
    int contador=0;
    Nodo* temp=cabeza;
    while(temp!=nullptr) {
        if(temp->getDato()==c) {
            contador++;
        }
        temp=temp->getSiguiente();
    }
    return contador;
}

string ListaCaracteres::obtenerCadena() {
    stringstream ss;
    Nodo* temp=cabeza;
    while(temp!=nullptr) {
        ss<<temp->getDato();
        temp=temp->getSiguiente();
    }
    return ss.str();
}

bool ListaCaracteres::esPalindromo() {
    if(cabeza==nullptr || cabeza->getSiguiente()==nullptr) {
        return true;
    }
    string texto=obtenerCadena();
    int i=0;
    int j=texto.length()-1;
    while(i<j) {
        if(texto[i]!=texto[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void ListaCaracteres::invertir() {
    Nodo* anterior=nullptr;
    Nodo* actual=cabeza;
    while(actual!=nullptr) {
        Nodo* siguiente=actual->getSiguiente();
        actual->setSiguiente(anterior);
        anterior=actual;
        actual=siguiente;
    }
    cabeza=anterior;
}