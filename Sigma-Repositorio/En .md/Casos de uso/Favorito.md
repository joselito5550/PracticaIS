CASO DE USO: Favorito
=====================

###ID: 7

###Breve Descripción:

```bash
La opción de tener clientes como favoritos o como normales.
```

###Actores Principales:

```bash
Administrativo.

```

###Actores Secundarios:

```bash
Clientes.

```

###Precondiciones:

```bash
Que exista al menos un cliente en nuestra base de datos.
```

###Flujo de cada uso:

```
1. El usuario selecciona la opción de añadir un usario como favorito (Si ya es favorito es marcar como normal).
2. Introduce solamente los apellidos del cliente.
3. Se le muestra por pantalla al cliente y se le pide una confirmación.
4. Se vuelve al menú de selección.


```

###Postcondiciones:

```bash
Se ha modificado a un usuario como normal o como favorito.

```
###Flujos alternativos
```bash
3.1 Si dice sí se pone como favorito o se quita favorito.
3.2 Si dice que no se vuelve al menú.
```
