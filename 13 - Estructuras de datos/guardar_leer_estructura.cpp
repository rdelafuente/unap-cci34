#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct product_t {
  int id;
  string nombre;
  double precio;
};

void crearArchivo(string nombreArchivo, product_t p);
product_t leerArchivo(string nombreArchivo);
void imprimirProducto(product_t p);

int main()
{
  product_t p1;

  p1.id = 1;
  p1.nombre = "Mi producto";
  p1.precio = 150.45;

  crearArchivo("producto.data", p1);

  product_t p2;
  p2 = leerArchivo("producto.data");

  imprimirProducto(p2);

  return 0;
}

void crearArchivo(string nombreArchivo, product_t p) {
  ofstream archivoSalida(nombreArchivo.c_str(), ios::binary | ios::trunc);
  if(archivoSalida.is_open()) {
    archivoSalida.write((char*)&p, sizeof(p));
    archivoSalida.close();
  } else {
    cerr << "El archivo no pudo ser creado." << endl;
  }
}

product_t leerArchivo(string nombreArchivo) {
  product_t tmp;
  ifstream archivoEntrada(nombreArchivo.c_str(), ios::binary);
  if(archivoEntrada.is_open()) {
    archivoEntrada.read((char*)&tmp, sizeof(tmp));
    archivoEntrada.close();
  } else {
    cerr << "El archivo no pudo ser leido." << endl;
  }

  return tmp;
}

void imprimirProducto(product_t p) {
  cout << p.id << endl;
  cout << p.nombre << endl;
  cout << p.precio << endl;
}
