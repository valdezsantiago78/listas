#ifndef LISTA_H
#define LISTA_H

struct lista{
    int dato;
    lista * siguiente;
};

lista * Crear();

lista * InsertarElemento(lista * l, int dato);

lista * Head(lista * l);

bool IsEmpty(lista * l);

lista * Tail(lista * l);

#endif