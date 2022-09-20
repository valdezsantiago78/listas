#include "lista.h"
#include <iostream>

lista * Crear()
{
    return NULL;
};

lista * InsertarElemento(lista * l, int dato)
{
    lista * primero;
    lista * aux = new(lista);
    aux->dato = dato;

    if(l==NULL)
    {
        l = aux;
        aux->siguiente = NULL;
        return l;
    }
    else if(l->siguiente==NULL)
    {
        l->siguiente = aux;
        aux->siguiente == NULL;
        return l;
    }
    else
    {
        primero = l;

        while(l->siguiente!=NULL)
        {
            l = l->siguiente;
        }
        l->siguiente = aux;
        aux->siguiente == NULL;

        return primero;
    }
};

int Head(lista * l)
{
    return l->dato;
}
