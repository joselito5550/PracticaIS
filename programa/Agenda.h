/*
 * Agenda.h
 *
 *  Created on: 13/12/2014
 *      Author: jose
 */

#ifndef AGENDA_H_
#define AGENDA_H_
#include <list>
#include <iostream>
#include "Cliente.h"
#include "Fichero.h"
using namespace std;
class Agenda {
private:
	list<Cliente> agenda;
	Fichero f;
public:
	Agenda();
	virtual ~Agenda();								//no tiene que ser virtual creo
	bool esvacia();
	list<Cliente> getClientes();
	int longitud();
	bool pertenece(Cliente &e);
	void insertarCliente(list<Cliente>::iterator, Cliente &e);		/*hay que pasarlo por referencia?*/
	bool eliminar(list<Cliente>::iterator it);
	Cliente buscar(Cliente &e);
	bool modificar(list<Cliente>::iterator, Cliente &e);
	bool ordenar();
	list<Cliente>::iterator buscarpos(Cliente &e);
	list<Cliente> getFavoritos();
	list<Cliente> getallApellido(string apellido);
	void guardar(list<Cliente> agenda);		//Se llama a guardar de Fichero
	void cargar();							//Se llama a cargar de Fichero


};

#endif /* AGENDA_H_ */
