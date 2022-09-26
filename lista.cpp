#include "lista.h"
#include <iostream>

lista * Crear()
{
    return NULL;
};

lista * InsertarElemento(lista * l, int dato)
{
    
    lista * aux = new(lista);
    
    if(l==NULL)
    {
        aux->dato = dato;
        aux->siguiente = NULL;
        l = aux;
    }
    else if(l->siguiente==NULL)
    {
        aux->dato = dato;
        aux->siguiente = NULL;
        l->siguiente = aux;
    }
    else
    {
        lista * primero = l;
        while(l->siguiente!=NULL)
        {   
            if(l->siguiente==NULL)
            {
                aux->dato = dato;
                aux->siguiente = NULL;
                l->siguiente = aux;
            }
            else
            {
                l = l->siguiente;
            }
        }

        return primero;
    }

    return l;

};

lista * Head(lista * l)
{
    return l;
}

bool IsEmpty(lista * l)
{
    if(l == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

lista * Tail(lista * l)
{
    return l->siguiente;
}