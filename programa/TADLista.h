#include <iostream> 
#define INCREMENTO 4 
#include "clasepalabra.h"
#ifndef _LISTA
#define _LISTA
using namespace std; 
class lista { 
 Clientes *elementos; // elementos de la lista 
 int n; // nº de elementos que tiene la lista 
 int Tama; // tamaño de la tabla en cada momento
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
 volcarfichero();
 cargarfichero();
}; 
#endif
