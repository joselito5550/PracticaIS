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
