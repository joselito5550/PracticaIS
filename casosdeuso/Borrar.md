CASO DE USO: Borrar
=====================

###ID: 4

###Breve Descripción:

```bash
Con esta opción borraremos al cliente seleccionado.

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
Tiene que haber al menos un cliente.


```

###Flujo de cada uso:

```bash
1.Se le pide al usuario el cliente que desea borrar.
2.EL programa muestra al cliente y pide una confirmación al usuario de si esta seguro.
3.En caso de que haya dos usuarios con el mismo apellido (preguntar al profesor).
```

###Postcondiciones:

```bash
Se ha borrado un cliente y se le ha pedido elegir otra opción.

```
###Flujos alternativos
```bash
Si dice que sí:
  2.1.1.Se borra el usuario.
  2.1.2.Se le pide otra opción.
Si dice que no:
  2.2.1.Vuelve a la parte de selección de acción.

```
