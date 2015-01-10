/*
 * Cliente.h
 *
 *  Created on: 13/12/2014
 *      Author: jose
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_

 //librerias

#include <string>
#include <iostream>

 //usamos std por comodidad y ya que no nos ha dado ningun problema . Sino std::cout y std::cin y algunas mas

using namespace std;
class Cliente {

private:	
						//twitter y facebook los utilizamos asi o como struct?
	string DNI, nombre, apellido1, apellido2,numero,fijo, direccion, anotaciones,twitter, facebook;
	int favorito;//Podriamos haber recurrido a bools pero por comodidad para nosotros usamos ints;
	string texto;

public:

	//Constructores 

	Cliente();
	virtual ~Cliente();

	//Modificadores y observadores( COnst son por el eclipse)

	const string& getAnotaciones() const;
	void setAnotaciones(const string& anotaciones);
	const string& getApellido1() const;
	void setApellido1(const string& apellido1);
	const string& getApellido2() const;
	void setApellido2(const string& apellido2);
	const string& getDireccion() const;
	void setDireccion(const string& direccion);
	const string& getDni() const;
	void setDni(const string& dni);
	const string& getFacebook() const;
	void setFacebook(const string& facebook);
	int getFavorito() const;
	void setFavorito(int favorito);
	const string& getFijo() const;
	void setFijo(const string& fijo);
	const string& getNombre() const;
	void setNombre(const string& nombre);
	const string& getNumero() const;
	void setNumero(const string& numero);
	const string& getTwitter() const;
	void setTwitter(const string& twitter);

	//Meto un texto para imprimirlo en el json.Nos devolvera todo en una unica linea para imprimir mas facilmente.

	string getTexto();
};

#endif /* CLIENTE_H_ */
