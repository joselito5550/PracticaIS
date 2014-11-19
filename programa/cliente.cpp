//Funcion:Clase Cliente.
//Realizado por:Omar Sotillo Franco.
//En colaboración:(Los que retoquen algo);
//Para: Hacer todas las funciones de forma unificada.
//Requiere: Nada.
//Devuelve: Una clase.
//Detalles: Clase cliente y parte pública y privada con modificadores y observadores.


class Clientes{

  //parte privada: donde iran todos los datos de la clase.

  private:

    string DNI_, nombre_, apellido1_, apellido2_, direccion_, anotaciones_,twitter_, facebook_, numero_, fijo_;
    int favorito_;

  //Parte publica, observadores y modificadores;

  public:

    //contructor

    Clientes(string DNI, string nombre="", string apellido1="",string apellido2="", string direccion="", string anotaciones="", string twitter="", string facebook="", int favorito=0);


    //observadores

    string getDNI()const {
      return DNI;
    };
    string getNombre()const {
      return nombre;
    };
    string getApellido1()const {
      return apellido1;
    };
    string getApellido2()const {
      return apellido2;
    };
    string getDireccion()const {
      return direccion;
    };
    string getAnotacion()const {
      return anotaciones;
    };
    string getTwitter()const {
      return twitter;
    };
    string getFacebook()const {
      return facebook;
    };
    string getApellidosyNombre()const{

    };
    int getFavorito()const{
      return favorito;
    };
    
    string getNumero() const{
      return numero;
    };
    
    string getFijo() const{
      return fijo;
    };


    //modificadores

      void setDNI(string num){
      if(num.length()==9){
        DNI=num;
      } else {
        cout<<"Error, longitud del DNI no valida"<<endl;
      }
    };

    void setNombre(string name){
      if(name.length()>0 && name.length()<=40){
        nombre=name;
      } else {
        cout<<"Error"<<endl;
      }
    };

    void setApellido1(string surname1){
      if(surname1.length()>0 && surname1.length()<=40){
        apellido1=surname1;
      } else {
        cout<<"Error"<<endl;
      }
    };

    void setApellido2(string surname2){
      if(surname2.length()>0 && surname2.length()<=40){
        apellido2=surname2;
      } else {
        cout<<"Error"<<endl;
      }
    };

    void setDireccion(string direction){
     if(direction.length()>0 && direction.length()<=40){
        direccion=direction;
      } else {
        cout<<"Error"<<endl;
      }
    };

    void setAnotaciones(string anotation){
      anotaciones=anotation;
    };

    void setTwitter(string tuita){
      if(tuita.length()>=2 && tuita.length<=30) {
        twitter=tuita;
      } else {
        cout<<"Error"<<endl;
      }
    };

    void setFacebook(string feibu){
      if(feibu.length()>=3 && feibu.length<=40){
        facebook=feibu;
      } else {
        cout<<"Error"<<endl;
      }
    };
    
    void setNumero(string n){
      if(n.length()==9) {
        numero=n;
      } else {
        cout<<"Error el numero debe contener 9 caracteres"<<endl;
      }
    };
    
    void setFijo(string f){
      if(f.length()==9){
        fijo=f;
      } else {
        cout<<"Error el numero debe contener 9 caracteres"<<endl;
      }
    };
    
    //haria falta diferenciar entre si ponemos 0 o 1 aqui? este metodo solo lo vamos a utilizar los desarrolladores no el administrativo
    void setFavorito(int favorite){
      if(favorite==0 || favorite ==1) {
        favorito=favorite;
      } else {
        cout<<"Error, favorite debe tomar valor 0 (no favorito) o valor 1 (favorito)"<<endl;
      }
    };

};
