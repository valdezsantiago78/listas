#include <iostream>
#include "lista.h"

using namespace std;

void Menu()
{
    bool salir = true;
    while(salir)
    {
        int opcion;
        lista * l = new(lista);
        cout << "---------------------------------------------------------------------" << endl;
        cout << "---------------------------------------------------------------------" << endl;
        cout << ">>> INGRESE UNA OPCION <<<" << endl; 
        cout << "1. Crear lista." << endl;
        cout << "2. Inserta elemento." << endl;
        cout << "3. Esta vacia?." << endl;
        cout << "4. Retorna el head." << endl;
        cout << "5. Retorna el tail." << endl;
        cout << "0. Salir." << endl;
        
        cin >> opcion;
        if(opcion == 1)
        {
            l = Crear();
            cout << "Lista creada" << endl;
        }
        else if(opcion==2)
        {
            int numero;
            cout << "Ingrese un numero : ";
            cin >> numero;

            // InsertarElemento(l, numero);
        }
        else if(opcion==4)
        {
            if(l!=NULL)
            {
                cout << Head(l);
            }
        }
        else if(opcion==0)
        {
            salir = false;
        }
        else
        {
            cout << "Usted eligio la opcion: ";
            cout << opcion << endl;
            cout << "----> ESA OPCION NO EXISTE"<< endl;
        } 
    }
}

int main(){
    
    std::cout << "Programa de Listas - Estructuras de datos y algoritmos - Santiago Valdez." << std::endl;
    
    Menu();
    
    return 1;
}



