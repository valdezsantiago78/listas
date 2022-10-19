#ifndef HELPER_H
#define HELPER_H

#define RED "\e[0;31m"
#define NC "\e[0m"
#define GRN "\e[0;32m"

#include <iostream>

using namespace std;

// Muestra el error en color rojo, se le debe pasar como parametro el mensaje que es un string.
void Error(string msg);

// Muestra el error en color verde, se le debe pasar como parametro el mensaje que es un string.
void Succes(string msg);

// Hace una pausa y limpia la pantalla, se le pasa por parametros los segundos de espera.
void Pause(int seconds);


#endif