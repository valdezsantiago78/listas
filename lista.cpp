#include "lista.h"
#include <iostream>
#include "helper.h"

lista * Crear()
{
    return NULL;
};

lista * InsertarElemento(lista * l, int dato)
{
    
    lista * aux = new(lista);
    aux->dato = dato;
    
    if(l==NULL)
    {
        aux->siguiente = NULL;
        l = aux;

        return l;
    }
    else
    {
        lista * primero = l;
        lista * actual = l;

        while(actual->siguiente!=NULL)
        {   
            actual = actual->siguiente;
        }

        actual->siguiente = aux;
        aux->siguiente = NULL;
        
        return primero;
    }

};

int Head(lista * l)
{
    return l->dato;
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

bool IsElement(int x, lista * l)
{
    lista * actual = l;
    
    while(actual->siguiente!=NULL && actual->dato != x)
    {
            actual = actual->siguiente;        
    }

    if(actual->dato == x)
    {
        return true;
    }
    else
    {
        return false;
    }
};

bool EsPar_rec(lista * l)
{
    if(l==NULL)
    {
        return true;
    }
    else if(EsPar_rec(l->siguiente))
    {
        return false;
    }
    else
    {
        return true;
    }
};
