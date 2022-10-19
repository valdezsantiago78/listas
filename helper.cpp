#include "helper.h"
#include <iostream>
#include <unistd.h>

using namespace std;

void Error(string msg)
{
    cout << RED ""+msg+"" NC << endl;
}

void Succes(string msg)
{
     cout << GRN ""+msg+"" NC << endl;
} 

void Pause(int seconds)
{
     sleep(seconds);
     system("clear");
} 
