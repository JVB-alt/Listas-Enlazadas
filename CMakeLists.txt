cmake_minimum_required(VERSION 4.1)
project(ListasEnlazadasTuto)

set(CMAKE_CXX_STANDARD 20)

add_executable(ListasEnlazadasTuto main.cpp
        Nodo.cpp
        Nodo.h
        ListaEnteros.cpp
        ListaEnteros.h
        ListaBusqueda.cpp
        ListaBusqueda.h
        ListaCaracteres.cpp
        ListaCaracteres.h
        ListaReales.cpp
        ListaReales.h
        ListaPila.cpp
        ListaPila.h
        ListaCola.cpp
        ListaCola.h
        ListaDuplicados.cpp
        ListaDuplicados.h
        ListaOrdenada.cpp
        ListaOrdenada.h
        ListaRango.cpp
        ListaRango.h)
