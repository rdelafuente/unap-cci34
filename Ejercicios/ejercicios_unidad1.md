# Ejercicios de C++

### Uso de variables, funciones y flujos de control

- Calcular la suma, resta, división y multiplicación de 2 números.
  - Validar divisiones por 0.
  - Utilice al menos 2 sobrecargas de función.

- Calcular el perímetro y área de un circulo de radio $r$. Utilice funciones para el cálculo.
  > - Perímetro: $2πr$
  > - Área: $πr^2$

- Calcular el perímetro y área de un triángulo isósceles de lados $a$ y $b$. Utilice funciones para el cálculo.
  > - Perímetro: $2a + b$
  > - Área: $b * h/2$, con $h = \sqrt{a^2 - b^2/4}$

- Verificar si un número entregado por teclado es par o impar.
  > - Utilizar operador mod `%`.

- Verificar si un número entregado por teclado es primo.
  > - Un número se considera primo sólo si es divisible por si mismo (y uno).
  > - Utilizar operador mod `%`.

- Calcular los divisores para un número entregado por teclado.
  > - Utilizar ciclo `while` y operador mod `%`.

- Calcular $\sum\limits_{i=1}^n (2i - 1)^3$, hasta $n=10$.
  > - No olvidar incluir la directiva `<cmath>`.
  > - Para calcular potencias, utilizar la función `pow(número, potencia)`.

- Calcular $\sum\limits_{i=-10}^n \sqrt{i^4 - i^2} + \ln|2i + 1|$, hasta $n=-15$
  > - La raíz cuadrada se calcula con la función `sqrt(...)`.
  > - El logaritmo natural se calcula con la función `log(...)`.
  > - El logaritmo común (base 10), se calcula con la función `log10(...)`.
  > - El valor absoluto se calcula utilizando la función `abs(...)` o `fabs(...)`.

## Manejo de caracteres (estilo C)

- Dada dos variables del tipo char: `char a[] = "Hola"` y `char b[] = "Mundo"`, realice las siguientes operaciones:

  - Contar el número de caracteres utilizando `strlen(...)`.

  - Comparar ambas variables y mostrar por pantalla cuál es mayor. Utilizar `strcmp(...)`.

  - Unir ambas palabras y almacenar el resultado en la variable `char* c`. Utilizar `strcat(...)`.

  - Imprimir número de vocales presentes en `char* c`. Debe **iterar** sobre `c`.
    > - Utilizar "for range". Disponible sólo al compilar con `-std=c++11`.

  - Imprimir el caracter ubicado en la posición 9. ¿Qué arroja la salida? ¿Por qué?


## Manejo de archivos

#### _Próximamente... =)_
