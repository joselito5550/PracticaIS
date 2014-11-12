CASO DE USO: Modificar
=====================

###ID: 3

###Breve Descripción:

```bash
En este caso el usuario modificará al cliente que haya seleccinado, es decir se cambiarán los campos de ese cliente en el fichero de texto.

```

###Actores Principales:

```bash
Administrativo

```

###Actores Secundarios:

```bash
Clientes

```

###Precondiciones:

```bash
El formato para modificar usuário será:
- DNI.
- Nombre y apellidos.
- Teléfonos.
- Correos electrónicos.
- Dirección(nes) postales.
- Anotaciones.
- Favorito.
- Más usados.
- Redes sociales (nombre + URL ó usuario).
```

###Flujo de cada uso:

```bash
1. El usuario se le pedirá que usuario quiere modificar, y cambiará los campos uno a uno según el formato del programa.
2. EL programa borrará los datos del cliente y pondra en esa misma posición del fichero los datos cambiados del cliente.
3. En el caso de que haya que cambiar los apellidos, el programa ordenará de nuevo el fichero, para que este en orden alfabético.
4. Se le pedirá al usuario que seleccione otra opción.


```

###Postcondiciones:

```bash
Se ha modificado el usuario  y seleccionado otra opción.

```
###Flujos alternativos
```bash
-Hay que utilizar el caso de uso: buscar.
-Hay que utilizar el caso de uso: borrar.

```
