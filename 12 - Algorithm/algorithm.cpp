#include <iostream>
#include <vector>
#include <algorithm> // Más info en: http://www.cplusplus.com/reference/algorithm/

using namespace std;

void imprimir(vector<int>);
bool desc(int, int);

int main()
{
  int numeros[] = {1, 1, 2, 3, 1, 5, 3, 5, 3};
  vector<int> vec(numeros, numeros + 9);

  /* min */

  cout << min(1, 10) << endl;

  /* max */

  cout << max(1, 10) << endl;

  /**
   * min_element(first, last)
   *
   * Devuele el valor máximo dentro del rango [first,last]
   * Esta función devuelve un iterador, se debe utilizar * para obtener el valor.
   */

  cout << "Valor mínimo en numeros[]: " << * (min_element(numeros, numeros + 9)) << endl;
  cout << "Valor mínimo en vec<int>: " << * (min_element(vec.begin(), vec.end())) << endl;

  /**
   * max_element(first, last)
   *
   * Devuele el valor máximo dentro del rango [first,last]
   * Esta función devuelve un iterador, se debe utilizar * para obtener el valor.
   */

  cout << "Valor máximo en numeros[]: " << * (max_element(numeros, numeros + 9)) << endl;
  cout << "Valor máximo en vec<int>: " << * (max_element(vec.begin(), vec.end())) << endl;

  /**
   * count(first, last, val)
   *
   * Cuenta las veces que aparece "val" dentro del rango [first,last]
   */

  cout << "El 1 aparece " << count(numeros, numeros + 9, 1) << " veces." << endl;
  cout << "El 5 aparece " << count(vec.begin(), vec.end(), 5) << " veces." << endl;

  /**
   * copy(first, last, result)
   *
   * Copia los elementos dentro del rango [first,last] dentro del rango
   * comenzando en "result"
   */

  int a1[] = {10, 20, 30, 40, 50, 60, 70};
  vector<int> v1(7);
  // Copia los valores desde la posición 0 a la 7 al comienzo del vector v1
  copy(a1, a1 + 7, v1.begin());
  imprimir(v1);

  /**
   * fill(first, last, val)
   *
   * Asigna el valor "val" a todos los dentro del rango [first, last]
   */

  vector<int> v2(10);
  // Llena el vector v2 con 1s desde la posición 0 a la 4
  fill(v2.begin(), v2.begin() + 5, 1);
  // Llena el vector v2 con 2s desde la posición 5 hasta el final
  fill(v2.begin() + 5, v2.end(), 2);
  imprimir(v2);

  /**
   * equal(first, last, first2)
   *
   * Comprueba que los valores dentro del rango [first, last] sean iguales
   * al rango comenando en first2
   */

  a1[3] = 81;
  if(equal(v1.begin(), v1.end(), a1)) {
    cout << "El contenido de v1 y a1 son iguales." << endl;
  } else {
    cout << "El contenido de v1 y a1 no son iguales." << endl;
  }

  /**
   * reverse(first, last)
   *
   * Revierte los valores dentro del rango [first, last]
   */

  reverse(v1.begin(), v1.end());
  imprimir(v1);

  /**
   * find(first, last, val)
   *
   * Retorna un iterador al primer elemento dentro del rango [first, last] que
   * sea igual a "val". Si no existe el elemento la función retorna un puntero
   * a last (última posición)
   */

   const short MAX = 4;
   int aux[MAX] = {10, 20, 30, 40};
   int *p;
   p = find(aux, aux + MAX, 30);

   if (*p == aux[MAX - 1] || p != aux + 4) {
     cout << "Elemento encontrado dentro de aux[]: " << *p << endl;
   } else {
     cout << "Elemento no encontrado." << endl;
   }

  /**
   * sort(first, last)
   *
   * Ordena los elementos dentro del rango [first, last] se forma ascendente.
   */

  sort(vec.begin(), vec.end()); // Ordena el vector
  sort(numeros, numeros + 9); // Ordena el array
  imprimir(vec);

  // Ordena el rango en forma descendente utilizando una función auxiliar
  sort(vec.begin(), vec.end(), desc);
  imprimir(vec);

  /**
   * binary_search(first, last, val)
   *
   * Retorna true si cualquier elemento dentro del rango [first, last] es
   * equivalente a "val". Retora false de lo contrario.
   *
   * IMPORTANTE: Para utilizr esta función, el rango debe estar en orden
  */

  if(binary_search(vec.begin(), vec.end(), 5)) {
    cout << "Valor encontrado dentro de vec<int>" << endl;
  } else {
    cout << "Valor no encontrado dentro de vec<int>" << endl;
  }


  return 0;
}

/**
 * Verifica si el primer valor es mayor o igual al segundo.
 *
 * @param int x Primer valor a comparar
 * @param int y Segundo valor a comparar
 * @return bool
 */
bool desc(int x, int y) {
  return x >= y;
}

/**
 * Imprime el contenido de un vector utilizando iteradores
 *
 * @param vector<int> v Vector a recorrer
 */
void imprimir(vector<int> v) {
  vector<int>::iterator it;
  for(it = v.begin(); it != v.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;
}
