//Funcion:Clase Cliente.
//Realizado por:Omar Sotillo Franco.
//En colaboración:(Los que retoquen algo);
//Para: Hacer todas las funciones de forma unificada.
//Requiere: Nada.
//Devuelve: Una clase.
//Detalles: Clase cliente y parte pública y privada con modificadores y observadores.


class Cliente{

  //parte privada: donde iran todos los datos de la clase.

  private:

    string DNI_, nombre_, apellido1_, apellido1_, direccion_, anotaciones_,twitter_, facebook_;
    int favorito_;

  //Parte publica, observadores y modificadores;

  public:

    //contructor

    Cliente(string DNI, string nombre="", string apellido1="",string apellido2="", string direccion="", string anotaciones="", string twitter="", string facebook="", int favorito=0);


    //observadores

    string getDNI();
    string getNombre();
    string getApellido1();
    string getApellido2();
    string getDireccion();
    string getAnotacion();
    string getTwitter();
    string getFacebook();
    string getApellidosyNombre();
    int getFavorito();


    //modificadores

    void setDNI(string num);
    void setNombre(string name);
    void setApellido1(string surname1);
    void setApellido2(string surname2);
    void setDireccion(string direction);
    void setAnotaciones(string anotation);
    void setTwitter(string tuita);
    void setFacebook(string feibu);
    void setFavorito(int favorite);

};
