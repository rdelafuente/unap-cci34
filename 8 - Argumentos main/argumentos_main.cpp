#include <iostream>

using namespace std;

/**
 * Main con argumentos opcionales
 *
 * @param int     argc  Cantidad de argumentos presentes
 * @param char**  argv  Vector de parámetros char*
 *
 * @return int
 */
int main(int argc, char* argv[])
{
  // Argumentos entregados para la ejecución del programa
  cout << "Existe(n) " << argc << " argumento(s):" << endl;

  // Itera e imprime los parámetros extras
  for (int i = 0; i < argc; ++i) {
    cout << argv[i] << endl;

    /*
    // Verifica si existe el argumento "-edad"
    // Si existe, obtiene el argumento siguiente (en la posición i+1)
    // y lo transforma a entero utilizando la función atoi()
    if(strcmp(argv[i], "-edad") == 0) {
      int edad = atoi(argv[i + 1]);
      cout << edad << endl;
    }
    */
  }

  return 0;
}
