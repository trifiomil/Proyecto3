//
//  Servicio.h
//  Proyecto 3
//
//  Created by Alejandro Guevara on 4/21/18.
//  Copyright © 2018 Alejandro Guevara. All rights reserved.
//

#ifndef Servicio_h
#define Servicio_h
#include "Reserva.h"
#include <string>

class Servicio{
public:
    Servicio();
    Servicio(string clave, char tipo, double costo, string desc);
    //Acceso
    string getClave();
    char getTipo();
    double getCostoXDia();
    string getDescripcion();
    //Modificacion
    void setClave(string clave);
    void setTipo(char tipo);
    void setCostoXDia(double costo);
    void setDescripcion(string desc);
    
    virtual double calculaCosto(int diasDuracion)=0;
    virtual void muestra()=0;
protected:
    string clave, descripcion;
    char tipo;
    double costoXDia;
};
Servicio::Servicio(){
    clave="";
    tipo=' ';
    costoXDia=0.0;
    descripcion="";
}
Servicio::Servicio(string clave, char tipo, double costo, string desc){
    this->clave=clave;
    this->tipo=tipo;
    costoXDia=costo;
    descripcion=desc;
}
//Acceso
string Servicio::getClave(){
    return clave;
}
char Servicio::getTipo(){
    return tipo;
}
double Servicio::getCostoXDia(){
    return costoXDia;
}
string Servicio::getDescripcion(){
    return descripcion;
}
//Modificacion
void Servicio::setClave(string clave){
    this->clave=clave;
}
void Servicio::setTipo(char tipo){
    this->tipo=tipo;
}
void Servicio::setCostoXDia(double costo){
    costoXDia=costo;
}
void Servicio::setDescripcion(string desc){
    descripcion=desc;
}
#endif /* Servicio_h */
