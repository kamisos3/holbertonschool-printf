_printf

Descripción

Este proyecto es una implementación personalizada de la función printf en C. Fue desarrollado como parte del programa de Holberton School en colaboración con Kami.

Recursos

Para completar este proyecto, utilizamos los siguientes recursos:

Secrets of printf

Group Projects concept page

Flowcharts concept page

man 3 printf

Requisitos

Editores permitidos: vi, vim, emacs

Compilación en Ubuntu 20.04 LTS con gcc usando las opciones:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89

Todos los archivos deben terminar con una nueva línea.

Se debe incluir un archivo README.md en el directorio raíz del proyecto.

El código debe seguir el estilo Betty (verificado con betty-style.pl y betty-doc.pl).

No se permiten variables globales.

No más de 5 funciones por archivo.

El prototipo de todas las funciones debe estar en el archivo de cabecera main.h.

Todos los archivos de encabezado deben estar protegidos contra inclusiones múltiples.

Funciones y Macros Permitidos

En la implementación de _printf, solo se pueden utilizar las siguientes funciones y macros de C estándar:

write (man 2 write)

malloc (man 3 malloc)

free (man 3 free)

va_start (man 3 va_start)

va_end (man 3 va_end)

va_copy (man 3 va_copy)

va_arg (man 3 va_arg)

Uso

Para compilar el programa, ejecuta:

make

O si prefieres compilar manualmente:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf

Ejemplo de uso:

#include "main.h"

int main(void)
{
    _printf("Hola, %s!\n", "Kami");
    return (0);
}

Autores

AleG

Kami
