/**
 * Ejemplos de manejo de caracteres.
 *
 * Más info en: http://www.cplusplus.com/reference/cstring/
 *
 */
#include <iostream>

using namespace std;

int main()
{

  char s1[] = "Hola";
  char s2[] = "Mundo";
  // "Hola Mundo"

  cout << "Contenido de s1: " << s1 << endl;
  cout << "Contenido de s2: " << s2 << endl;

  // Copia el string s2 dentro de s1
  //strcpy(s1, s2);
  //cout << "\nCopiando s2 dentro de s1...\nContenido de s1: " << s1 << endl;

  // Concatena el string s2 al final de s1

  strcat(s1, " "); // s1 = mundo y s2 = mundo
  strcat(s1, s2);

  cout << "\nUniendo s2 al final de s1...\nContenido de s1: " << s1 << endl;

  // Retorna el largo de s1
  cout << "\nLargo de s1: " << strlen(s1) << endl;

  // Compara dos strings
  // Retorna:
  //  0: si son iguales
  //  menor a 0: si s1 < s2
  //  mayor a 0: si s1 > s2
  int cmp = strcmp(s1, s2);
  cout << "\nComparando s1 v/s s2..." << endl;
  if(cmp > 0) {
    cout << "La cadena s1 es mayor que s2" << endl;
  } else {
    cout << "La cadena s1 es menor que s2" << endl;
  }

  char c1[] = "hola";
  char c2[] = "hola";
  if(strcmp(c1, c2) == 0) {
    cout << "c1 es igual a c2" << endl;
  } else {
    cout << "c1 no es igual a c2" << endl;
  }

  // Retorna un puntero a la primera ocurrencia del caracter ch dentro del string s1
  char ch = 'o';
  cout << "\nContenido de s1 a partir de la primera aparición del caracter 'o' es: " << strchr(s1, ch) << endl;

  // Retorna un puntero a la primera ocurrencia del string s2 dentro del string s1
  cout << "\nContenido de s1 a partir de la primera aparición del texto \"do\" es: " << strstr(s1, "do") << endl;

  return 0;
}
