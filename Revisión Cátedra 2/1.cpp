#include <iostream>
#include <vector>

using namespace std;

void reemplazar(string &, string, string);

int main()
{
  string cadena = "hola mundo";
  reemplazar(cadena, "hola", "bienvenido");
  cout << cadena << endl;

  reemplazar(cadena, "mundo", "universo");
  cout << cadena << endl;

  reemplazar(cadena, "venido", "aventurado");
  cout << cadena << endl;

  return 0;
}

void reemplazar(string &cadena, string busqueda, string reemplazo) {
  // Verifica si la palabra buscada es igual o parte de la cadena actual
  int pos = cadena.find(busqueda);
  // Si existe, se reemplaza por la nueva palabra
  if(pos != string::npos) {
    // Reemplaza a partir de la posición encontrada
    cadena.replace(pos, busqueda.size(), reemplazo);
  }
}
