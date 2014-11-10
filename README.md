EQUIPO SIGMA
==========
Repositorio del grupo SIGMA.

![Grande siempre](http://i.imgur.com/xByMlW9.gif)

# Alumnos participantes

```bash

 Omar Sotillo "omarsotillo"@github

 Jose Marquez "joselito5550"@github

 Antonio Jose Portillo "p02polea"@github

 Juan Carmona "i42catej"@github

```

# Extracción de requisitos

## Partes interesadas:

1. Dentista
2. Pacientes
3. Administrativo/a (será el actor principal)

## Requisitos funcionales:

```bash

- Una agenda como la del teléfono inteligente.
- Buscar.
- Ordenación.
- Insertar-Modificar-Borrar.
- Sin login para acceder (no es un requisito).
- Copias de seguridad manuales a un fichero local.
- Interfaz de texto por consola.
- Imprimir la agenda de forma bonita en texto plano o HTML opcionalmente.

```

## Requisitos de datos:

Almacenar información del paciente:


```bash

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

## Requisitos no funcionales:

```bash

- Escrito en C++
- Se ejecuta en un ordenador con Linux
- Nivel de seguridad cero
- Integridad de datos: copias de seguridad manuales
- Volumen de datos 200 entradas
- El almacenamiento es texto plano/binario

```

## Prioridades:

Como cliente me interesa que funcione lo primero la funcionalidad de búsqueda por apellido, para sustituir mi agenda de papel. Nota: ten en cuenta que esta preferencia tendrá dependencias.

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

# Configuración básica

## Clonar un repositorio remoto

![clon](http://stream1.gifsoup.com/view/78100/clone-humping-air-o.gif)

git clone URL

```
donde URL la obtenemos de, por ejemplo github, ejemplo:

 ```bash

git clone https://github.com/javism/practicas-is3.git

```

## Consultar estado del repositorio:

```bash

git status

```

## Trabajo básico con ramas

![Rama](http://cdn.innovativelanguage.com/wordlists/media/thumb/12815_fit512.jpg)

Consultamos las ramas que hay (sólo se mostrará la rama *master*)

```bash
git branch
```

Creamos la rama *test*:
```bash
git branch test
```

Consultamos las ramas que hay:
```bash
git branch
```

Nos cambiamos a la rama *test*:
```bash
git checkout test
```
Incorporamos las novedades de la rama *test* **situándonos en la rama master**.

```bash
git merge test
```
## Trabajo remoto PULL/PUSH:

![Psuheo](http://www.gifcrap.com/g2data/albums/TV/Star%20Wars%20-%20Force%20Push%20-%20Goats%20fall%20over.gif)

Normalmente, para descargar los cambios remotos haremos:

```bash
git pull
```

Y para publicar nuestros cambios:

```bash
git push
```
