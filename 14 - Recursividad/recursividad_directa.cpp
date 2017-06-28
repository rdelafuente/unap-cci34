#include <iostream>
#include <string>

using namespace std;

int fibonacci(int);
int factorial(int);
bool es_palindrome(int, int, const string &);
float potencia(float, int);

int main()
{
  int n;
  cout << "[Fibonacci] Ingrese la cantidad de números que desea generar: ";
  cin >> n;

  for(int i = 0; i < n; i++) {
    cout << fibonacci(i) << " ";
  }
  cout << endl;

  /*
  cout << "2! = " << factorial(3) << endl;
  cout << "6! = " << factorial(5) << endl;
  cout << "10! = " << factorial(10) << endl;

  string cadena = "somos o somos";
  cout << "La cadena '" << cadena << "' es palindrome? " << ( es_palindrome(0, cadena.size() - 1, cadena) ? "SI" : "NO" ) << endl;

  cout << "2^8 = " << potencia(2, 8) << endl;
  cout << "10^3 = " << potencia(10, 3) << endl;
  */
 
  return 0;
}

/**
 * Retorna la serie de Fibonacci.
 * Cada elementos es la suma de los dos anteriores.
 *
 * Ej: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, etc.
 *
 * @param  int n Número de elementos a generar.
 *
 * @return int
 */
int fibonacci(int n) {
  if(n < 0) return 0; // Condición de término
  if(n == 0 || n == 1) return 1; // Caso base

  return fibonacci(n - 1) + fibonacci(n - 2); // Recursividad
}

/**
 * Cálculo de factoriales.
 * n! = n * (n-1) * (n-2) * ... * 1
 *
 * @param  int n
 *
 * @return int
 */
int factorial(int n) {
  if(n < 0) return 0; // Condición de término
  else if(n > 1) return n * factorial(n - 1); // Recursividad

  return 1; // Caso base
}

/**
 * Verifica si una cadena es palíndromo. Versión recursiva.
 *
 * @param  int inicio
 * @param  int fin
 * @param  const string &cadena
 *
 * @return bool
 */
bool es_palindrome(int inicio, int fin, const string &cadena) {
    if(inicio >= fin) return true; // Condición de término
    if(cadena[inicio] != cadena[fin]) return false; // Condición de término

    return es_palindrome(++inicio, --fin, cadena); // Recursividad
}


/**
 * Calcula la potencia de un número. Versión recursiva.
 *
 * @param  float base
 * @param  float exp
 *
 * @return float
 */
float potencia(float base, int exp) {
  float res = 0;

  if (exp == 0) {
    res = 1.0;
  } else if (exp > 0) {
    res = base * potencia(base, exp - 1);
  } else if (exp < 0) {
    res= 1.0 / base * potencia(base, exp + 1);
  }

  return res;
}
