#include <iostream>

using namespace std;

void llenar_arreglo(int a[], int tamanio, int& elem_usados);
void ordenar(int a[], int elem_usados);
int posicion_del_menor(const int a[], int pos_inicio, int elem_usados);
void intercambiar_valores(int& valor1, int& valor2);

int main()
{
  const unsigned short MAX = 10;
  int arreglo[MAX];
  int elem_usados = 0;

  llenar_arreglo(arreglo, MAX, elem_usados);
  ordenar(arreglo, elem_usados);

  cout << "De menor a mayor" << endl;
  for(int i = 0; i < elem_usados; i++) {
    cout << arreglo[i] << " ";
  }
  cout << endl;

  return 0;
}

/**
 * Llena un arreglo con los elementos ingresados desde el teclado.
 * El ingreso de un número negativo puede marcar el final de la lista.
 *
 * @param int tamanio Tamaño del arreglo a.
 * @param int& elem_usados Número de elementos dentro del arreglo.
 */
void llenar_arreglo(int a[], int tamanio, int& elem_usados) {
  cout << "Ingrese los valores para el arreglo. Ingrese un numero negativo para terminar." << endl;
  signed int valor;
  int i = 0;

  cout << "a[" << i << "] = ";
  cin >> valor;
  // Sigue pidiendo valores mientras sea positivo y existan espacios en el arreglo
  while(valor >= 0 && i < tamanio) {
    // Asigna el valor
    a[i] = valor;
    i++;
    // Solicita el siguiente valor
    if(i < tamanio) {
      cout << "a[" << i << "] = ";
      cin >> valor;
    }
  }

  elem_usados = i;
}

/**
 * Ordena los elementos del arreglo.
 *
 * @param int a[] Arreglo a ordenar.
 * @param int elem_usados Número de elementos dentro del arreglo.
 */
void ordenar(int a[], int elem_usados) {
  int pos_siguiente_menor;
  for(int i = 0; i < elem_usados; i++) {
    //pos_siguiente_menor = posicion_del_menor(a, i, elem_usados);
    intercambiar_valores(a[i], a[pos_siguiente_menor]);
  }
}

/**
 * Intercambia dos valores. El valor1 pasa al valor2 y viceversa.
 *
 * @param int& valor1
 * @param int& valor2
 */
void intercambiar_valores(int& valor1, int& valor2) {
  int temp;
  temp = valor1;
  valor1 = valor2;
  valor2 = temp;
}

/**
 * Obtiene y retorna la posición del menor elemento dentro del arreglo,
 * comenzando en pos_inicio.
 *
 * @param const int a[] Arreglo.
 * @param int pos_inicio Posición de partida.
 * @param int elem_usados Número de elementos dentro del arreglo.
 */
int posicion_del_menor(const int a[], int pos_inicio, int elem_usados) {
  // Por defecto el menor elemento es el de partida
  int min = a[pos_inicio];
  // Por defecto, la posición del menor elemento es la de partida
  int pos_menor = pos_inicio;
  // Itera
  for(int i = pos_inicio; i < elem_usados; i++) {
    // Verifica si existe algún otro valor menor al actual
    if(a[i] < min) {
      min = a[i];
      pos_menor = i;
    }
  }

  // Retorna la posición del menor
  return pos_menor;
}
