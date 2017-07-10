#include <iostream>

using namespace std;

int suma(int n);
long producto(int n, int m);
void binario(int n);

int main()
{

  // Sumatoria de n números naturales
  // 1 + 2 + 3 + 4 + 5 + 6 + ... + n

  // Invertir número
  // 123 -> 321 (reducir número dividiendo por 10 si n > 10). Imprimir con %10)

  // Representación binaria de un número
  // 10 -> 1010 (reducir número diviendo por 2 si n > 1 . Imprimir con %2)

  // Sucesión de términos
  // 1, 1/2, 1/3, 1/4, 1/5, 1/6, ...

  // Producto de 2 números
  // 12 * 3

  binario(22);
  cout << endl;

  return 0;
}

int suma(int n) {
  if(n == 1) return 1;
  return n + suma(n - 1);
}

long producto(int n, int m){
    if(n == 0 || m == 0) return 0;
    if(n == 1) return m;
    if(m == 1) return n;

    return n + producto(n, m - 1);
}

void binario(int n) {
  if(n > 1) binario(n / 2);
  cout << n % 2;
}
