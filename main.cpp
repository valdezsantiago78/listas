#include <iostream>
#include "lista.h"
#include "helper.h"
#include "matriz.h"

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
        cout << "6. Verifica si un entero existe en la lista." << endl;
        cout << "7. Verifica si la lista es par (Recursivamente)." << endl;
        cout << "8. Crea matriz vacia." << endl;
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
                Succes("Lista creada!.");
            }
        }
        else if(opcion==2)
        {
            int numero;
            cout << "Ingrese un numero : ";
            cin >> numero;

            l = InsertarElemento(l, numero);

            Succes("Dato ingresado.");
        
        }
        else if(opcion==3)
        {
            if(IsEmpty(l))
            {
                Succes("La lista esta vacia.");
            }
            else
            {
                Error("La lista tiene datos");
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
                Error("Crea la lista primero.");
            }
        }
        else if(opcion==5)
        {
            if(creado == true)
            {
                
               lista * primero = l;

               cout << "Cola de la lista sin el primer elemento => " << endl; 
               
               while(Tail(l)!=NULL)
               {
                l = Tail(l);
                
                cout << "Dato> "<< l->dato << endl;

               }

               l = primero;
            }
            else
            {
                Error("Crea la lista primero.");
            }
        }
        else if(opcion==6)
        {
            if(creado == true)
            {
                int x;

                cout << "Ingrese un numero para saber si se encuentra en la lista: " << endl;
                cin >> x;
                
                if(IsElement(x, l))
                {
                    Succes("Verdadero, la lista tiene ese elemento.");
                }
                else
                {
                    Error("Falso, la lista NO tiene ese elemento.");
                };
            }
            else
            {
                Error("Crea la lista primero.");
            }
        }
        else if(opcion==7)
        {
            if(creado == true)
            {
                if(EsPar_rec(l))
                {
                    Succes("La lista es PAR");
                }
                else
                {
                     Error("La lista es IMPAR");
                }
            }
            else
            {
                Error("Lista no creada");
            }
        }
        else if(opcion==8)
        {
            cout << "---------------------" << endl;
            cout << ">| MENU DE TABLAS |< " << endl;
            cout << "---------------------" << endl;

            
            cout << "1. Crear Tabla." << endl;
            cout << "2. Insertar dato ." << endl;
            
            bool creado = false;
            int opcion;
            
            cin >> opcion;

            if(opcion == 1)
            {
                
                char nomb;
                bool creado = true;
                string columnas;
                string valores;
                tabla t;
                
                cout << "Nombre de la tabla > " << endl;
                cin >> nomb;

                cout << "Ingrese las columnas, entre (x,x,x) > " << endl;
                cin >> columnas;
                
                cout << "Ahora los valores, entre (x,x,x) > " << endl;
                cin >> valores;

                // t = crearTabla(nomb);

                cout << " Nombre => " << t << endl;

                Succes("tabla creada!");
            }
            else if(opcion == 2)
            {
                if(creado)
                {
                    cout << "Ingrese el nombre de la tabla > "; 
                }
                else
                {
                    Error("Falta crear la tabla");
                }
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
            Error("ESA OPCION NO EXISTE");
        } 
    }
}

int main(){
    
    std::cout << "Programa de Listas - Estructuras de datos y algoritmos - Santiago Valdez." << std::endl;
    
    Menu();
    
    return 1;
}



