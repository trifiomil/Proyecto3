//
//  Autos.h
//  Proyecto 3
//
//  Created by Alejandro Guevara on 4/21/18.
//  Copyright © 2018 Alejandro Guevara. All rights reserved.
//

#ifndef Autos_h
#define Autos_h
#include "Servicio.h"
using namespace std;
class Autos: public Servicio{
public:
    Autos();
    Autos(string clave, char tipo, double costo, string desc, bool chof, bool blind);
    //Acceso
    bool getChofer();
    bool getBlindado();
    //Modificacion
    void setChofer(bool chof);
    void setBlindado(bool blind);

    double calcularCosto(int diasDuracion);
    void muestra();
private:
    bool chofer, blindado;
};

Autos::Autos():Servicio(){
}
Autos::Autos(string clave, char tipo, double costo, string desc, bool chof, bool blind):Servicio(clave, tipo, costo, desc){
    chofer=chof;
    blindado=blind;
}
//Acceso
bool Autos::getChofer(){
    return chofer;
}
bool Autos::getBlindado(){
    return blindado;
}
//Modificacion
void Autos::setChofer(bool chof){
    chofer=chof;
}
void Autos::setBlindado(bool blind){
    blindado=blind;
}
double Autos::calcularCosto(int diasDuracion)
{
    // se regresa el costo de cada una de las clases virtuales y su tipo o blindaje
    double costo = 0;
    if(blindado)
    {
        if(tipo == 'M' )
            costo = 600 * diasDuracion;
        else if(tipo == 'S')
            costo = 800 * diasDuracion;
        else if( tipo == 'T')
            costo = 400 * diasDuracion;
        costo = costo * .4 + costo;

    }else
    {
        if(tipo == 'M' )
            costo = 600 * diasDuracion;
        else if(tipo == 'S')
            costo = 800 * diasDuracion;
        else if( tipo == 'T')
            costo = 400 * diasDuracion;
    }
    return costo;


}

void Autos::muestra(){
    cout << "Clave: " <<getClave() << endl;
    cout << "Tipo: " << getTipo() << endl;
    cout << "Costo por dia: " << getCostoXDia() << endl;
    cout << "Descripcion: " << getDescripcion() << endl;
    if (blindado)
        cout << "Esta blindado" << endl;
    else
        cout << "No esta blindado" << endl;
    if (chofer)
        cout << "Tiene chofer" << endl;
    else cout << "No tiene chofer" << endl;

}

#endif /* Autos_h */
