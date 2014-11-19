//Funcion:Clase Cliente.
//Realizado por:Omar Sotillo Franco.
//En colaboración:(Los que retoquen algo);
//Para: Hacer todas las funciones de forma unificada.
//Requiere: Nada.
//Devuelve: Una clase.
//Detalles: Clase cliente y parte pública y privada con modificadores y observadores.
#include "Clientes.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

    string Clientes::getDNI()const {
      return DNI;
    };
    string Clientes::getNombre()const {
      return nombre;
    };
    string Clientes::getApellido1()const {
      return apellido1;
    };
    string Clientes::getApellido2()const {
      return apellido2;
    };
    string Clientes::getDireccion()const {
      return direccion;
    };
    string Clientes::getAnotacion()const {
      return anotaciones;
    };
    string Clientes::getTwitter()const {
      return twitter;
    };
    string Clientes::getFacebook()const {
      return facebook;
    };
    string Clientes::getApellidosyNombre()const{

    };
    int Clientes::getFavorito()const{
      return favorito;
    };

    string Clientes::getNumero() const{
      return numero;
    };

    string Clientes::getFijo() const{
      return fijo;
    };


    //modificadores

      void Clientes::setDNI(string num){
      if(num.length()==9){
        DNI=num;
      } else {
        cout<<"Error, longitud del DNI no valida"<<endl;
      }
    };

    void Clientes::setNombre(string name){
      if(name.length()>0 && name.length()<=40){
        nombre=name;
      } else {
        cout<<"Error"<<endl;
      }
    };

    void Clientes::setApellido1(string surname1){
      if(surname1.length()>0 && surname1.length()<=40){
        apellido1=surname1;
      } else {
        cout<<"Error"<<endl;
      }
    };

    void Clientes::setApellido2(string surname2){
      if(surname2.length()>0 && surname2.length()<=40){
        apellido2=surname2;
      } else {
        cout<<"Error"<<endl;
      }
    };

    void Clientes::setDireccion(string direction){
     if(direction.length()>0 && direction.length()<=40){
        direccion=direction;
      } else {
        cout<<"Error"<<endl;
      }
    };

    void Clientes::setAnotaciones(string anotation){
      anotaciones=anotation;
    };

    void Clientes::setTwitter(string tuita){
      if(tuita.length()>=2 && tuita.length()<=30) {
        twitter=tuita;
      } else {
        cout<<"Error"<<endl;
      }
    };

    void Clientes::setFacebook(string feibu){
      if(feibu.length()>=3 && feibu.length()<=40){
        facebook=feibu;
      } else {
        cout<<"Error"<<endl;
      }
    };

    void Clientes::setNumero(string n){
      if(n.length()==9) {
        numero=n;
      } else {
        cout<<"Error el numero debe contener 9 caracteres"<<endl;
      }
    };

    void Clientes::setFijo(string f){
      if(f.length()==9){
        fijo=f;
      } else {
        cout<<"Error el numero debe contener 9 caracteres"<<endl;
      }
    };

    //haria falta diferenciar entre si ponemos 0 o 1 aqui? este metodo solo lo vamos a utilizar los desarrolladores no el administrativo
    void Clientes::setFavorito(int favorite){
      if(favorite==0 || favorite ==1) {
        favorito=favorite;
      }
       else {
        cout<<"Error, favorite debe tomar valor 0 (no favorito) o valor 1 (favorito)"<<endl;
      }
    };
