#include <iostream>
#include <vector>

using namespace std;

bool desc(int, int);
void imprimir(vector<int>);

int main()
{

  int num[] = {11, 2, 8, 10, 56, 26, 5};
  // Inicialza el vector con los valores del array numeros, con tamaño 7
  vector<int> vec(num, num + 7);

  cout << "Capacidad del vector: " << vec.capacity() << endl;
  cout << "Tamaño del vector: " << vec.size() << endl;
  cout << endl;

  //vec.reserve(32);
  //vec.resize(10);

  cout << "Capacidad del vector: " << vec.capacity() << endl;
  cout << "Tamaño del vector: " << vec.size() << endl;
  cout << endl;

  imprimir(vec);

  // Ordena de menor a mayor, desde el inicio hasta el fin
  sort(vec.begin(), vec.end());
  imprimir(vec);

  // Ordena de mayor a menor, desde el inicio hasta el fin,
  // utilizando la función desc
  sort(vec.begin(), vec.end(), desc);
  imprimir(vec);

  return 0;
}

/**
 * Verifica si un numero es mayor o igual a otro
 *
 * @param int x
 * @param int y
 * @return bool
 */
bool desc(int x, int y) {
  return x >= y;
}

/**
 * Imprime el contenido de un vector utilizando iteradores
 * @param vector<int> v Vector a recorrer
 */
void imprimir(vector<int> v) {
  vector<int>::iterator it;
  for(it = v.begin(); it != v.end(); ++it) {
		cout << *it << " ";
	}
  cout << endl;
}
