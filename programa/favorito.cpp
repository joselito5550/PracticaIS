//Función para añadir a favoritos un contacto

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
