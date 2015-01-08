/*
 * Fichero.h
 *
 *  Created on: 13/12/2014
 *      Author: jose
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
	void guardar_agenda(list<Cliente> agenda);
	void cargar_agenda();

};

#endif /* FICHERO_H_ */
