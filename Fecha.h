//
//  Fecha.h
//  Proyecto 3
//
//  Created by Alejandro Guevara on 4/21/18.
//  Copyright © 2018 Alejandro Guevara. All rights reserved.
//

#ifndef Fecha_h
#define Fecha_h
using namespace std;
class Fecha{
public:
    Fecha();
    Fecha(int d,int m,int a);
    //Acceso
    int getDia();
    int getMes();
    int getAnio();
    //Modificacion
    void setDia(int d);
    void setMes(int m);
    void setAnio(int a);
    //Sobrecarga
    bool operator >= (Fecha dos);
    bool operator <= (Fecha dos);
    bool operator == (Fecha dos);
    Fecha operator + (int dias);
    friend ostream& operator<< (ostream &os, Fecha uno);
    friend istream& operator>> (istream &is, Fecha &uno);
private:
    int dia, mes, anio;
};
Fecha::Fecha(){
    dia=0;
    mes=0;
    anio=0;
}
Fecha::Fecha(int d,int m,int a){
    dia=d;
    mes=m;
    anio=a;
}
int Fecha::getDia(){
    return dia;
}
int Fecha::getMes(){
    return mes;
}
int Fecha::getAnio(){
    return anio;
}
//Modificacion
void Fecha::setDia(int d){
    dia=d;
}
void Fecha::setMes(int m){
    mes=m;
}
void Fecha::setAnio(int a){
    anio=a;
}
//Sobrecarga
bool Fecha::operator >= (Fecha dos){
    bool flag;
    if (anio > dos.anio)
        flag = true;
    if (anio < dos.anio)
        flag = false;
    if (anio == dos.anio && mes > dos.mes)
        flag = true;
    if (anio == dos.anio && mes < dos.mes)
        flag = false;
    if (anio == dos.anio && mes == dos.mes && dia >= dos.dia)
        flag = true;
    if (anio == dos.anio && mes == dos.mes && dia < dos.dia)
        flag = false;
    return flag;
}
bool Fecha::operator <= (Fecha dos){
    bool flag;
    if (anio < dos.anio)
        flag = true;
    if (anio > dos.anio)
        flag = false;
    if (anio == dos.anio && mes < dos.mes)
        flag = true;
    if (anio == dos.anio && mes > dos.mes)
        flag = false;
    if (anio == dos.anio && mes == dos.mes && dia <= dos.dia)
        flag = true;
    if (anio == dos.anio && mes == dos.mes && dia > dos.dia)
        flag = false;
    return flag;
}
bool Fecha::operator == (Fecha dos){
    if (dia == dos.dia && mes == dos.mes && anio == dos.anio)
        return true;
    else return false;
}
Fecha Fecha::operator + (int dias){
    bool adicional=false, bisiesto=false;
    Fecha suma;
    
    if (anio%4==0)
        bisiesto=true;
    
    if (mes == 1 || 3 || 5 || 7 || 8 || 10 || 12)
        adicional = true;
    dia+=dias;
    
    
    if (bisiesto && mes==2 && dia>29){
        mes++;
        dia-=29;
    }
    if (mes==2 && dia>28){
        mes++;
        dia-=28;
    }
    if (adicional && dia>31){
        mes++;
        dia-=31;
    }
    if (dia>30){
        mes++;
        dia-= 30;
    }
    if (mes>12){
        anio++;
        mes-=12;
    }
    suma = Fecha(dia, mes, anio);
    return suma;
}
ostream& operator<< (ostream &os, Fecha uno){
    os << uno.dia << "/" << uno.mes << "/" << uno.anio << endl;
    return os;
}
istream& operator>> (istream &is, Fecha &uno){
    is >> uno.dia >> uno.mes >> uno.anio;
    return is;
}
#endif /* Fecha_h */
