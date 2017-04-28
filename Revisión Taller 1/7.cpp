#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>

using namespace std;

int main(int argc, char** argv)
{
  // Obtiene el primer parámetro desde la consola
  // Si la conversión de char* a int falla, cantidad queda en 0
  int cantidad = atoi(argv[1]);

  // Obtiene el segundo parámetro desde la consola
  char* nombreArchivo = argv[2];

  // Validamos que cantidad sea mayor a 0
  if(cantidad > 0) {

    // Abre el archivo para su creación
    ofstream archivo;
    archivo.open(nombreArchivo, ios::trunc);

    // También se puede abrir así
    //ofstream archivo(nombreArchivo, ios::trunc);

    // Setea la semilla aleatoria en base a la estampilla de tiempo
    srand(time(0));

    // Verificamos que el archivo esté abierto
    if(archivo.is_open()) {
      // Agrega i veces los números aleatoreos al archivo
      for(int i = 1; i <= cantidad; i++) {
        archivo << rand() << endl;
      }
    } else {
      cout << "El archivo no pudo ser creado." << endl;
    }
  } else {
    cout << "Especifique un numero mayor a 0." << endl;
  }

  return 0;
}
