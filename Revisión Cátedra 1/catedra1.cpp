#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

/**
 * Verifica si dos archivos son iguales o no
 *
 * @param char* nombreArchivo1 nommbre y extensión del archivo
 * @param char* nombreArchivo2 nommbre y extensión del archivo
 */
void diff(char* nombreArchivo1, char* nombreArchivo2) {

  // Abre los archivos
  ifstream txt1(nombreArchivo1);
  ifstream txt2(nombreArchivo2);

  // Verifica que los archivos estén abiertos
  if(txt1.is_open()) {
    if(txt2.is_open()) {

      string linea, contenido1, contenido2;

      // Lee el contenido del primer archivo
      while(getline(txt1, linea)) {
        contenido1 += linea;
      }

      // Lee el contenido del segundo archivo
      while(getline(txt2, linea)) {
        contenido2 += linea;
      }

      // Cierra los archivos
      txt1.close();
      txt2.close();

      // Verifica ambos contenidos
      if(contenido1.compare(contenido2) == 0) {
        cout << "Los archivos " << nombreArchivo1 << " y " << nombreArchivo2 << " son iguales." << endl;
      } else {
        cout << "Los archivos " << nombreArchivo1 << " y " << nombreArchivo2 << " no son iguales." << endl;
      }

    } else {
      cerr << "El archivo " << nombreArchivo2 << " no existe." << endl;
    }
  } else {
    cerr << "El archivo " << nombreArchivo1 << " no existe." << endl;
  }
}

/**
 * Verifica si una plabara es palindromo
 *
 * @param char* texto
 *
 * @return bool
 */
bool palindromo(char* texto) {
  int largo = strlen(texto);
  for(int i = 0; i < largo; i++) {
    if(texto[i] != texto[largo - i - 1]) {
      return false;
    }
  }

  return true;
}


int main(int argc, char * argv[])
{

  /**
   * Pregunta 1
   *
   * 1. char (1 byte), short (2 bytes), int (4 bytes), double (8 bytes),
   * long (8 bytes)
   *
   * 2. Almacenan la misma cantidad de datos, pero la diferencia radica en la
   * diferencia de números que pueden representar.
   * signed = positivos y negativos
   * unsigned = sólo positivos. De 0 en adelante,
   *
   * 3. El compilador realiza una conversión implícita (implicit cast) al tipo
   * de dato que le sigue (más grande), debido a que no es posible almacenar la
   * cantidad de bytes en el tipo de dato actual. El valor resultante muchas
   * veces puede ser inesperado
   *
   * 4. Una función es un grupo de sentencias que realizan una tarea específica.
   * Le permiten al desarrollador organizar el código fuente y reutilizarlo dentro
   * del programa.
   *
   * 5. La declaración de una función le permite al programa (main) saber que existe
   * y cuales son sus parámetros. La definición de la función es el grupo de
   * sentencias (lógica) que ejecutará cuando sea invocada.
   *
   * 6. Archivos plano y archivos binarios.
   *
   */

  /* Pregunta 2: Palíndromo */

  char cadena[100];
  cin.getline(cadena, sizeof(cadena));
  if(palindromo(cadena)) {
    cout << "Es palíndromo" << endl;
  } else {
    cout << "No es palíndromo" << endl;
  }

  /* Pregunta 3: Comando diff */

  char* nomreArchivo1 = argv[1];
  char* nomreArchivo2 = argv[2];
  diff(nomreArchivo1, nomreArchivo2);

  return 0;
}
