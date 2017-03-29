/**
 * Ejemplos de funciones matemáticas
 *
 * Más info en: http://www.cplusplus.com/reference/cmath/
 */

#include <iostream>
#include <cmath> // Directiva para incluir las funciones matemáticas

using namespace std;

int main()
{
  double num = 120;
  const double PI = 3.1416;

  // Coseno
  cout << "cos(" << num << ") = " << cos(num) << endl;

  // Seno
  cout << "sin(" << num << ") = " << sin(num) << endl;

  // Tangente
  cout << "tan(" << num << ") = " << tan(num) << endl;

  // Logaritmo natural
  cout << "log(" << num << ") = " << log(num) << endl;

  // Logaritmo común (base 10)
  cout << "log10(" << num << ") = " << log10(num) << endl;

  // Hipotenusa (lado mayor de un triángulo rectángulo, opuesto al ángulo recto)
  // Se define como la raíz cuadra de las suma de cuadrados de los parámetros entregados)
  // h = sqrt(3^2 + 4^2)
  cout << "hypot(3, 4) = " << hypot(3, 4) << endl;

  // Raíz cuadrada
  cout << "sqrt(" << num << ") = " << sqrt(num) << endl;

  // Raíz cúbica
  cout << "cbrt(" << num << ") = " << cbrt(num) << endl;

  // Número entero absoluto (retorna siempre un número positivo)
  cout << "abs(" << -10 << ") = " << abs(-10) << endl;

  // Número decimal absoluto (retorna siempre un número positivo)
  cout << "fabs(" << -num << ") = " << fabs(-num) << endl;

  /* round() v/s ceil() v/s floor() */

  // Redondea al entero más cercano (tomando en cuenta la parte decimal)
  cout << "round(" << PI << ") = " << round(PI) << endl;
  cout << "round(" << 3.5 << ") = " << round(3.5) << endl;
  // Redondea al entero más bajo (redondea hacia abajo)
  cout << "floor(" << PI << ") = " << floor(PI) << endl;
  // Redondea al entero más alto (redondea hacia arriba)
  cout << "ceil(" << PI << ") = " << ceil(PI) << endl;

  return 0;
}
