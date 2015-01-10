/*
 * Fichero.h
 *
 *  Created on: 13/12/2014
 *      Author: Jose Marquez
 */

#ifndef FICHERO_H_
#define FICHERO_H_
#include <iostream>
#include <fstream>
#include <list>
#include "Cliente.h"
#include "Agenda.h"
#include "GestorFicheros.h"
using namespace std;
class Fichero: public GestorFicheros{

public:
	Fichero();
	~Fichero();
	void guardar_agenda(list<Cliente> agenda,string nombre);
	void guardar_agendahtml(list<Cliente> agenda,string nombre);
	list<Cliente> cargar_agenda(string nombre);

};

#endif /* FICHERO_H_ */
