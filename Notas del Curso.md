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

# Parte II - Arreglos, Punteros y Estructuras

## II.1 Arreglos

Los arreglos son variables que permiten almacenar repetidamente valores de un mismo, accediendo a dichos
valores mediante un único nombre.

> Sintaxis `tipo nombre[tamaño];`

La sintaxis anterior se refiere a un arreglo de tamaño fijo lo que quiere decir que durante todo el programa
se reservará el espacio correspondiente para dicho arreglo.

Si queremos inicializar directamente el arreglo hacemos `tipo nombre[] = {valor0, valor1, ..., valorN}`, entonces
se creará el arreglo con el tamaño correspondiente y los valores dados.

Para acceder al valor del arreglo en un posición hacemos `valor = arraglo[indice];` donde el índice debe estar en
el rango válido desde 0 hasta el tamaño del arreglo menos 1.

Para calcular cuantos elementos se definieron en el arreglo hacemos `tamano = sizeof(arreglo) / sizeof(tipo);` es importante
dividir el valor entre el tamaño del tipo de dato. Esto hace que calcule los bytes reservados por el arreglo
entre los bytes que mide el tipo de dato.

Finalmente el siguiente código recorre el arreglo e imprime sus valores:

~~~c
int i;
for (i = 0; i < sizeof(arreglo) / sizeof(int); i++) {
    printf("%d ", arreglo[i]);
}
~~~ 

Lo mejor es guardar el tamaño del arreglo en una variable para no estarlo calculando a cada momento.

## II.2 Punteros

Un puntero es una variable que guarda la dirección de memoria de otra variable, esto significa que el valor
del puntero es una referencia en memoria a otra variable. La utilidad de los punteros reside en llamar a funciones
con paso de parámetros por referencia, crear estructuras con variables dinámicas y crear arreglos de tamaño dinámico.

Un puntero está asociado a un tipo de dato, por lo tanto no puede contener referencias a variables de otro tipo. El
puntero puede ser guardado a su vez en un doble puntero y así.

> Sintaxis: `tipo *nombre;`

> Declaración e inicialización: `tipo *nombre = &variable;`

Observemos que los punteros son igualados a `&variable`, esto significa en realidad que estamos accediendo a la dirección
de memoria de `variable`.

Podemos imprimir la dirección de memoria de una variable con `printf("%p", &variable)` equivalente a `printf("%p", puntero)`.

Para recuperar el valor de la variable referida al puntero hacemos `valor = *puntero;` esto hará que el puntero acceda
al valor guardado en la dirección de memoria que tiene asociada `puntero`.

Si queremos modificar el valor de la dirección de memoria asociada al puntero hacemos `*puntero = nevo_valor;` esto hace
que el puntero cambie el valor en la dirección de memoria que tiene asociada `puntero`;

> Ejemplo: Asociar al puntero la variable que tiene el número mayor.

~~~c
int a = 2, b = 8;

int *p; // Declaramos un puntero sin variable asociada

if (a > b) {
    p = &a; // Asociamos la dirección de `a` porque es el mayor
} else {
    p = &b; // Asociamos la dirección de `b` porque es el mayor
}

// Imprimimos el valor de la variable asociada a `p`, si `a` fuera mayor
// imprimiria el valor de `a`, si `b` fuera mayor imprimiria el valor de `b`  
printf("El numero mayor es %d", *p);
~~~

## II.3 Estructuras

Las estructuras son tipos de datos compuestos por otros datos ya existentes (o la misma estructura). Esto permite
que el usuario pueda definir sus propios tipos de datos complejos.

> Sintaxis

~~~c
struct Nombre {
    tipo1 nombre1;
    tipo2 nombre2;
    ...
    tipoN nombreN;
};
~~~

> Ejemplo: Contruimos una estructura llamada `Punto` la cual se compone de dos variables
de tipo entero `x` y `y`.

~~~c
struct Punto {
    int x;
    int y;
};
~~~

Para usar la estructura debemos declarar variables del tipo de la estructura.

> Sintaxis `struct Estructura variable;`

> Ejemplo: Creamos dos variables `p` y `q` del tipo `struct Punto`.

~~~c
struct Punto {
    int x;
    int y;
};

int main()  {
    struct Punto p;
    struct Punto q;
    
    return 0;
}
~~~

Para acceder a las variables dentro dentro de la estructura hacemos `estructura.variable = valor;` o
`valor = estructura.variable`;

> Ejemplo: Crear dos puntos `p` y `q`, asignarlos e imprimirlos.

~~~c
struct Punto p;
struct Punto q;

p.x = 10;
p.y = 20;

q.x = 2;
q.y = -8;

printf("P (%d, %d) ", p.x, p.y);
printf("Q (%d, %d) ", q.x, q.y);
~~~

## II.4 Aplicación de Estructuras y Punteros

Una _pila_ es una estructura de datos que nos permite ir acumulando variables, mejor dicho irlas apilando
como si se trataran de platos, la una _pila_ de platos va encimando uno tras otro y para recuperar un plato
de abajo tenemos que desapilar los de arriba. Entonces cada plato tiene referencia al plato superior a el.
El primer plato colocado se conoce como la cabeza y el último como la cola. Nosotros debemos tener siempre
referencia a la cola.

El siguiente código muestra una pila que acumula valores de tipo entero:

~~~c
struct Pila {
    int valor;
    struct Pila *siguiente;
};
~~~

El código anterior es de sintaxis fácil, pero entenderlo es un poco más complejo. Para entenderlos cambiemos
el nombre de `Pila` por el de `Caja`:

~~~c
struct Caja {
    int valor;
    struct Caja *siguiente;
};
~~~

Ahora queda más claro que definimos una estructura llamada `Caja`, la cual contiene un valor entero y la referencia
a otra caja mediante un puntero de tipo `Caja` llamado `siguiente`. Entonces vamos a tener una secuencia de cajas
relacionadas mediante punteros.

El siguiente código define 3 cajas y las relaciona manualmente:

~~~c
struct Caja c1; 
struct Caja c2; 
struct Caja c3;

c1.valor = 1;
c2.valor = 2;
c3.valor = 3;

c1.siguiente = &c2;
c2.siguiente = &c3;
c3.siguiente = NULL;
~~~

Observemos que creamos tres cajas `c1`, `c2` y `c3`, luego les asignamos un valor a cada caja.

Si las variables fueran declaradas como punteros debemos tener cuidado de utilizar el operador `->`, de lo contrario en lugar de hacer `c1->valor`, su equivalente sería lo siguiente: `c1->siguiente` es equivalente a `(*c1).siguiente`.

Observamos que la caja `c3` no tiene ninguna caja siguiente, esto significa que nuestra pila queda más o menos
así: [c1]->[c2]->[c3].

¿Qué necesitamos hacer para insertar una nueva caja? El siguiente código crea una nueva caja y la asocia a c3.

~~~c
struct Caja c4;

c4.valor = 4;
c4.siguiente = NULL;

c3.siguiente = &c4;
~~~

Observemos que ahora `c4` va a ser la caja sin caja `siguiente` y ahora la caja siguiente a `c3` es `c4`.

Los mismo sería para una caja `c5` pero ahora sustituyento `c3` por `c4`.

Entonces podemos generalizar este proceso llamado insertar caja. La siguiente función toma como primer
parámetro la última caja y como segundo parámetro el valor de la nueva caja a insertar y devuelve la
referencia a la nueva caja.

~~~c
struct Caja* insertar_caja(Caja *ultimaCaja, int valor) {
    struct Caja *nueva_caja = (struct Caja*)malloc(sizeof(struct Caja));
    
    nueva_caja->valor = valor;
    nueva_caja->siguiente = NULL;
    
    ultima_caja->siguiente = nueva_caja;
    
    return nueva_caja;
}
~~~

El siguiente código crea una caja y le inserta más cajas consecutivamente:

~~~c
Caja cabeza;

cabeza = 1;

Caja *ultima_caja = &cabeza;

ultima_caja = insertar_caja(ultima_caja, 2); // [1]->[2]->NULL

ultima_caja = insertar_caja(ultima_caja, 5); // [1]->[2]->[5]->NULL

ultima_caja = insertar_caja(ultima_caja, 8); // [1]->[2]->[5]->[8]->NULL

//...
~~~

El siguiente código imprime la pila de cajas de manera similar a lo que está comentado.

~~~c
void imprimir(struct Caja *c) {
	printf("[%d]->", c->valor);
	
	if (c->siguiente == NULL) {
		printf("NULL\n");
		return;
	}
	
	imprimir(c->siguiente);
}
~~~