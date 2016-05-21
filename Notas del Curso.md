# Notas del Curso de C

Alan Badillo Salas

Email: badillo.soft@hotmail.com

Twitter: @badillosoft

Github: https://github.com/badillosoft/C

## Introducción

__C__ es un lenguaje de bajo-medio nivel tipado y compilado lo que significa que
es capaz de manipular la memoria del sistema operativo directamente entre otras
cosas y cada valor almacenado tiene un tipo de dato asociado que no se puede
cambiar. El que sea compilado significa que la computadora no puede entender
el código del programa y necesita de un compilador que traduzca el código fuente
a código máquina, este proceso se llama compilación.

El siguiente programa imprime en pantalla (salida estándar) `Hola mundo` y se
considera un programa completo en _C_.

> _hola.c_ - Imprime `Hola mundo` en la salida estándar 

~~~c
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Hola mundo");
    return 0;
}
~~~

Para compilar el código debemos escribir en una terminal:

~~~bash
$ gcc hola.c -o hola.bin
~~~

Lo que hace `gcc` es traducir el archivo `hola.c` y crear un archivo ejecutable `hola.bin`.  

# Parte I - Variables y Control de Flujo

## I.1 Variables

Las variables son espacios donde podemos guardar valores. En _C_ las variables
tienen asociado un tipo de dato. Los más comunes son:

* Número enteros: **int**
* Número decimal sencillo (flotante): **float**
* Número decimal doble: **double**
* Cáracter: **char**

La sintaxis es la siguiente:

Declaración sencilla: `tipo nombre;`

Asignación: `nombre = valor;`

Declaración compuesta: `tipo nombre = valor;`

Declaración multiple: `tipo nombre1, nombre2 = valor2, nombre3, ...;`

## I.2 Control de flujo

El flujo de un programa es la secuencia de instrucciones que
va siguiendo la computadora linea por linea, sin embargo, existen
estructuras que nos permiten cambiar el flujo de nuestro programa.

### I.2.1 Condicionales

Dentro de las estructuras condicionales encontramos __if__ y __switch__ estas
estructuras nos permitirán ejecutar un bloque de código cuando se cumpla
una condición.

> Estructura _if_

~~~c
if (condición) {
    // Bloque a ejecutar si se cumple la condición
}
~~~

En la estructura _if_ podemos ejecutar un bloque si cierta condición no se cumple,
a esto se le conoce como el __sino__ de la condición.

> Estructura _if-else_

~~~c
if (condición) {
    // Bloque a ejecutar si se cumple la condición
} else {
    // Bloque a ejecutar SINO se cuample la condición
}
~~~

Además de estas dos opciones las sentencias _if_ pueden ser anidadas para controlar
un conjunto de varias condiciones.

> Estructura _if-else-if_

~~~c
if (condición) {
    // Bloque a ejecutar si se cumple la condición
} else if (condición2) {
    // Bloque a ejecutar si se cumple la condición2
} else if (condición3) {
    // Bloque a ejecutar si se cumple la condición3
} else if (condiciónN) {
    // Bloque a ejecutar si se cumple la condiciónN
} else {
    // Bloque a ejecutar SINO se cuample ninguna condición anterior
}
~~~

Existe una estructura más compacta para sustituir a __if-else-if__ está estructura
es llamada selector de casos __switch-case__.

> Estructura _switch-case_

~~~c
switch (variable) {
    case valor1:
        // Bloque a ejecutar si la variable tiene el valor 1
        break;
    case valor2:
        // Bloque a ejecutar si la variable tiene el valor 2
        break;
    case valorN:
        // Bloque a ejecutar si la variable tiene el valor N
        break;
    default:
        // Bloque a ejecutar SINO se cuample ninguna condición anterior
        break;
}
~~~

### I.2.2 Ciclos o Bucles

Los ciclos o bucles es un flujo que se repite mediante una condición, existen dos estructuras
elementales para repetir un bloque de código. La estructura __for__ nos permite repetir un bloque
utilizando una variable que cuente la iteración actual del ciclo, esta estructura es útil
para repetir ciclos de una forma determinada tantas veces.

La estructura __while__ representa una repetición determinada por una condición, mientras
la condición se cumpla el ciclo se repetirá indeterminadamente, si no tenemos cuidado
podríamos hacer que nuestro programa se quede ejectundo cosas por siempre.

> Estructura _for_

~~~c
int contador;
for (contador = 1; contador <= 10; contador++) {
    printf("%d ", contador);
}
~~~

El código anterior imprime los números `1 2 3 4 5 6 7 8 9 10`. Como podemos
observar el _for_ se divide en 3 procesos al declararse y son:

1. Asignación del contador: Asignamos al contador a algún valor `contador = 1`
2. Condición de paro: Definimos una condición para que el bloque se este repitiendo
mientras la condición se cumpla, en este caso la condición depende del contador `contador <= 10`
3. Incremento: Incrementamos o decrementamos el contador para que posea un nuevo valor para
el siguiente ciclo. En este caso lo estamos incrementando una unidad `contador++`

Los 3 procesos se separan por `;`.

> Estructura _while_

~~~c
while (condición) {
    // Bloque a repetir mientras la condición se cumpla
}
~~~ 

Una variación de la estructura _while_ nos permitirá ejecutar el bloque al menos una vez
y luego preguntarse por la condición, a esta estructura se le conoce como __do-while__.

> Estructura _do-while_

~~~c
do {
    // Bloque a repetir mientras la condición se cumpla
} while (condición);
~~~ 

Observa que la condición ahora está abajo y finaliza en `;`.

## I.3 Problemas

A continuación se listarán algunos problemas y ejercicios en orden creciente
de dificultad.

### Problema 1

Crear una variable de tipo entero llamada `edad` que contenga el valor 18.

### Problema 2

El siguiente programa lee un número entero desde la entrada estándar (el teclado):

~~~c
#include <stdio.h>

int main() {
    int a;
    
    printf("Dame un numero:> ");
    scanf("%d", &a);
    
    return 0;
}
~~~

Modificar el código anterior de la siguiente forma: Leer un entero desde la entrada
estándar y guardarlo en una variable llamada `edad`. Luego _si edad es mayor o igual a 18_
imprimir `Puede entrar al bar`, _sino_ imprimir `No puede entrar al bar por ser menor de edad`.

### Problema 3

Mostrar en la pantalla el siguiente menú de opciones:

1. Calcular la suma de dos números
2. Calcular la multiplicación de dos números
3. Calcular el mayor de dos números
4. Salir

Después de mostrar el menú el programa deberá leer un entero desde la entrada estándar
y guardarlo en la variable `opcion`. Deberá repetir el programa indeterminadamente hasta que
la opción sea 4. Para romper un ciclo deberá escribir `break`, esto automáticamente sacará
del ciclo al programa.

Si la condición es menor a 0 o mayor a 4 deberá imprimir que la opción no es válida.

> __Hint__: Utilizar un do-while para muestre el menú al menos una vez.

### Problema 4

Extender el código del problema anterior para que cuando la opción sea 1, el programa
solicite dos números e imprima la suma de ellos. Similarmente programar las opciones 2 y 3
del menú.

Recuerde limpiar la pantalla con `system("cls");` en _windows_ o `system("clear")` en _unix_.
También haga pausas de ser necesario con `getch();`.

### Problema 5

Se requiere un programa que cuente cuantos números multiplos de 2 o multiplos de 3 existen del
1 al 100. Para determinar si un número es multiplo de dos hacemos `n % 2 == 0` es decir que si
un número _n_ es multiplo de 2 entonces su residuo a 2 será 0. Para determinar si un número
es multiplo de 3 es similar `n % 3 == 0`.

> Hint: Se necesita crear una variable que guarde la cuenta de los que cumplen ser multiplos
de 2 o multiplos de 3.

> Hint: Para evaluar dos condiciones que se cumpla una u otra hacemos por ejemplo
`if (condición1 || condición2) { ... }`.