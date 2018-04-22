//
//  Reserva.h
//  Proyecto 3
//
//  Created by Alejandro Guevara on 4/21/18.
//  Copyright © 2018 Alejandro Guevara. All rights reserved.
//

#ifndef Reserva_h
#define Reserva_h
#include "Fecha.h"
#include <string>
class Reserva{
public:
    Reserva();
    Reserva(string, int, Fecha, int);
    Fecha calcularFinContrato();
    //Acceso
    string getClave();
    int getID();
    Fecha getFechaContrato();
    int getDuracion();
    //Modificacion
    void setClave(string);
    void setID(int);
    void setFechaContrato(Fecha);
    void setDuracion(int);
private:
    string claveServicio;
    int idCliente;
    Fecha fechaContrato;
    int diasDuracion;
};
Reserva::Reserva(){
    claveServicio="";
    idCliente=0;
    fechaContrato = Fecha(0,0,0);
    diasDuracion=0;
}
Reserva::Reserva(string clave, int idCliente, Fecha contrato, int dias){
    claveServicio=clave;
    this->idCliente=idCliente;
    fechaContrato = contrato;
    diasDuracion=dias;
}
//Acceso
string Reserva::getClave(){
    return claveServicio;
}
int Reserva::getID(){
    return idCliente;
}
Fecha Reserva::getFechaContrato(){
    return fechaContrato;
}
int Reserva::getDuracion(){
    return diasDuracion;
}
//Modificacion
void Reserva::setClave(string clave){
    claveServicio=clave;
}
void Reserva::setID(int idCliente){
    this->idCliente=idCliente;
}
void Reserva::setFechaContrato(Fecha contrato){
    fechaContrato = contrato;
}
void Reserva::setDuracion(int dias){
    diasDuracion=dias;
}
Fecha Reserva::calcularFinContrato(){
    bool adicional=false, bisiesto=false;
    Fecha fin;
    int d=fechaContrato.getDia(), m=fechaContrato.getMes(), a=fechaContrato.getAnio();
    
    if (a%4==0)
        bisiesto=true;
    
    if (m == 1 || 3 || 5 || 7 || 8 || 10 || 12)
        adicional = true;
    d+=diasDuracion;
    
    
    if (bisiesto && m==2 && d>29){
        m++;
        d-=29;
    }
    if (m==2 && d>28){
        m++;
        d-=28;
    }
    if (adicional && d>31){
        m++;
        d-=31;
    }
    if (d>30){
        m++;
        d-= 30;
    }
    if (m>12){
        a++;
        m-=12;
    }
    fin = Fecha(d, m, a);
    return fin;
    
}


#endif /* Reserva_h */
