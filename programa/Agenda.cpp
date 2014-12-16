/*
 * Agenda.cpp
 *
 *  Created on: 13/12/2014
 *      Author: jose
 */

#include "Agenda.h"
using namespace std;
Agenda::Agenda() {
	// TODO Auto-generated constructor stub

}

Agenda::~Agenda() {
	// TODO Auto-generated destructor stub
}

bool Agenda::esvacia() {
	return agenda.empty();
}

int Agenda::longitud() {
	return agenda.size();
}

bool Agenda::pertenece(Cliente &e) {
	bool encontrado=false;
	list<Cliente>::iterator it= agenda.begin();
	while(it!=agenda.end() && !encontrado){
		if((*it).getDni()==e.getDni())	encontrado=true;
		else it++;
	}
	return encontrado;
}

void Agenda::insertarCliente(list<Cliente>::iterator pos, Cliente& e) {
	//hay que distinguir entre si el cliente existe o no
	bool ok=false;
	if(esvacia()){
		agenda.push_back(e);
	}
	else if(pertenece(e)){
		//Si ya esta en la agenda le preguntamos si desea modificaro
		char opc= 'n';
		cout<<"\n¿El cliente ya existe, desea modificarlo?\nS/N\t:";
		cin>>(opc);
		if(opc=='s' || opc=='S'){
			ok=modificar(pos, e);
		}
	}
	else{

		agenda.insert(pos,1,e);	//me da a mi que asi no es :S
	}
}

bool Agenda::eliminar(list<Cliente>::iterator it) {
	agenda.erase(it);
}

Cliente Agenda::buscar(Cliente &e) {
	bool encontrado=false;
	list<Cliente>::iterator it= agenda.begin();
	while(!encontrado && it!=agenda.end()){//hay que buscarlo tambien por el segundo apellido para que sea igual
		if((*it).getApellido1()==e.getApellido1() && (*it).getApellido2()==e.getApellido2() || (*it).getDni()==e.getDni() ){
			encontrado=true;
		}
		else it++;
	}

}

bool Agenda::modificar(list<Cliente>::iterator i, Cliente& e) {
	Cliente aux;
	string DNI, nombre, apellido1, apellido2,numero,fijo, direccion, anotaciones,twitter, facebook;
	char fav;
	cout<<"\nIntroduce el nombre:"<<endl;
	cin>>nombre;
	aux.setNombre(nombre);
	cout<<"\nIntroduce el primer apellido:"<<endl;
	cin>>apellido1;
	aux.setApellido1(apellido1);
	cout<<"\nIntroduce el segundo apellido:"<<endl;
	cin>>apellido2;
	aux.setApellido2(apellido2);
	cout<<"\nIntroduce el DNI:"<<endl;
	cin>>DNI;
	aux.setDni(DNI);
	cout<<"\nIntroduce la dirección:"<<endl;
	cin>>direccion;
	aux.setDireccion(direccion);
	cout<<"\nIntroduce la cuenta de twitter:"<<endl;
	cin>>twitter;
	aux.setTwitter(twitter);
	cout<<"\nIntroduce la cuenta de facebook:"<<endl;
	cin>>facebook;
	aux.setFacebook(facebook);
	cout<<"\n¿Quieres marcarlo como favorito?\tS/N"<<endl;
	cin>>fav;
	if(fav=='S' || fav=='s'){
		aux.setFavorito(1);
	}
	else aux.setFavorito(0);
	//ahora hay que mirar en que posicion ponerlo, para ello habra que hacer un nuevo metodo
	//hay que machacarlo;
}

bool Agenda::ordenar() {		//si los vamos a insertar ordenados?? para que?
}

list<Cliente> Agenda::getFavoritos() {
	list<Cliente> aux;
	list<Cliente>::iterator it;
	for(it=agenda.begin();it!=agenda.end();it++){
		if((*it).getFavorito()==1)	aux.push_back((*it));			//ESTAN ORDENAOS COÑO
	}
	return aux;
}

void Agenda::guardar(list<Cliente> agenda) {
	f.guardar_agenda(agenda);
}

list<Cliente> Agenda::getallApellido(string apellido) {
	list<Cliente> aux;
	list<Cliente>::iterator it;
	for(it=agenda.begin();it!=agenda.end();it++){
		if((*it).getApellido1()==apellido)	aux.push_back((*it));
	}
	return aux;
}

list<Cliente> Agenda::getClientes() {
	return agenda;
}

list<Cliente>::iterator Agenda::buscarpos(Cliente& e) {
	list<Cliente>::iterator it=agenda.begin();
	while((*it).getApellido1()<=e.getApellido1() && it!=agenda.end())
		{
	        if((*it).getApellido1()==e.getApellido1()){
			while((*it).getApellido2()<e.getApellido2()) it++;//si el primer apellido es igual hay que compararlo con el segundo
	        }
	        else it++;
		}
	return it;
}

void Agenda::cargar() {
	f.cargar_agenda();
}
