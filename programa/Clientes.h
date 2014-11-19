#include <iostream>
#include <string.h>
#ifndef _Clientes
#define _Clientes
using namespace std;

class Clientes{

  //parte privada: donde iran todos los datos de la clase.

  private:

    string DNI_, nombre_, apellido1_, apellido2_,numero_,fijo_, direccion_, anotaciones_,twitter_, facebook_;
    int favorito_;

  //Parte publica, observadores y modificadores;

  public:

    //contructor

    Clientes(string DNI, string nombre="", string apellido1="",string apellido2="", string direccion="", string anotaciones="", string twitter="", string facebook="", int favorito=0);


    //observadores

    string getDNI();
    string getNombre();
    string getApellido1();
    string getApellido2();
    string getDireccion();
    string getAnotacion();
    string getTwitter();
    string getFacebook();
    string getApellidosyNombre();
    int getFavorito();


    //modificadores

      void setDNI(string num);

    void setNombre(string name);

    void setApellido1(string surname1);

    void setApellido2(string surname2);

    void setDireccion(string direction);

    void setAnotaciones(string anotation);

    void setTwitter(string tuita);

    void setFacebook(string feibu);
    //haria falta diferenciar entre si ponemos 0 o 1 aqui? este metodo solo lo vamos a utilizar los desarrolladores no el administrativo
    void setFavorito(int favorite);

};
