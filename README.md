EQUIPO SIGMA
==========
Repositorio del grupo SIGMA.

![Grande siempre](http://i.imgur.com/xByMlW9.gif)

# Alumnos participantes

```bash

 Omar Sotillo "omarsotillo"@github

 Jose Marquez "joselito5550"@github

 Antonio Jose Portillo "p02polea"@github

 Juan Jesús Carmona "i42catej"@github

```

# Extracción de requisitos

## Partes interesadas:

1. Dentista
2. Pacientes
3. Administrativo/a (será el actor principal)

## Requisitos funcionales:

```bash


1. Insertar
2. Buscar.
3. Modificar-
4. Borrar.
5. Copias de seguridad manuales a un fichero local.
6. Restauracion copias de seguridad.
7. Poder seleccionar favoritos.
8. Interfaz de texto por consola.
9. Imprimir la agenda de forma bonita en texto plano o HTML opcionalmente.

```

## Requisitos de datos:

Almacenar información del paciente:


```bash
1. Apellidos.
2. DNI.
3. Nombre 
4. Teléfonos.
5. Correos electrónicos.
6. Dirección(nes) postales.
7. Anotaciones.
8. Favorito.
9. Redes sociales (nombre + URL ó usuario).

```

## Requisitos no funcionales:

```bash

1. Escrito en C++.
2. Se ejecuta en un ordenador con Linux.
3. Nivel de seguridad cero.
4. Integridad de datos: copias de seguridad manuales.
5. Volumen de datos 200 entradas.
6.  El almacenamiento es texto plano/binario.

```

## Prioridades:

Como cliente me interesa que funcione lo primero la funcionalidad de búsqueda por apellido, para sustituir mi agenda de papel. Nota: ten en cuenta que esta preferencia tendrá dependencias.



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
