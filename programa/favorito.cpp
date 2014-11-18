//Función para añadir a favoritos un contacto
//El cliente que se pasa como argumento a la función se recoge de la lista buscandolo por nombre


void lista::anadirfavorito(Cliente &e) {

int valor;

valor=e.getFavorito();

if(valor==1) {
	cout<<"El contacto ya esta añadido a favoritos"<<endl;
}

if(valor==0) {
	valor=1;
	e.setFavorito(valor);
	cout<<"Contacto añadido con exito a favoritos"<<endl;
}

return 0;
}
