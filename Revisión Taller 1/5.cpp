#include <iostream>

using namespace std;

bool esPrimo(int);
void divisores(int);

int main() {
  int numero;
  cout << "Ingrese un número: ";
  cin >> numero;

  cout << "Es primo: " << (esPrimo(numero) ? "SI" : "NO") << endl;
  cout << "Divisores: ";
  divisores(numero);

  cout << endl;

  return 0;
}

/**
 * Verifica si un número es primo
 *
 * @param int numero
 *
 * @return bool
 */
bool esPrimo(int numero) {
  // Primo = Divisible por 1 y por si mismo
  // Iteramos, sin tomar en cuenta el 1 y el número entregado
  for(int i = 2; i < numero; i++) {
    if(numero % i == 0) {
      return false;
    }
  }

  // Por defecto asumimos que es primo
  return true;
}

/**
 * Calcula los divisores de un número a través del operador %
 *
 * @param int numero
 */
void divisores(int numero) {
  for(int i = 1; i <= numero; i++) {
    if(numero % i == 0) {
      cout << i << " ";
    }
  }
}
