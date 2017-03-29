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
int main(int argc, char** argv)
{
  // Argumentos entregados para la ejecución del programa
  cout << "Existe(n) " << argc << " argumento(s):" << endl;

  // Itera e imprime los parámetros extras
  for (int i = 0; i < argc; ++i) {
    cout << argv[i] << endl;
  }

  return 0;
}
