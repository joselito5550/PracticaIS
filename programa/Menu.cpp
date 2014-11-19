#include <iostream>
#include <string.h>
#include "Clientes.h"
#include "TADLista.h"

 using namespace std;
 int main(){
  string DNI, fav, nombre="",apellido1="",apellido2="", direccion="", anotaciones="",twitter="",facebook="";
  int favorito=0;
  char opc1;
 	int opc=0;
   Lista lista;
 	do{
 		cout<<"------------------CLINICA--------------------\n";
 		cout<<"1.-Añadir\n";
 		cout<<"2.-Mostrar todos\n";
 		cout<<"3.-Buscar\n";
 		cout<<"4.-Modificar\n";
 		cout<<"5.-Eliminar\n";
 		cout<<"6.-Añadir Favorito\n"
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
         cout<<"\nIntroduce el primer apellido:"<<endl;
         cin>>apellido1;
         cout<<"\nIntroduce el segundo apellido:"<<endl;
         cin>>apellido2;
         cout<<"\nIntroduce la dirección:"<<endl;
         cin>>direccion;
         cout<<"\nIntroduce la cuenta de twitter:"<<endl;
         cin>>twitter;
         cout<<"\nIntroduce la cuenta de facebook:"<<endl;
         cin>>facebook;
         cout<<"\n¿Quieres marcarlo como favorito?\tS/N"<<endl;
         cin>>fav;
         if(fav=='S' || fav=='s'){
          favorito=1;
         }
         else favorito=0;
         cout<<"\n¿Desea introducir anotaciones sobre este contacto?\tS/N"<<endl;
 			   cin>>opc1;
         if(opc1=='S' || opc1=='s'){
           cin>>anotaciones;
         }
         int pos= lista.posabc(aux);    // vemos donde tenemos qeu ponerlo
         lista.insertarCliente(pos,aux);
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
 		}
 	}while(opc!=8);



 	return 0;
 }
