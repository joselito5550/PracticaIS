/*
 * Menu.cpp
 *
 *  Created on: 13/12/2014
 *      Author: jose
 */

#include "Menu.h"

Menu::Menu() {
	// TODO Auto-generated constructor stub

}

Menu::~Menu() {
	// TODO Auto-generated destructor stub
}

void Menu::visualizar_agenda(list<Cliente> agenda) {	//que mostramos? apellidos y numero de telefono?
	list<Cliente>::iterator it;
	for(it=agenda.begin();it!=agenda.end();it++){
		visualizar_cliente((*it));
	}
}

void Menu::visualizar_cliente(Cliente c) {
	cout<<"\nNombre:\t"<<c.getNombre();
	cout<<"\nApellidos:\t"<<c.getApellido1()<<" "<<c.getApellido2();
	cout<<"\nNumero:\t"<<c.getNumero();
	cout<<"\nDNI:\t"<<c.getDni();
	if(c.getFavorito()==1) cout<<"-----------------------FAVORITO-----------------------";

}
