#include <iostream>
#include "Clientes.h"
#include <string.h>
#define INCREMENTO 4
#ifndef _LISTA
#define _LISTA
using namespace std;
class lista {
 Clientes *elementos; // elementos de la lista
 int n; // n� de elementos que tiene la lista
 int Tama; // tama�o de la tabla en cada momento
 fstream f;
 public:
 lista(); // constructor de la clase
 ~lista(); // destructor de la clase
 bool esvacia();
 int longitud();
 void anadirIzq(Clientes& e);
 void anadirDch(Clientes& e);
 void eliminarIzq();
 void eliminarDch();
 bool pertenece(Palabra e);
 void insertar(int i, Clientes& e);
 void eliminar(int i);
 void modificar(int i, Clientes& e);
 Clientes& observar(int i);
 int posicion(Clientes& e);
 void volcarfichero();
 void cargarfichero();
 void posabc();
};
#endif
