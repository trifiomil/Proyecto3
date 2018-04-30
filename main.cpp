//
//  main.cpp
//  Proyecto 3
//
//  Created by Alejandro Guevara on 4/21/18.
//  Copyright © 2018 Alejandro Guevara. All rights reserved.
//

#include <iostream>
#include<fstream>
#include<string>
#include "Reserva.h"
#include "Autos.h"
#include "Aviones.h"

using namespace std;
int main() {

ifstream Servicios;
ifstream Reservaciones;
string a,b,c,d,e,f,g,h;

Servicios.open("Servicio.txt");
if(Servicios.is_open())
{
    cout << "se abrio "<< endl;
}else
    cout << "no se abrio" << endl;

   Servicio *Serv[6];
   Reserva Reserva[20];

    Servicios.close();
    return 0;
}
