/*
 * main.cpp
 *
 *  Created on: 15/12/2014
 *      Author: jose
 */
#include <list>
#include <iostream>
#include "Cliente.h"
#include "Fichero.h"
#include "Menu.h"
#include "Agenda.h"
#include <string>
using namespace std;
int main(){
	int opc;
	Menu menu;
	string DNI, nombre, apellido1, apellido2,numero,fijo, direccion, anotaciones,twitter, facebook;
	char fav;
	Agenda agenda;
	agenda.cargar();		//siempre se hará al iniciar el programa
	do{
 		cout<<"\n------------------CLINICA--------------------\n";
 		cout<<"1.-Añadir\n";
 		cout<<"2.-Mostrar todos\n";
 		cout<<"3.-Buscar\n";
 		cout<<"4.-Modificar\n";
 		cout<<"5.-Eliminar\n";
 		cout<<"6.-Añadir Favorito\n";
 		cout<<"7.-Hacer copia de seguridad\n";
 		cout<<"8.-Restaurar copia\n";
 		cout<<"9.-Salir\n";
 		cout<<"Introduce la opcion:";
 		cin>>opc;
 		switch(opc){
 			case 1: {
 				Cliente aux;
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
 				         list<Cliente>::iterator it=agenda.buscarpos(aux);
 				         agenda.insertarCliente(it,aux);

               }break;
 			case 2:{

 				menu.visualizar_agenda(agenda.getClientes());		//va a ser mejor pasarlo por referencia creo
 			}break;
 			case 3:{
 				Cliente aux;
 				int opc;
 				cout<<"1.-Por apellido\n";
 				cout<<"2.-Por dni\n";
 				cin>>opc;
 				switch(opc){
 					case 1:{

 							string apellido;
 							cin>>apellido;
 							menu.visualizar_agenda(agenda.getallApellido(apellido));
 						}break;


 					case 2:{
 						string dni;
 						cout<<"\nIntroduce el DNI";
 						cin>>dni;
 						aux.setDni(dni);
 						if(agenda.pertenece(aux)){
 						list<Cliente>::iterator it= agenda.buscar(aux);
 						Cliente otro=(*it);
 						menu.visualizar_cliente(otro);
 						}
 						else cout<<"\nNO";
 				}break;
 				}
 			}break;
 			case 4:{
 				Cliente aux;
 				cout<<"Introduce le DNI del cliente que desea modificar"<<endl;
 				cin>>DNI;
 				aux.setDni(DNI);
 				if(agenda.pertenece(aux)){
 				agenda.modificar((agenda.buscar(aux)));
 				}
 				else cout<<"\nEl DNI introducido es el incorrecto\n";
 			}break;
 			case 5:{
 				cout<<"Introduce el DNI de quien desea eliminar"<<endl;
 				cin>>DNI;
				Cliente aux2;
 				aux2.setDni(DNI);
 				if(agenda.pertenece(aux2)){
 				list<Cliente>::iterator it= agenda.buscar(aux2);
 				agenda.eliminar(it);
 				}
 			}break;
 			case 6:{

 			}break;
 			case 7:{

 			}break;
 			case 8:{

 			}break;
 			case 9:{

 			}break;
 			}
 		}while(opc!=9);

}
