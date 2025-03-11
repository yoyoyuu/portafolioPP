+++
date = '2025-02-21T10:18:18-08:00'
draft = true
title = 'Practica0: Markdown, git & Hugo'
+++
<!--Comentario xd-->

## Indice

1. [Introducción](#introducción)
2. [Introducción a Markdown](#sesión-1-introducción-a-markdown)
3. [Uso de Git y Github](#sesión-2-uso-de-git-y-github)
4. [Creación de páginas estáticas](#sesión-3-creación-de-páginas-estáticas)

## Introducción

Durante el desarrollo de esta practica, nos adentramos en diversos temas relacionados al desarrollo de paginas web, con el proposito de crear la base de lo que seria nuestro **portafolio** para la materia de paradigmas de la programación.
El desarrollo de esta practica se dividió en 3 sesiones:

1. **Introducción a Markdown**
2. **Uso de Git y GitHub**
3. **Creación de páginas estáticas**

Ahora, entraremos más a detalle en cada una de estas sesiones.

---

## Sesión 1: Introducción a Markdown

En esta sesion, aprendimos a utilizar un lenguaje de marcado ligero, el cual nos permite crear textos con formato sin necesidad de utilizar HTML, con una estructura básica y fácil de leer. Aprendimos a hacer uso de los diferentes elementos que ofrece markdown, como títulos, listas, enlaces, etc.

Uno de los resultados que queriamos obtener al realizar esta practica, era aprender a usar los distintos tipos de formatos que le podemos dar a un texto y como los podemos implementar al momento de usarlos, para que puedan ser visualizados de manera clara y concisa.
Existen diversas formas de hacerlo, pero a veces, el sistema puede detectar ciertos "errores" los cuales se muestran con una linea amarilla debajo del texto. Aunque no te detienen de usarlas y estas se pueden visualizar, es recomendable seguir las normas que este lenguaje nos proporciona.

El resultado más obvio, fue el archivo que se esta visualizando en este momento, usando el formato de Markdown y presentarlo usando la herramienta de Hugo, toda la estructura de este sitio está hecha por medio del uso de markdown.

---

## Sesión 2: Uso de Git y Github

En esta sesion, aprendimos a utilizar un sistema de control de versiones llamado Git, lo cual nos permite tener un buen control del desarrollo de nuestros proyectos, teniendo control de todas las versiones que se han guardado.
Aprendimos a usar la terminal de Git Bash, para poder realizar las acciones que queriamos realizar en nuestro proyecto, como agregar, eliminar y actualizar nuestro proyecto, visualizando las versiones que haciamos en cada momento que guardabamos.

![git bash](./images/terminal_gitbash.jpg "Uso de la terminal de Git Bash")

Así mismo, aprendimos a utilizar Github, una plataforma en línea que nos permite subir nuestros proyectos a la nube y compartirlos con otros, creando repositorios para cada uno de esos.
Desde la terminal de Git Bash, hemos podido realizar acciones como:

- `git add .` para agregar todos los cambios realizados en el proyecto.
- `git commit -m "commit message"` para guardar los cambios con un mensaje descriptivo.
- `git push origin master` para subir los cambios a Github.

Entre otros comandos más, todo esto pudimos visualizarlo desde nuestro perfil de Github. Donde tenemos un repositorio dedicado a este proyecto.

![commits](./images/commits.jpg "commits realizados")

---

## Sesión 3: Creación de páginas estáticas

En esta sesion, aprendimos a utilizar un generador de sitios web llamado _Hugo_, el cual nos permite crear páginas web estáticas de manera rápida y sencilla, usando los conocimientos posteriores de markdown y git. 

![HugoLogo](image.png "logotipo de Hugo")

De igual manera, implementamos el uso de Github Actions, para automatizar el proceso de creación de nuestro sitio web y visualizar las diversas versiones de la misma.

![githubActions](./images/GitHubActions.jpg "Github Actions")

Cada que haciamos uso de los comandos de git bash para poder subir nuestras modificaciones al repositorio en GitHub, los commit y push se podian visualizar mejor desde esta sección.
Asi mismo, GitHub Actions nos permitia manejar una clase de "hosteo" para nuestro sitio, permitiendo publicar nuestro portafolio en la Web.
