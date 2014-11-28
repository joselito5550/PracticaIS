#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#ifndef _CLIENTES
#define _CLIENTES
using namespace std;

class Clientes{

  //parte privada: donde iran todos los datos de la clase.

  private:

    string DNI, nombre, apellido1, apellido2,numero,fijo, direccion, anotaciones,twitter, facebook;
    int favorito;

  //Parte publica, observadores y modificadores;

  public:

    //contructor



    //observadores
    Clientes();
    string getDNI()const;
    string getNombre()const;
    string getApellido1()const;
    string getApellido2()const;
    string getDireccion()const;
    string getAnotacion()const;
    string getTwitter()const;
    string getFacebook()const;
    string getApellidosyNombre()const;
    string getFijo()const;
    string getNumero()const;
    int getFavorito()const;


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
    void setFijo(string f);
    void setNumero(string n);

};
#endif
