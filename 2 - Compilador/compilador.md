# Compilador


## ¿Qué es un compilador?


Las computadores sólo entienden un lenguaje, el cual consiste en una serie de
instrucciones de 0's y 1's. Este lenguaje se conoce como **lenguaje de máquina**.

Por ejemplo, una simple instrucción a una computadora podría verse así:

`00000	10011110`

Instrucciones más complejas podrían verse así:

```
00000	10011110
00001	11110100
00010	10011110
00011	11010100
00100	10111111
00101	00000000
```

Se hace notorio que programar de esta forma sería sumamente complejo y
susceptible a errores. Por esta razón nacen los **lenguajes de alto nivel**,
cuya finalidad es hacer que la programación sea mucho más amigable y sencilla
para los humanos.

Debido a que las computadoras sólo pueden entender _lenguaje de máquina_ y los
humanos sólo pueden entender _lenguajes de alto nivel_, en algún punto el
_lenguaje de alto nivel_ tendrá que ser _re-escrito_ (o _traducido_) a
_lenguaje de máquina_. Dicho proceso es realizado por el compilador.


```
Lenguaje de alto nivel --> Compilador --> Lenguaje de máquina
```

**C++ está diseñado para ser un lenguaje compilado**, lo que significa que al
ser traducido a _lenguaje de máquina_, puede ser interpretado directamente por
el sistema, haciendo que el programa generado sea **sumamente eficiente**.


## Compilando archivos C++


Para compilar un archivo con extensión `.cpp` utilizaremos el siguiente comando:

```
g++ nombre_archivo.cpp -o nombre_ejecutable
```

Con esta línea se instruye al programa `g++` compilar el archivo
`nombre_archivo.cpp` y generar su ejecutable bajo el nombre `nombre_ejecutable`.

> Nota: No es obligación utilizar un nombre o destino diferente para crear el
> archivo ejecutable.

<div class="page-break"></div>

Ej:

**Linux / OS X**
```
g++ test.cpp -o test
g++ test.cpp -o otro_nombre
g++ test.cpp -o /ruta/absoluta/test
g++ test.cpp -o ./ruta/relativa/test
```

**Windows**
```
g++ test.cpp -o test.exe
g++ test.cpp -o otro_nombre.exe
g++ test.cpp -o /ruta/absoluta/test.exe
g++ test.cpp -o ./ruta/relativa/test.exe
```

Para ejecutar el programa recientemente compilado se utiliza el siguiente comando:

**Linux / OS X**
```
./test
```

**Windows**
```
test.exe
```
