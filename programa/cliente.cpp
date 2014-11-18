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

    string DNI_, nombre_, apellido1_, apellido2_, direccion_, anotaciones_,twitter_, facebook_;
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


    //modificadores

    void setDNI(string num){
      DNI=num;
    };
    void setNombre(string name){
      nombre=name;
    };
    void setApellido1(string surname1){
      apellido1=surname1;
    };
    void setApellido2(string surname2){
      apellido2=surname2;
    };
    void setDireccion(string direction){
      direccion=direction;
    };
    void setAnotaciones(string anotation){
      anotaciones=anotation;
    };
    void setTwitter(string tuita){
      twitter=tuita;
    };
    void setFacebook(string feibu){
      facebook=feibu;
    };
    void setFavorito(int favorite){
      favorito=favorite;
    };

};
