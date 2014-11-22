#include <iostream>
#include <string.h>
#include "TADLista.h"

 using namespace std;
 int main(){
  string DNI;
  char fav='n';
  string nombre="";
  string apellido1="";
  string apellido2="";
  string direccion="";
  string anotaciones="";
  string twitter="";
  string facebook="";
  int favorito=0;
  char opc1;
 	int opc=0;
  lista lista1;
 	do{
 		cout<<"------------------CLINICA--------------------\n";
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
         Clientes aux;
         cout<<"\nIntroduce el nombre:"<<endl;
         cin>>nombre;
         aux.setNombre(nombre);
         cout<<"\nIntroduce el primer apellido:"<<endl;
         cin>>apellido1;
         aux.setApellido1(apellido1);
         cout<<"\nIntroduce el segundo apellido:"<<endl;
         cin>>apellido2;
         aux.setApellido2(apellido2);
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
          favorito=1;
          aux.setFavorito(favorito);
         }
         else{ favorito=0;
         aux.setFavorito(favorito);
         }
         cout<<"\n¿Desea introducir anotaciones sobre este contacto?\tS/N"<<endl;
 			   cin>>opc1;
         if(opc1=='S' || opc1=='s'){
           cin>>anotaciones;
           aux.setAnotaciones(anotaciones);
         }
         int pos= lista1.posabc(aux);    // vemos donde tenemos qeu ponerlo
         lista1.insertarCliente(pos,aux);
      }
 			case 2:{

 			}
 			case 3:{

 			}
 			case 4:{

 			}
 			case 5:{

 			}
 			case 6:{

 			}
 			case 7:{

 			}
 			case 8:{

 			}
 			case 9:{

 			}
 			}
 		}while(opc!=8);



 	return 0;
 }
