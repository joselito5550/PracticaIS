CASO DE USO:  Restaurar copia de seguridad.
=====================

###ID: 6

###Breve Descripción:

```bash
Con esta función restauraremos una copia de seguridad, es decir con un fichero auxiliar cambiaremos el fichero agenda tras realizar los cambios.

```

###Actores Principales:

```bash
Administrativo

```

###Actores Secundarios:

```bash
Ficheros.

```

###Precondiciones:

```bash
Ninguna.
```

###Flujo de cada uso:

```bash
1. Se le pide al usuario si quiere restaurar el fichero justo a la version anterior.
2. A nivel de programa se borra el actual y se pone como agenda el fichero copia de seguridad.
3. Se le pide al usuario que seleccione otra acción.


```

###Postcondiciones:

```bash
Se ha realizado una restauración del fichero de texto, y se le ha pedido al usuario que seleccione otra acción.

```
###Flujos alternativos
```bash
Ninguno.

```
