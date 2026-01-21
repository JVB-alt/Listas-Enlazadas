#include <iostream>
#include "ListaBusqueda.h"
#include <sstream>
#include "ListaEnteros.h"
#include "ListaCaracteres.h"
#include "ListaPila.h"
#include "ListaCola.h"
#include "ListaDuplicados.h"
#include "ListaReales.h"
#include "ListaOrdenada.h"
#include "ListaRango.h"
int main() {
    //EJERCICIO 1 Y 2
    ListaEnteros lista;

    lista.agregarInicio(10);
    lista.agregarInicio(5);
    lista.agregarFinal(20);
    lista.agregarFinal(15);

    cout << "Lista:" << endl;
    cout << lista.toString() << endl;

    cout << "Primero: " << lista.obtenerPrimero() << endl;
    cout << "Ultimo: " << lista.obtenerUltimo() << endl;
    cout << "Total: " << lista.getCantidad() << endl;
    cout << "Suma: " << lista.sumarElementos() << endl;
    cout << "Promedio: " << lista.promedio() << endl;
    cout << "Max: " << lista.encontrarMaximo() << endl;
    cout << "Min: " << lista.encontrarMinimo() << endl;

    lista.eliminaInicio();
    lista.eliminaFinal();

    cout << "\nDespues de borrar el primero y el ultimo:" << endl;
    cout << lista.toString() << endl;


    // Ejercicio 3: Lista de Búsqueda
    ListaBusqueda lista1;
    lista1.agregar(1);
    lista1.agregar(2);
    lista1.agregar(1);

    cout<<lista1.buscar(2)<<endl;
    cout<<lista1.contarApariciones(1)<<endl;
    lista1.eliminarPorValor(1);
    cout<<lista1.toString()<<endl;


    // Ejercicio 4: Lista de Caracteres
    ListaCaracteres letras;
    letras.agregarFinal('o');
    letras.agregarFinal('s');
    letras.agregarFinal('o');

    cout<<letras.obtenerCadena()<<endl;
    cout<<letras.esPalindromo()<<endl;
    letras.invertir();
    cout<<letras.obtenerCadena()<<endl;


    // Ejercicio 6: Lista Pila
    ListaPila pila;
    pila.push(10);
    pila.push(20);

    cout<<pila.top()<<endl;
    cout<<pila.pop()<<endl;
    cout<<pila.tamaño()<<endl;

    //ejerccio 7
    ListaCola cola;
    cola.encolar(10);
    cola.encolar(20);
    cola.encolar(30);

    cout<<"Frente: "<<cola.frente()<<endl;
    cout<<"Desencolar: "<<cola.desencolar()<<endl;
    cout<<"Nuevo frente: "<<cola.frente()<<endl;
    cout<<"Tamaño: "<<cola.tamaño()<<endl;

    cout<<endl;



    //ejericico 8

    ListaDuplicados listaDup;
    listaDup.agregar(1);
    listaDup.agregar(2);
    listaDup.agregar(1);
    listaDup.agregar(3);
    listaDup.agregar(2);

    cout<<"Tiene duplicados: "<<listaDup.tieneDuplicados()<<endl;
    cout<<"Unicos antes: "<<listaDup.contarUnicos()<<endl;

    listaDup.eliminarDuplicados();

    cout<<"Unicos despues: "<<listaDup.contarUnicos()<<endl;

    ListaDuplicados* unicos=listaDup.obtenerUnicos();
    delete unicos;


    //ejericio 10
    ListaOrdenada listaOrd;
    listaOrd.insertarOrdenado(5);
    listaOrd.insertarOrdenado(2);
    listaOrd.insertarOrdenado(8);
    listaOrd.insertarOrdenado(1);

    cout<<"Esta ordenada: "<<listaOrd.estaOrdenada()<<endl;

    listaOrd.ordenarDesc();
    cout<<"Ordenada descendente aplicada"<<endl;

    cout<<endl;

    // Ejerciucio 10
    ListaRango listaR;
    listaR.agregar(3);
    listaR.agregar(7);
    listaR.agregar(10);
    listaR.agregar(5);
    listaR.agregar(1);

    ListaRango* rango=listaR.obtenerRango(3,7);
    cout<<"Rango obtenido"<<endl;

    listaR.eliminarRango(3,7);
    cout<<"Rango eliminado"<<endl;

    listaR.insertarEnPosicion(1,99);
    cout<<"Insertado en posicion 1"<<endl;

    cout<<"Valor en posicion 1: "<<listaR.obtenerEnPosicion(1)<<endl;

    listaR.eliminarEnPosicion(1);
    cout<<"Eliminado en posicion 1"<<endl;

    delete rango;
    return 0;
}

