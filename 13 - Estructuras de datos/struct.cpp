#include <iostream>
#include <string>
#include <sstream> // Para convertir string a entero
#include <vector>

using namespace std;

/*

struct nombre_del_tipo {
  tipo_miembro1 nombre_variable_miembro1;
  tipo_miembro2 nombre_variable_miembro2;
  tipo_miembro2 nombre_variable_miembro2;
  ...
  ...
} nombre_de_objetos ;

*/

struct producto_t {
  int id;
  string nombre;
  double precio;
};

int main()
{

  // Declaramos 2 variables del tipo "producto"
  producto_t pc;
  producto_t notebook;

  // Para acceder a las variables miembros de la estructura
  // utilizamos el punto .

  cout << "Ingrese el ID para el producto PC : ";
  // Esta es una forma de convertir un stream del tipo
  // string a entero
  string tmp;
  getline(cin, tmp);
  (stringstream) tmp >> pc.id;

  cout << "Ingrese el nombre para el producto PC : ";
  getline(cin, pc.nombre);

  cout << "Ingrese el precio para el producto PC : ";
  cin >> pc.precio;

  notebook.id = 2;
  notebook.nombre = "Alienware";
  notebook.precio = 3500000;

  cout << pc.id << endl;
  cout << pc.nombre << endl;
  cout << pc.precio << endl;

  cout << notebook.id << endl;
  cout << notebook.nombre << endl;
  cout << notebook.precio << endl;

  return 0;
}
