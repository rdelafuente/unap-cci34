#include <iostream>
#include <cmath>

using namespace std;

int chrpos(char* cadena, char caracter, int offset = 0);

int main()
{
  char cadena[] = "Este es un ejemplo";
  cout << chrpos(cadena, 's') << endl;
  cout << chrpos(cadena, 's', 1) << endl;
  cout << chrpos(cadena, 'n', 3) << endl;
  cout << chrpos(cadena, 'o', -1) << endl;
  cout << chrpos(cadena, 'j', -1) << endl;
  cout << chrpos(cadena, 'n', -3) << endl;

  return 0;
}

/**
 * Obtiene la posición de un caracter dentro de la cadena en base a un offset
 *
 * @param  char* cadena   Texto donde se buscará el caracter
 * @param  char  caracter Caracter a buscar dentro de cadena
 * @param  int   offset   Posición desde donde se debe comenzar a buscar el caracter
 *
 * @return int
 */
int chrpos(char* cadena, char caracter, int offset) {
  int inicio = offset >= 0 ? offset : strlen(cadena) - abs(offset);
  int fin = offset >= 0 ? strlen(cadena) - 1 : 0;
  int aux = offset >= 0 ? 1 : -1;

  int i = inicio;
  do {
    // Caracter encontrado ?
    if(cadena[i] == caracter) {
      // Devuelve la posición en relación al offset especificado
      return offset >= 0 ? abs(i - offset) : abs(i - inicio);
    }
    // Incrementa o decrementa
    i += aux;
  } while(offset >= 0 ? (i <= fin) : (i >= fin));

  // Si no se encuentra, devuelve -1
  return -1;
}
