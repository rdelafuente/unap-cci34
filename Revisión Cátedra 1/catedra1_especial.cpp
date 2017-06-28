#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

void tail(int n, char* nombreArchivo) {

  // Abre los archivos
  ifstream txt(nombreArchivo);
  fstream aux("aux.tmp", ios::out | ios::trunc);

  // Verifica que los archivos estén abiertos
  if(txt.is_open()) {

      string linea, reversa;

      // Lee el contenido archivo y lo almacena de forma inversa
      while(getline(txt, linea)) {
        reversa = linea + '\n' + reversa;
      }

      // Almacena el contenido inverso en un archivo auxiliar
      aux << reversa;
      aux.close();

      // Vuelve a abrir el archivo auxiliar para leer las primeras n líneas
      aux.open("aux.tmp", ios::in);
      int i = 1;
      while(getline(aux, linea)) {
        if(i <= n) {
          cout << linea + '\n';
        } else {
          break;
        }
        i++;
      }

      // Cierra los archivos
      txt.close();
      aux.close();
  } else {
    cerr << "El archivo " << nombreArchivo << " no existe." << endl;
  }
}

/**
 * Retorna la cantidad de caracteres presentes en una cadena de texto
 *
 * @param char * cadena
 *
 * @return unsigned int
 */
unsigned int mystrlen(char * cadena) {
  int i = 0;
  while(cadena[i] != '\0') {
    i++;
  }

  return i;
}


int main(int argc, char** argv)
{

  /**
   * Pregunta 1
   *
   * 1. float, double, long double. La principal diferencia entre ellos es la
   * la cantidad de decimales que pueden representar.
   *
   * 2. char se puede utilizar para trabajar con caracteres individuales.
   * (un)signed char se pueden utilizar para realizar operaciones aritméticas,
   * siempre y cuando los valores involucrados no excedan el tamaño máximo
   * permitido por estos tipos de datos.
   *
   * 3. Ocurre un cast implícito. El valor resultante puede ser diferente al original.
   *
   * 4. Una función es un grupo de sentencias que realizan una tarea específica.
   *
   * 5. La sobrecarga de funciones permite redefinir/redeclarar una
   * función bajo el mismo nombre, pero con diferente número o tipos de parámetros
   * e incluso un tipo de retorno distinto.
   *
   * 6. La directiva se llama <fstream>. Las clases que permiten manejar archivos
   * son:
   *  ifstream (read)
   *  ofstream (write)
   *  fstream (read/write)
   */

  /* Pregunta 2: mystrlen() */

  char cadena[100];
  cin.getline(cadena, sizeof(cadena));
  cout << "El largo de la cadena es: " << mystrlen(cadena) << endl;

  /* Pregunta 3: Comando tail */

  int líneas = atoi(argv[1]);
  char* nombreArchivo = argv[2];
  tail(líneas, nombreArchivo);

  return 0;
}
