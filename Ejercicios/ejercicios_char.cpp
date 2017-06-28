#include <iostream>

using namespace std;

int main()
{
  /* Unidad 1 - Manejor de caracteres (estilo C) */

  // Ejercicio 1
  // ...
  
  // Ejercicio 2
  char teclado[7] = "qwerty";
  char* pch = strchr(teclado, 'q');
  strncpy(pch, "a", 1);
  pch = strchr(teclado, 'w');
  strncpy(pch, "z", 1);
  cout << teclado << endl;

  // Ejercicio 3
  char mensaje[11] = "Hola Mundo";
  char* pch2 = strstr(mensaje, "Mundo");
  strncpy(pch2, "World", 5);
  cout << mensaje << endl;

  return 0;
}
