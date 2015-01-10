/*
 * Fichero.cpp
 *
 *  Created on: 13/12/2014
 *      Author: Jose Marquez
 */

//Librerias

#include "Fichero.h"
#include <cstdlib>
#include <iostream>
#include <list>
#include <string>
#include <fstream>
#include "Cliente.h"


 using namespace std;


Fichero::Fichero() {

	// TODO Auto-generated constructor stub

}

Fichero::~Fichero() {

	// TODO Auto-generated destructor stub
}

//Guardar agenda con nombre . Usada para tambien guardar copia de seguridad. Jose Marquez

void Fichero::guardar_agenda(list<Cliente> agenda, string nombre) {

		fstream f(nombre.c_str(),ios::out|ios::trunc);
		//string nombreFichero="Contactos.txt";
		char fav='n';
		f.clear();
	    //f.open(nombreFichero.c_str());
	    list<Cliente>::iterator it= agenda.begin();
	    for(int i=0;i<agenda.size();i++,it++){
	    	if((*it).getFavorito()==1)
	    		fav='s';
	    	else fav='n';
	    	f<<(*it).getNombre()+","+(*it).getApellido1()+","+(*it).getApellido2()+","+(*it).getDni()+","+(*it).getNumero()+","+(*it).getFijo()+","+(*it).getDireccion()+","+(*it).getAnotaciones()+","+(*it).getTwitter()+","+(*it).getFacebook()+","+fav+"\n";

	    }
	    f.close();
}

//cargar agenda o copia de seguridad. Omar Sotillo

list<Cliente> Fichero::cargar_agenda(string nombre) {

	ifstream carga;

	char line[50];


	Cliente c;

	list <Cliente> clientes;

	carga.open(nombre.c_str());

	if(carga.is_open()){

				cout<<"Fichero abierto"<<endl;

				while((carga.getline(line, 50,','))){



					c.setNombre(line);

					carga.getline(line, 50,',');
					c.setApellido1(line);

					carga.getline(line, 50,',');
					c.setApellido2(line);

					carga.getline(line, 50,',');
					c.setDni(line);

					carga.getline(line, 50,',');
					c.setNumero(line);

					carga.getline(line, 50,',');
					c.setFijo(line);

					carga.getline(line, 50,',');
					c.setDireccion(line);

					carga.getline(line, 50,',');
					c.setAnotaciones(line);

					carga.getline(line, 50,',');
					c.setTwitter(line);

					carga.getline(line, 50,',');
					c.setFacebook(line);

					carga.getline(line, 50,'\n');
					c.setFavorito(atoi(line));


					(clientes).push_back(c);

				}

			}else{

				cout<<"El fichero Contactos.txt  no pudo abrirse."<<"\n";
			}

			carga.close();
      return clientes;

}

//Guardar agenda para mostrarla usando Polymer . Para ellos creamos un .json y con el html ya nos encargamos de realizar el resto para
//mostrarlo por pantalla.Realizado por Omar Sotillo

void Fichero::guardar_agendahtml(list<Cliente> agenda,string nombre) {

		fstream f(nombre.c_str(),ios::out|ios::trunc);

		string fav="false";
		int uid=1;

		f.clear();

	    list<Cliente>::iterator it= agenda.begin();
	    list<Cliente>::iterator aux;

	    f<<"[";

	    for(int i=0;i<agenda.size();i++,it++){

	    	if((*it).getFavorito()==1)
	    		fav="true";
	    	else fav="false";

	    	//metemos en el .json con el siguietne formato

	    	f<<"{\"uid\":"<<uid<<",\"text\" :\" DNI: "+(*it).getDni()+" Numero: "+(*it).getNumero()+" Numero fijo: "+(*it).getFijo()+
	    	" Direccion: "+(*it).getDireccion()+" Anotaciones: "+(*it).getAnotaciones()+" Twitter: "+(*it).getTwitter()+" Facebook: "
	    	+(*it).getFacebook()+"\",\"username\" :\""+(*it).getNombre()+" "+(*it).getApellido1()+" "+(*it).getApellido2()+
	    	"\",\"avatar\" :\"../images/avatar-02.svg\",\"favorite\" :"+fav+"}";

	    	uid++;

	    	//Aux Para ver cuando acaba y poner dos cosas y no tocar el iterator real

	    	aux=it;
	    	aux++;

	    	if ( aux == agenda.end() ) {//Si ha acabado "]"

 			 	f<<"]";
 			 }

 			 else{//Sino ,

 			 	f<<",";
 			 }

	    	}


	    f.close();//Cerramos fichero
}
