/*
 * Menu.cpp
 *
 *  Created on: 13/12/2014
 *      Author: Jose Marquez
 */

//Incluimso la libreria menu.h

#include "Menu.h"

Menu::Menu() {

	// TODO Auto-generated constructor stub	eclipse

}

Menu::~Menu() {

	// TODO Auto-generated destructor stub eclipse
}

//Visualizar agenda

void Menu::visualizar_agenda(list<Cliente> agenda) {

	list<Cliente>::iterator it;
	for(it=agenda.begin();it!=agenda.end();it++){
		visualizar_cliente((*it));
	}
	char continuar;
	cout<<"\nIntroduzca un caracter para continuar";
	cin>>continuar;
	system("clear");
}

//Visualizar cliente solitario usa clase menu

void Menu::visualizar_cliente(Cliente c) {

	 cout<<"\nNombre:\t\t"<<c.getNombre();
	 cout<<"\nApellidos:\t"<<c.getApellido1()<<" "<<c.getApellido2();
	 cout<<"\nDNI:\t\t"<<c.getDni();
	 cout<<"\nNumero:\t\t"<<c.getNumero();
	 cout<<"\nNumero fijo:\t"<<c.getFijo();
	 cout<<"\nDireccion:\t"<<c.getDireccion();
	 cout<<"\nAnotaciones:\t"<<c.getAnotaciones();
	 cout<<"\nTwitter:\t"<<c.getTwitter();
	 cout<<"\nFacebook:\t"<<c.getFacebook();
	 if(c.getFavorito()==1) cout<<"\n--------FAVORITO---------";
	 cout<<"\n\n\n\n\n";

}
