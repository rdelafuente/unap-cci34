#include <iostream>

using namespace std;

int main()
{

  cout << endl;
  cout << "----------------------" << endl;
  cout << "OPERADORES ARITMÉTICOS" << endl;
  cout << "----------------------" << endl;
  cout << endl;

  int a = 10, b = 2;
  int suma = a + b; // 12
  int resta = a - b; // 8
  int multiplicacion = a * b; // 20
  int division = a / b; // 5
  int mod = a % 2; // 0

  cout << "Suma: " << suma << endl;
  cout << "Resta: " << resta << endl;
  cout << "Multiplicación: " << multiplicacion << endl;
  cout << "División: " << division << endl;
  cout << "Mod: " << mod << endl;


  cout << endl;
  cout << "--------------------------------------" << endl;
  cout << "OPERADORES DE ASIGNACIÓN DE COMPUESTOS" << endl;
  cout << "--------------------------------------" << endl;
  cout << endl;

  a += 2; // a = a + 2
  cout << "Resultado de a +=2 : " << a << endl; // 12

  a -= 2; // es igual que escribir a = a - 2
  cout << "Resultado de a -=2 : " << a << endl; // 10

  a *= 2; // es igual que escribir a = a * 2
  cout << "Resultado de a *=2 : " << a << endl; // 20

  a /= 2; // es igual que escribir a = a / 2
  cout << "Resultado de a /=2 : " << a << endl; // 10

  a %= 2; // es igual que escribir a = a % 2
  cout << "Resultado de a %=2 : " << a << endl; // 0


  cout << endl;
  cout << "-------------------------------------" << endl;
  cout << "OPERADORES DE INCREMENTO Y DECREMENTO" << endl;
  cout << "-------------------------------------" << endl;
  cout << endl;

  cout << "Valor de a = " << a << endl;

  a++; // Incrementa el valor en 1. Equivalente a escribir a = a + 1 ó a += 1
  cout << "Resultado de a++ : " << a << endl; // 1

  a--; // Decrementa el valor en 1. Equivalente a escribir a = a - 1 ó a -= 1
  cout << "Resultado de a-- : " << a << endl; // 0

  ++a; // Idem al anterior.
  cout << "Resultado de ++a : " << a << endl; // 1

  --a; // Idem al anterior
  cout << "Resultado de --a : " << a << endl; // 0

  // Ojo, el orden de los operadores de incremento o decremento pueden alterar
  // el resultado de una operación o asignación. Veamos un ejemplo:

  int x = 2;
  cout << endl;
  cout << "Valor inicial de x = " << x << endl;

  int y = x++; // En esta línea el valor de y es 2, no 3. Asigna y luego incrementa
  cout << "Valor inicial de y = " << y << endl;

  int z = ++x; // Aquí el valor de z es 4. Incrementa y luego asigna
  cout << "Valor inicial de z = " << z << endl;

  // ¿Por qué?
  // Cuando el caracter de incremento o decremento se encuentra a la derecha
  // el valor se incrementa después de la asignación. Cuando se encuentra a la
  // izquierda, primero se incrementa el valor y luego se asigna.
  // Veamos un ejemplo más claro desglosando las operaciones anteriores:

  // int x = 2;
  // int y = x; --> y = 2
  // x = x + 1; --> x = 3

  // x = x + 1;
  // z = x; --> x = 4


  cout << endl;
  cout << "----------------------------------------" << endl;
  cout << "OPERADORES RELACIONALES Y DE COMPARACIÓN" << endl;
  cout << "----------------------------------------" << endl;
  cout << endl;

  int var1 = 10;
  int var2 = 20;

  // Creación de variables booleanas en base a compración de enteros
  // utilizando operadores de comparación

  bool esIgual = var1 == var2; // false
  bool noEsIgual = var1 != var2; // true
  bool esMayor = var1 > var2; // false
  bool esMenor = var1 < var2; // true
  bool esMayorIgual = var1 >= var2; // false
  bool esMenorIgual = var1 <= var2; // true

  cout << "bool esIgual = " << (esIgual ? "true" : "false") << endl;
  cout << "bool noEsIgual = " << (noEsIgual ? "true" : "false") << endl;
  cout << "bool esMayor = " << (esMayor ? "true" : "false") << endl;
  cout << "bool esMenor = " << (esMenor ? "true" : "false") << endl;
  cout << "bool esMayorIgual = " << (esMayorIgual ? "true" : "false") << endl;
  cout << "bool esMenorIgual = " << (esMenorIgual ? "true" : "false") << endl;

  // ¿Qué signfica esto?
  // esIgual ? "true" : "false"
  // Se llaman condiciones ternarias. Las estudiaremos en el próximo capítulo :)

  cout << endl;
  cout << "------------------" << endl;
  cout << "OPERADORES LÓGICOS" << endl;
  cout << "------------------" << endl;
  cout << endl;

  bool condicion1 = true;
  bool condicion2 = false;

  // && = AND
  if(condicion1 && condicion2) {
    cout << "Ambas variables son true." << endl;
  } else {
    cout << "Al menos una variable es false." << endl;
  }

  // || = OR
  if(condicion1 || condicion2) {
    cout << "Al menos una de las variables es true." << endl;
  }

  // Nótese el operador ! frente a condicion2.
  // Su función es negar una variable o condición, cambiándole el valor
  // de true a false o viceversa
  if(condicion1 && !condicion2) {
    cout << "!condicion2 se evalua como true." << endl;
  }

  if(!false) {
    cout << "¡Es verdadero!" << endl;
  }

  return 0;
}
