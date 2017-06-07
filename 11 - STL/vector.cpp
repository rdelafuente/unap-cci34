#include <iostream>
#include <vector> // Mas info en: http://www.cplusplus.com/reference/vector/vector/

using namespace std;

int main() {

	vector<int> vec;

	// Otras formas de inicializa un vector

	// Forma 1: Vector con tamaño para 20 elementos
	//vector<int> vec(10);

	// Forma 2: Vector inicializado a partir de arreglo primitivo de enteros
	//int arr[] = {10, 20, 30, 40};
  //vector<int> vec(arr, arr + 4);

	// Forma 3: Vector inicializado con 10 elementos, con valor inicial de 50
  //vector<int> vec(10, 50);

	// Iteradores para recorer el vector
	vector<int>::iterator it;
	vector<int>::reverse_iterator rit;

	// Llenamos todas las posiciones con el número 100.
	for(int i = 0; i < 10; ++i){
		vec.push_back(100 * i);
	}

	// Recorremos el vector de forma clásica.
	cout << "Recorrido normal..." << endl;
	for(int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << endl;

	// Recorremos el vector con iteradores.
  cout << "Recorrido con iterador..." << endl;
	for(it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// Recorremos el vector inverso de forma clasica.
  cout << "Recorrido inverso normal..." << endl;
  for(int i = vec.size() - 1; i >= 0; i--){
    cout << vec.at(i) << " ";
  }
  cout << endl;

  // Recorremos el vector inverso con iteradores.
  cout << "Recorrido inverso con iterador..." << endl;
  for(rit = vec.rbegin(); rit != vec.rend(); rit++) {
    cout << *rit << " ";
  }
  cout << endl;

	/** Otras funciones útiles **/

	// Cant. de elementos actuales en el vector
	cout << "Cant. de elementos en vec<int>: " << vec.size() << endl;
	// Capacidad actual del vector. Puede ser mayor a size()
	cout << "Capacidad actual de vec<int>: " <<  vec.capacity() << endl;

	// Obtiene el primer elemento del vector
	cout << "Primer elemento de vec<int>: " << vec.front() << endl;	// Equivalente a: vec.at(0);
	// Obtiene el último elemento del vector
	cout << "Último elemento de vec<int>: " << vec.back() << endl;	// Equivalente a: vec.at(vec.size() - 1);

	// Permite reservar espacio en memoria para almacenar elementos.
	// Esta función modifica la "capacidad" del vector.
	// Si la capcidad actual es mayor o igual al número que se está reservando, queda igual.
	// Si la capacidad actual es menor al número que se está reservando, se agranda la capacidad al número proporcionado.
	vec.reserve(20);
	cout << "Nueva capacidad de vec<int>: " <<  vec.capacity() << endl;

	// Redimensiona el tamaño (size) de vector al número proporcionado
	// Si hay más elementos, se eliminan
	vec.resize(4);
	cout << "Nueva cant. de elementos en vec<int>: " << vec.size() << endl;

	// Inserta el elemento 55 dos posiciones adelante del inicio
	vec.insert(vec.begin() + 2, 55);
	for(it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// Elimina todos los elementos del vector
	vec.clear();

	// Elimina elementos del vector, dentro del rango proporcionado
	vec.erase(vec.begin(), vec.end()); // Equivalente a vec.clear()

	// Diferentes formas de verificar si el vector está vacío
	if(vec.size() == 0) {
		cout << "vec<int> está vacío." << endl;
	}

	if(vec.empty()) {
		cout << "vec<int> está vacío." << endl;
	}

	return 0;
}
