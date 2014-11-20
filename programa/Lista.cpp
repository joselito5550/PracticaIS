# include "TADLista.h"
#include <string.h>
#include <iostream>
using namespace std;
lista::lista()
{
 elementos=new Clientes[INCREMENTO];
 if (elementos!=NULL)
    {
     Tama=INCREMENTO;
      n=0;
 }
  else
 {
  Tama=n=-1;
 }
}
lista::~lista()
{
 if (elementos!=NULL)
  delete [] elementos;
 elementos=NULL;
 Tama=n=0;
}
 //modificar insertarCLiente para que lo ordene y no haya que insertar posición
void lista::insertarCliente(int i, Clientes& e)
{
int pos;
if (n==Tama)
{
Clientes *NuevaZona=new Clientes[Tama+INCREMENTO];
if (NuevaZona!=NULL)
{
for (int i=0;i<n; i++)
NuevaZona[i]=elementos[i];
Tama+=INCREMENTO;
delete [] elementos;
elementos=NuevaZona;
}
};
if (n<Tama)
{
for (pos=n-1; pos>=i-1; pos--)
elementos[pos+1]=elementos[pos]; // Desplazamiento
elementos[i-1]=e;
n++;
}
fstream f;
f.open("agenda",ios::out|ios::binary);
f.clear();
f.close();
volcarfichero();

}

void lista::modificar(int i, Clientes& e) {
elementos[i-1]=e;
}

Clientes& lista::observar(int i) {
 return(elementos[i-1]);
}

bool lista::esvacia() {
 return (n == 0);
}
void lista::posabc(Clientes &e){           //con esta funcion vemos donde tenemos que colocar el objeto cliente
  string apellido= e.getApellido1();
  int i=0;
  bool encontrado=false;
  while(i<n && !encontrado){              //o es "<" o es ">"
    if(strcmp(elementos[i].getApellido1,apellido)<0){
      encontrado=true;
    }
    else i++;
  }
}

void lista::eliminar(int i) //es segun el usuario
//no lo podemos macharcar
{
 Clientes* aux;
 aux= new Clientes[Tama];
 for (int j=0;j<i-1;j++)
     aux[j]=elementos[j];
 for (int z=n-1;z>=i;z--)
     aux[z-1]=elementos[z];
  delete []elementos;
  elementos=aux;
 n--;
 if (Tama-n>=INCREMENTO && Tama>INCREMENTO)
 {
 Clientes *NuevaZona=new Clientes[Tama-INCREMENTO];
 if (NuevaZona!=NULL)
 {
  Tama-=INCREMENTO;
   for (int i=0;i<Tama; i++)
       NuevaZona[i]=elementos[i];
    delete [] elementos;
    elementos=NuevaZona;
 }
 }
}

int lista::posicion(Clientes &e) //devuelve la posicion
{
 int i=0;
 while (strcmp(elementos[i].getNombre(),e.getNombre())==0 && i < n && strcmp(elementos[i].getApellido1(),e.getApellido1())==0 && strcmp(elementos[i].getApellido2(),e.getApellido2())==0)
       i++;
 return (i == n ? -1 : i+1);
}

inline int lista::longitud()
{
 return n;
}

void lista::anadirIzq(Clientes& e)
{
 insertar(1, e);
}

void lista::anadirDch(Clientes& e)
{
 insertar(n+1, e);
}

void lista::eliminarIzq()
{
 eliminar(1);
}

void lista::eliminarDch()
{
 eliminar(n);
}


bool lista::pertenece(Clientes e)
{
 return (posicion(e) != -1);
}
void Lista::cargarfichero()  		//llamamos a este metodo siempre que iniciemos el programa
{
     fstream f;
     Clientes aux;
     int i=0;
     int j=0;
     bool encontrado=false;
     int numsig;
     f.open("agenda",ios::in|ios::binary);
	 f.clear();			//in u out?
     if (f.fail()) cout<<"\n\tError al abrir el fichero";
     do{
    	f.read((char*)&aux,sizeof(Clientes));
     		elementos[i]=aux;
        i++;
     	}while (!f.eof());
f.close();
f.clear();
}

void Lista::volcarfichero(){				//tras cada insertado actualizamos el fichero
	f.open("agenda",ios::out|ios::binary);
	fpalabra aux;
	f.clear();
	f.seekg(0, ios::beg); // Volver al principio
	int numdepalabras;
	int numsig;
	for (int i=0;i<n;i++){
			f.write((char*)&aux,sizeof(Clientes));
		}
	f.close();
}
