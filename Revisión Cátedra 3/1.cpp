#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

struct producto_t {
	int id;
	string nombre;
	double precio;
	int stock;
};

const int MAX = 10;
producto_t productos[MAX];

void leer();
void guardar();
int buscar(int id);
void actualizar(int pos);

int main() {

	leer(); // Lee el archivo productos.bin y carga los datos en el arreglo productos

	int id = 5; // Id del producto a buscar

  // Verificamos que el producto con el ID especificado exista
  int pos = buscar(id);
  if(pos >= 0) {
	   actualizar(pos);
  } else {
    cerr << "El producto buscado no existe." << endl;
  }

	guardar(); // Guarda el arreglo en el archivo productos.bin

  return 0;
}

void leer() {
  ifstream archivo("productos.bin", ios::binary);
  if(archivo.is_open()) {
    archivo.read((char*) &productos, sizeof(productos));
  } else {
    cerr << "Archivo no encontrado para lectura" << endl;
  }
}

void guardar() {
  ofstream archivo("productos.bin", ios::binary | ios::trunc);
  if(archivo.is_open()) {
    archivo.write((char*) &productos, sizeof(productos));
  } else {
    cerr << "Archivo no encontrado no escritura." << endl;
  }
}

int buscar(int id) {
  for(int i = 0; i < MAX; i++) {
    if(productos[i].id == id) {
      return i;
    }
  }

  return -1;
}

void actualizar(int pos) {
  producto_t *pP = &(productos[pos]);
  cout << "Ingrese el nuevo nombre: ";
  getline(cin, pP->nombre);

  string tmp;
  cout << "Ingrese el nuevo precio: ";
  getline(cin, tmp);
  (stringstream) tmp >> pP->precio;

  cout << "Ingrese el nuevo stock: ";
  getline(cin, tmp);
  (stringstream) tmp >> pP->stock;
}
