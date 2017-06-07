#include <iostream>

using namespace std;

const unsigned short NUM = 8;
void llenar_arreglo(int x[NUM]);
int buscar_indice(int x[NUM], int y);

int main()
{
  int v[NUM];
  int valor_a_buscar = 0;

  llenar_arreglo(v);

  cout << "Ingrese el valor a buscar: ";
  cin >> valor_a_buscar;
  int pos = buscar_indice(v, valor_a_buscar);

  cout << "La posición del valor buscado es: " << pos << endl;

  return 0;
}

/**
 * Agrega NUM valores al arreglo.
 *
 * @param int x[] Vector en donde se agregan los valores
 */
void llenar_arreglo(int x[NUM]) {
  for(int i = 0; i < NUM; i++) {
    cout << "x[" << i << "] = ";
    cin >> x[i];
  }
}

/**
 * Retorna la posición dentro del vector del elemento buscado.
 *
 * @param  int x[] Vector en donde se buscará el valor
 * @param  int y Elemento a buscar
 * @return int Posición del elemento buscado. -1 si no lo encuentra
 */
int buscar_indice(int x[NUM], int y) {
  for(int i = 0; i < NUM; i++) {
    if(x[i] == y) return i;
  }

  return -1;
}
