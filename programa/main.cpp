/*
 * main.cpp
 *
 *  Created on: 15/12/2014
 *      Author: Jose Marquez
 */

 // Librerias
 #include <cstdlib>
#include <list>
#include <iostream>
#include <cstring>
#include "Cliente.h"
#include "Fichero.h"
#include "Menu.h"
#include "Agenda.h"
#include <stdio.h>
#include <string>

 //Por comodidad al tener muchos cout y cin. Sino usamos std::
using namespace std;

//Main o cuerpo del programa . Será nuestra interfaz grafica con el usuario. Son 8 las acciones que puede decidir a realizar el usuario

int main(){


	system("clear");

	//Declaramos objetos a usar y variables

	int opc;
	Menu menu;
	Fichero html;
	string DNI, nombre, apellido1, apellido2,numero,fijo, direccion, anotaciones,twitter, facebook;
	char fav;
	Agenda agenda;
	Fichero carga;
	agenda.cargar("memoria_agenda");

	//siempre se hará al iniciar el programa

	do{ //Hasta que sea distinto de 9;

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

 			//En este case añadiremos un usuario para ello pedimos los datos y los pasamos a la lista

 			case 1: {

 				Cliente aux; //Cliente para pasarlo a la lista.

 						//Pedimos los datos del usuario usando el cliente aux;

 						// Pedimos el nombre al usuario

 						system("clear");
 						 getchar();
 				         cout<<"\nIntroduce el nombre:"<<endl;
 				         getline(cin,nombre);
 				         aux.setNombre(nombre);
 				        system("clear");

 				        //Pedimos el apellido1

 				         cout<<"\nIntroduce el primer apellido:"<<endl;
 				         getline(cin,apellido1);
 				         aux.setApellido1(apellido1);
 				        system("clear");

 				        //Pedimos el apellido2

 				         cout<<"\nIntroduce el segundo apellido:"<<endl;
 				         getline(cin,apellido2);
 				         aux.setApellido2(apellido2);
 				        system("clear");

 				        //Pedimos el DNI

 				         cout<<"\nIntroduce el DNI:"<<endl;
 				         getline(cin,DNI);
 				         aux.setDni(DNI);
 				        system("clear");

 				        //Pedimos el movil

 				         cout<<"\nIntroduce el numero de telefono movil:"<<endl;
 				        getline(cin,numero);
 				         aux.setNumero(numero);
 				        system("clear");

 				        //Pedimos el numero de telefono fijo

 				         cout<<"\nIntroduce el numero de telefono fijo:"<<endl;
 				        getline(cin,fijo);
 				        aux.setFijo(fijo);
 				       system("clear");

 				       //Pedimos la direccion

 				        cout<<"\nIntroduce la dirección:"<<endl;
 				         getline(cin,direccion);
 				         aux.setDireccion(direccion);
 				        system("clear");

 				        //Pedimos la cuenta de Twitter

 				         cout<<"\nIntroduce la cuenta de twitter:"<<endl;
 				         getline(cin,twitter);
 				         aux.setTwitter(twitter);
 				         system("clear");

 				         //Pedimos la cuenta de facebook

 				         cout<<"\nIntroduce la cuenta de facebook:"<<endl;
 				         getline(cin,facebook);
 				         aux.setFacebook(facebook);
 				        system("clear");

 				        //Pedimos si queremos marcaral contacto como favorito o no

 				         cout<<"\n¿Quieres marcarlo como favorito?\tS/N\n"<<endl;
 				         cin>>fav;
 				         if(fav=='S' || fav=='s'){
 				        	 aux.setFavorito(1);
 				         }
 				         else aux.setFavorito(0);

 				         //Pedimos si queremos que meta anotadaciones

 				         getchar();
 				         char anotacionesaux='n';
 				        system("clear");
 				         cout<<"\n¿Desea introducir anotaciones?\tS/N\n";
 				         cin>>anotacionesaux;

 				         if(anotacionesaux=='S' || anotacionesaux=='s'){ //Para S y s minuscula
 				        	 cout<<"\nIntroduce las anotaciones\n";
 				        	 getchar();
 				        	 getline(cin,anotaciones);
 				        	 aux.setAnotaciones(anotaciones);
 				         }

 				         //ahora hay que mirar en que posicion ponerlo, para ello habra que hacer un nuevo metodo

 				         list<Cliente>::iterator it=agenda.buscarpos(aux);
 				         agenda.insertarCliente(it,aux);
 				        agenda.guardar(agenda.getClientes(),"memoria_agenda");
 				         system("clear");


               }break;


            // En este case se muestra la agenda por dos metodos a convenir por el usuario: HTML usando tecnología Polymer y a travez
           	// del termina


 			case 2:{

 				system("clear");

 				cout<<"1.- Mostrar por web HTML (Agenda Polymer)\n";
 				cout<<"2.- Mostrar por terminal\n";

 				int opc;
 				cin>>opc;
 				system("clear");

 				switch(opc){

 					case 1:{//Por HTML

 						html.guardar_agendahtml(agenda.getClientes(),"api/posts.json"); //Deberiamos implementar que te lo habra solo: DONE
 						
 						

 						//No sabemos el navegador que utiliza el usuario entonces que abra el que él desee.
 						cout<<"**************************IMPORTANTE**************************\n\n";
 						cout<<"   Lanze un servidor estando en la carpeta del programa,\n";
 						cout<<"   (python -m simpleHTTPServer),\n";
 						cout<<"   visite en su navegador preferido localhost:8000 y \n";
 						cout<<"   abra el archivo sigma.html\n\n";
 						cout<<"**************************IMPORTANTE**************************";

 						//Ademas teniamos el problema de que tendriamos que utilizar hilos y padres para abrir en segundo planos sin la 
 						//seguridad de que vaya a ser lanzado en linux ni en windows.

 					}break;

 					case 2:{// Por Terminal

 						menu.visualizar_agenda(agenda.getClientes());		//va a ser mejor pasarlo por referencia creo: Solucinado

 					}break;
 				}

 			}break;

 			//Case para buscar por apellido o por DNI;

 			case 3:{

 				system("clear");
 				Cliente aux;
 				int opc;

 				cout<<"1.-Por apellido\n";
 				cout<<"2.-Por DNI\n";

 				cin>>opc;

 				switch(opc){

 					case 1:{//Por apellido
 						system("clear");
 							string apellido;
 							getline(cin,apellido);
 							menu.visualizar_agenda(agenda.getallApellido(apellido));
 							}break;


 					case 2:{//Por DNI
 						system("clear");
 						string dni;
 						cout<<"\nIntroduce el DNI\n";
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

 			//case para modificar un usuario

 			case 4:{

 				system("clear");
 				Cliente aux;
 				cout<<"Introduce le DNI del cliente que desea modificar\n"<<endl;
 				cin>>DNI;
 				aux.setDni(DNI);
 				if(agenda.pertenece(aux)) //Comprobamos que existe , sino else
 				{

 					int op=0;
 					list<Cliente>::iterator it;
 					it=agenda.buscar(aux);

 					do{//Mientras sea distinto de cero y el usuario quiera salir

 						aux=agenda.getcliente(it);
 						system("clear");
 						cout<<"\n1.Nombre";
 						cout<<"\n2.Apellidos";
 						cout<<"\n3.Numero";
 						cout<<"\n4.Numero Fijo";
 						cout<<"\n5.DNI";
 						cout<<"\n6.Direccion";
 						cout<<"\n7.Anotaciones";
 						cout<<"\n8.Twitter";
 						cout<<"\n9.Facebook";
 						cout<<"\n10.Favorito\n";
 						if(aux.getFavorito()==1)
 							cout<<"\t FAVORITO";
 						else
 							cout<<"\t NO FAVORITO";
 						cout<<"\n0.Salir";
 						cin>>op;

 						switch(op){

 						case 1:{

 							system("clear");
 							cout<<"\nIntroduce el nombre";
 							getchar();
 							getline(cin,nombre);
 							aux.setNombre(nombre);
 							agenda.modificar(it,aux);
 							system("clear");

 						}break;
 						case 2:{

 							system("clear");
 							cout<<"\nIntroduce el primer apellido";
 							getchar();
 							getline(cin,apellido1);
 							aux.setApellido1(apellido1);
 							cout<<"\nIntroduce el segundo apellido";
 							getline(cin,apellido2);
 							aux.setApellido2(apellido2);
 							agenda.modificar(it,aux);
 							system("clear");

 						}break;
 						case 3:{

 							system("clear");
 							cout<<"\nIntroduce el numero";
 							cin>>numero;
 							aux.setNumero(numero);
 							agenda.modificar(it,aux);
 							system("clear");

 						}break;
 						case 4:{

 							system("clear");
 							cout<<"\nIntroduce el numero de telefono fijo\n";
 							cin>>fijo;
 							aux.setFijo(fijo);
 							agenda.modificar(it,aux);
 							system("clear");

 						}break;
 						case 5:{

 							system("clear");
 							cout<<"\nIntroduce el DNI";
 							cin>>DNI;
 							aux.setDni(DNI);
 							agenda.modificar(it,aux);
 							system("clear");

 						}break;
 						case 6:{

 							system("clear");
 							cout<<"\nIntroduce la direccion";
 							getline(cin,direccion);
 							aux.setDireccion(direccion);
 							agenda.modificar(it,aux);
 							system("clear");

 						}break;
 						case 7:{

 							cout<<"\nIntroduce las anotaciones";
 							getchar();
 							getline(cin,anotaciones);
 							aux.setAnotaciones(anotaciones);
 							agenda.modificar(it,aux);
 							//(*it)=aux;
 							system("clear");

 						}break;
 						case 8:{

 							cout<<"\nIntroduce el twitter";
 							cin>>twitter;
  							aux.setTwitter(twitter);
  							agenda.modificar(it,aux);
  							system("clear");

 						}break;
 						case 9:{

 							cout<<"\nIntroduce el facebook";
 							getline(cin,facebook);
  							aux.setFacebook(facebook);
  							agenda.modificar(it,aux);
 							system("clear");

 						}break;
 						case 10:{

 							if(aux.getFavorito()==1){
 								aux.setFavorito(0);
 								agenda.modificar(it,aux);
 							}
 							else{
 								aux.setFavorito(1);
 								agenda.modificar(it,aux);
 							}

 							}break;

 						}

 						}while(op!=0);

 				}
 				else cout<<"\nEl DNI introducido es el incorrecto\n";

 				agenda.guardar(agenda.getClientes(),"memoria_agenda");

 			}break;

 			//case para borrar contacto

 			case 5:{

 				cout<<"\nIntroduce el DNI de quien desea eliminar"<<endl;
 				cin>>DNI;
				Cliente aux2;
 				aux2.setDni(DNI);
 				if(agenda.pertenece(aux2)){
 				list<Cliente>::iterator it= agenda.buscar(aux2);
 				agenda.eliminar(it);
 				cout<<"\nEl cliente ha sido borrado";
 				agenda.guardar(agenda.getClientes(),"memoria_agenda");
 				}
 				else cout<<"\nEl DNI introducido no pertenece a ningun cliente";

 			}break;

 			//Para poner un contacto que recuerdes no es favorito como favorito

 			case 6:{

 				Cliente aux;
 				cout<<"\nIntroduce el dni\n";
 				cin>>DNI;
 				aux.setDni(DNI);
 				list<Cliente>::iterator it= agenda.buscar(aux);
 				(*it).setFavorito(1);

 			}break;

 			// En este case lo que se hace es crear una copia de seguridad con el nombre deseado. Se le pedirá al usuario el nombre
 			// del archivo y se creara un .txt con el nombre deseado

 			case 7:{

 				cout<<"\nIntroduce el nombre de la copia de seguridad \n";
 				getchar();
 				getline(cin,nombre);
 				agenda.guardar(agenda.getClientes(),nombre);

 			}break;

 			//En este case lo que se hace es restaurar agenda;

 			case 8:{

 				cout<<"\nIntroduce el nombre de la copia de seguridad a restarurar\n";
 				getchar();
 				getline(cin,nombre);

 				agenda.cargar(nombre);

 			}break;

 			}

 		}while(opc!=9);
 		//The end
 		

}
