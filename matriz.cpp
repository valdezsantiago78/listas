#include <iostream>
#include "helper.h"
#include "matriz.h"

using namespace std;

struct nodo_tabla
{
    char * nombre;
    tabla siguiente;
    cabezal primer_cabezal;
};

struct nodo_cabezal
{
    char * nombre;
    cabezal siguiente;
    dato primer_dato;
};

struct nodo_dato
{
    string valor;
    int tupla;
    dato siguiente;
};

tabla crearTabla(char * nombre)
{
    nodo_tabla * t = new(nodo_tabla);
    t->nombre = nombre;

    return t;
};
