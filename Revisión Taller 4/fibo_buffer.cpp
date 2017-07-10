#include <iostream>
#include <vector>

using namespace std;

vector<long long> buffer;

long long fibo(int n);
long long fibo_buffer(int n);

int main()
{
  // Elementos iniciales de la sucesión
  buffer.push_back(1); // n = 1
  buffer.push_back(1); // n = 2
  buffer.push_back(2); // n = 3

  // 1, 1, 2, 3, 5, 8, etc...
  int n = 10;
  cout << "Fibo(" << n << ") = " << endl;

  cout << fibo_buffer(n) << endl;
  //cout << fibo(n) << endl;

  return 0;
}

long long fibo(int n) {
	if(n < 0) return 0;
	if(n == 0 || n == 1 || n == 2) return 1;
  if(n == 3) return 2; // Pequeña mejora

  return fibo(n - 1) + fibo(n - 2);
}

long long fibo_buffer(int n) {
	if(n < 0) return 0;

  // Estas condiciones no son necesarias, ya que están dentro del buffer
  //if(n == 0 || n == 1 || n == 2) return 1;
  //if(n == 3) return 2; // Pequeña mejora

  else {
    long long n1, n2;

    // ¿Existe el término (n - 1) en el vector?
    if(n - 2 < buffer.size()) {
      //cout << "Obteniendo término " << n - 1 << " de buffer[" << n - 2 << "]" << endl;
      n1 = buffer.at(n - 2);
      //cout << "buffer[" << n - 2 << "] = " << n1 << endl;
      cout << endl;
    } else {
      //cout << ">>> Calculando de forma recursiva Fibo(" << n - 1 << ")" << endl;
      n1 = fibo_buffer(n - 1);
      buffer.push_back(n1);
      //cout << ">>> Término calculado Fibo(" << n - 1 << ") = " << n1 << endl;
    }

    // ¿Existe el término (n - 2) en el vector?
    if(n - 3 < buffer.size()) {
      //cout << "Obteniendo término " << n - 2 << " de buffer[" << n - 3 << "]" << endl;
      n2 = buffer.at(n - 3);
      //cout << "buffer[" << n - 3 << "] = " << n2 << endl;
      cout << endl;
    } else {
      //cout << ">>> Calculando de forma recursiva Fibo(" << n - 2 << ")" << endl;
      n2 = fibo_buffer(n - 2);
      buffer.push_back(n2);
      //cout << ">>> Término calculado Fibo(" << n - 2 << ") = " << n2 << endl;
    }

    return n1 + n2;
  }

}
