#include <iostream>
#include "lista.h"

using namespace std;

void Menu()
{
    bool salir = true;
    bool creado = false;

    while(salir)
    {
        int opcion;
        lista * l;
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
            if(creado == true)
            {
                cout << "La lista ya se fue creada." << endl;
            }
            else
            {
                l = Crear();
                creado = true;
                cout << "Lista creada!." << endl;
            }
        }
        else if(opcion==2)
        {
            int numero;
            cout << "Ingrese un numero : ";
            cin >> numero;

            l = InsertarElemento(l, numero);

            cout << "Primer dato ingresado => " << l->dato << endl;
        
        }
        else if(opcion==3)
        {
            if(IsEmpty(l))
            {
                cout << "La lista esta vacia."<< endl;
            }
            else
            {
                cout << "La lista tiene datos."<< endl;
            }
        }
        else if(opcion==4)
        {
            if(creado == true)
            {
                cout << "Primer dato de la lista => ";
                cout << Head(l) << endl;
            }
            else
            {
                std::cout << "Crea la lista primero." << std::endl;
            }
        }
        else if(opcion==5)
        {
            if(creado == true)
            {
                cout << "Tail de la lista => ";
                
                while(Head(l)!=NULL)
                {
                    if(IsEmpty(Tail(l)))
                    {
                        cout << "Fin de la lista" << endl;
                    }else
                    {
                        std::cout << " Dato -> " << l->dato << std::endl;
                        l = l->siguiente;
                    }
                } 

            }
            else
            {
                std::cout << "Crea la lista primero." << std::endl;
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



