//
// Created by Valus on 20/1/2026.
//

#include "ListaEnteros.h"
#include <sstream>
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
    else{
        return false;
    }
}

int ListaEnteros::getCantidad() {
    return cantidad;
}

void ListaEnteros::agregarInicio(int valor) {
    Nodo* nuevo=new Nodo(valor);// se crea nodo

    nuevo->setSiguiente(cabeza);//se enlaza a cabeza
    cabeza=nuevo;// la nueva cabeza es nuevo!
    cantidad++;//aumenta la cantidad
}

void ListaEnteros::agregarFinal(int valor) {
    Nodo* nuevo= new Nodo(valor);// se crea nodo
    if (vacia()) { // se verifica si esta vacio la cabeza
        cabeza=nuevo;//si esta vacio cabeza apasa a ser nuevo porque no tenia
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

bool ListaEnteros::eliminaInicio() {
    if (vacia()) {
        return false;
    }
    else {
        Nodo* temp=cabeza;
        cabeza=cabeza->getSiguiente();
        delete temp;
        cantidad--;
        return true;
    }

}

bool ListaEnteros::eliminaFinal() {
    //Comprobacion si cabeza es vacio, si es true el metodo devuelve false porque no hay nada
   if (vacia()) {
       return false;
   }
    //comprobacion si cabeza es nullptr
   if (cabeza->getSiguiente()==nullptr) {
       delete cabeza;
       cabeza=nullptr;
   }
    else {
        Nodo* actual=cabeza;
        while (actual->getSiguiente()->getSiguiente()!=nullptr) {
            actual=actual->getSiguiente();
        }
        delete actual->getSiguiente();
        actual->setSiguiente(nullptr);
    }
    cantidad--;
return true;
}

string ListaEnteros::toString() {
    stringstream ss;
    Nodo*temp=cabeza;
    while (temp!=nullptr) {

        ss<<"Datos en nodo: "<< temp->getDato()<<endl;
        temp=temp->getSiguiente();
    }
    return ss.str();

}
int ListaEnteros::obtenerPrimero() {
    return cabeza->getDato();
}

int ListaEnteros::obtenerUltimo() {
     Nodo* temp=cabeza;
    if (temp==nullptr) {
        return 0;
    }
    while (temp->getSiguiente()!=nullptr) {
        temp=temp->getSiguiente();
    }
    return temp->getDato();
}

int ListaEnteros::sumarElementos() {
    int sumaTotal=0;

    Nodo* temp=cabeza;
    if (temp==nullptr) {
        return 0;
    }
    while (temp!=nullptr) {
        sumaTotal=sumaTotal+temp->getDato();
        temp=temp->getSiguiente();
    }
    return sumaTotal;
}

double ListaEnteros::promedio() {

    Nodo* temp=cabeza;
    if (temp==nullptr) {
        return 0;
    }

    return (double)sumarElementos()/cantidad;;
}

int ListaEnteros::encontrarMaximo() {
    Nodo* temp=cabeza;
    if (temp==nullptr) {
        return 0;
    }
    int maximo=0;
    while (temp!=nullptr) {
        if (maximo<temp->getDato()) {
            maximo=temp->getDato();
        }
        temp=temp->getSiguiente();
    }
    return maximo;
}

int ListaEnteros::encontrarMinimo() {
    Nodo* temp=cabeza;
    if (temp==nullptr) {
        return 0;
    }
    int minimo=0;
    while (temp!=nullptr) {
        if (temp->getDato()<minimo) {
            minimo=temp->getDato();
        }
        temp=temp->getSiguiente();
    }
}
