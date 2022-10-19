#ifndef LISTA_H
#define LISTA_H

struct lista{
    int dato;
    lista * siguiente;
};

lista * Crear();

lista * InsertarElemento(lista * l, int dato);

int Head(lista * l);

bool IsEmpty(lista * l);

lista * Tail(lista * l);

bool IsElement(int x, lista * l);
// Retorna true si x pertenece a l, false en caso contrario.

bool EsPar_rec(lista * l);
//Realiza una funcion recusiva para saber si es par o no.

#endif