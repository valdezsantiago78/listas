#ifndef LISTA_H
#define LISTA_H

struct lista{
    int dato;
    lista * siguiente;
};

lista * Crear();
lista * InsertarElemento(lista * l, int dato);
int Head(lista * l);

#endif