CASOS DE USO
============
# Casos de uso: (Aquí iran los casos de uso que tenemos que hacer no más)

### Caso de Uso: Buscar usuario por apellidos:

ID: 1

Breve Descripción:

```bash
Esta función lo que nos va a permitir es pedirle al usuario el apellido del usuario que quieres buscar y buscarlo en nuestra base de datos(fichero de texto).

```

Actores Principales:

```bash
Clientes

```

Actores Secundarios:

```bash
Ninguno

```

Precondiciones:

```bash
El formato del apellido ha de ser el mismo que el que tiene en la agenda.

```

Flujo de cada uso:

```bash
1. Se le pide al usuario que introduzca el apellido del cliente que desea buscar.
2. Buscamos al cliente en la base de datos.
Si lo encuentra:
  2.1 Imprime por pantalla el cliente y los datos del mismo.

Si no lo encuentra:
  2.2 Preguntar si desea introducir un nuevo cliente , si desea introducir de nuevo un apellido o salir del programa..

  Si quiere añadir:
   2.2.1 Usar funcion añadir cliente a base de datos.

  Si quiere volver a buscar:

  2.2.2 Volver a funcion buscar.

  Si salir :

  2.2.3 Salir del programa

```

Postcondiciones:

```bash
Hemos mostrado los datos del usuario por pantalla.

A añadido un nuevo usuario

Se ha salido del programa.

```

Flujos alternativos

```bash
Ninguno.

```
