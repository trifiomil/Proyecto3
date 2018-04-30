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
#include<stdio.h>
#include<stdlib.h>
#include "Reserva.h"
#include "Autos.h"
#include "Aviones.h"

using namespace std;
int main() {
//OBJETOS
ifstream Servicios;
ifstream Reservaciones;
Servicio *Serv[6];
Reserva Reserva[20];
//VARIABLES
//reservacion
string clave;
int idCliente;
//fechas
int dia,mes,ano;
//dias duracion
int dias;
//servicio
char Tipo;
int cantidPersonas,adicional;
double CostoXdia;
string descripcion;
bool chofer,blindado;
//contadores para los dso archivos de texto
int contReservaciones = 0, contServicios = 0;


Reservaciones.open("Reserva.txt");
Servicios.open("Servicio.txt");
if(Servicios.is_open())
{
    cout << "se abrio "<< endl;
}
    while(Reservaciones >>clave>>idCliente>>dia>>mes>>ano>>dias)
    {
        //convertir a itnregro
        Fecha FechaCont(dia,mes,ano);
        Reserva[contReservaciones].setClave(clave);
        Reserva[contReservaciones].setID(idCliente);
        Reserva[contReservaciones].setFechaContrato(FechaCont);
        Reserva[contReservaciones].setDuracion(dias);

        contReservaciones++;
    }
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

        } while (op!=7);






}

    Servicios.close();
    return 0;
}
