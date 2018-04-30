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
 do {
        cout << "Que desea hacer?" << endl;
        cout << "1. Consultar la lista de Servicios" << endl;
        cout << "2. Consultar la lista de reservaciones" << endl;
        cout << "3. Consultar las reservas de un servicio dado" << endl;
        cout << "4. Consulta las reservas de una fecha específica" << endl;
        cout << "5. Hacer una reservación" << endl;
        cout << "7. Terminar" << endl;
        cin >> op;
        switch (op)
        {
            case 1:
            {
                muestraServ(serv[], 6)

            }
                break;
            case 2:
            {

            }
                break;
            case 3:
            {
            }
                break;
            case 4:
            {

            }
                break;
            case 5:
            {

            }
            break;
            case 6:
            {

            }
            break;
    
    Servicios.close();
    return 0;
}
