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


    Servicios.close();
    return 0;
}
