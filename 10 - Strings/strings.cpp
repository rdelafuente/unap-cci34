#include <iostream>
#include <string>
#include <cstring>
#include <clocale>

using namespace std;

int main()
{

  /*** Declaración de strings ***/

  string cadena("esta es una forma de declarar strings");
  string cadena2 = "esta es otra forma...";


  /*** Concatenación o unión de strings ***/

  string cadena3 = cadena + cadena2; // cadena3 tendrá la unión de cadena y cadena2
  cadena3 += "1234"; // a cadena3 se le une el string 1234


  /*** Comparación de strings ***/

  if(cadena == cadena2) {
    // Los strings son iguales
  } else {
    // Son diferentes
  }
  // También es posible compara a través de la función miembro compare()
  if(cadena.compare(cadena2) == 0) {
    // Los strings son iguales
  } else {
    // Son diferentes
  }


  /*** Largo de strings y acceso a elementos individuales (size, length, at) ***/

  cout << "Largo de cadena es: " << cadena.size() << endl;
  cout << "Largo de cadena es: " << cadena.length() << endl;

  // Acceso a elementos indivuales
  for(int i = 0; i < cadena.size(); i++) {
    cout << cadena[i]; // cadena[i] es del tipo char
    //char c = cadena[i];
    //cout << c;
  }
  cout << endl;

  // Es posible obtener los elemenros de forma individual utilizando la función
  // miembro at()
  for(int i = 0; i < cadena.size(); i++) {
    cout << cadena.at(i); // cadena.at(i) retorna una variable del tipo char
    //char c = cadena.at(i);
    //cout << c;
  }
  cout << endl;

  /*** Búsqueda y sub-cadenas (find, rfind) ***/

  // Búsqueda utilizando find
  int pos = cadena2.find("es");
  // Imprime 0: posición del primer caracter (f) en donde se encontró la primera
  // aparición de la cadena buscada
  cout << "(find) Substring \"es\" encontrado en la posición: " << pos << endl;

  // Búsqueda utilizando rfind (reverse find)
  int rpos = cadena2.rfind("es");
  // Imprime 5: posición del primer caracter (f) en donde se encontró la última
  // aparición de la cadena buscada
  cout << "(rfind) Substring \"es\" encontrado en la posición: " << rpos << endl;

  // Ejemplo de búsqueda no encontrada
  // Si el valor no se encuentra devuelve string::npos
  cout << cadena.find("foobar") << endl;

  // Cuenta el número de apariciones de "es" dentro de cadena utilizando rfind
  int j = 0;
  int apariciones = 0;
  for(j = cadena.rfind("es"); j != string::npos; j = cadena.rfind("es", j))
  {
      apariciones++;
      if(j == 0) break;
      j--; // Se mueve a la siguiente posición para evitar encontar la misma palabra
  }
  cout << "Apariciones de \"es\" dentro de cadena: " << apariciones << endl;

  /*** Modificación de strings (inserción, eliminación) ***/

  // Inserta 123456 en la posición 4
  cadena.insert(4, " 123456");
  cout << cadena << endl;

  // Elimina 7 posiciones, comenzando desde la posición 4.
  cadena.erase(4, 7);
  cout << cadena << endl;

  // Busca y elimina todas las apariciones del caracter -
  string texto = "0-1234-567-89";
  int i = 0;
  for(i = texto.find('-'); i != string::npos; i = texto.find('-')) {
    texto.erase(i, 1);
  }
  cout << "El texto luego de la búsqueda y eliminación es: " << texto << endl;


  /*** Verifiación de cadenas vacías ***/

  if(cadena.length() == 0) { }
  if(cadena.size() == 0) { }
  if(cadena.empty()) { }


  /*** Recuperar cadena estilo C ***/

  const char* cadena_c = cadena.c_str();

  // En caso de querer modificar cadena_c se debe
  // realizar una copia del original
  char* copia_cadena_c = new char[strlen(cadena_c)]; // Asigna espacio suficiente
  strcpy(copia_cadena_c, cadena_c); // Copia el contenido de cadena_c a copia_cadena_c
  copia_cadena_c[strlen(copia_cadena_c)] = '\0'; // Agrega el caracter de fin de línea
  cout << "El contenido de la copia es: " << copia_cadena_c << endl;
  cout << strlen(copia_cadena_c) << endl;
  cout << strlen(cadena_c) << endl;


  cadena = "áéíóú";
  // ¿Qué largo tendrá?
  // ¡Imprime 10, no 5! Cada caracter utiliza 2 bytes (5 * 2 = 10)
  cout << cadena.size() << endl;

  // Con wstring los caracteres multi-bytes se almancenan en sólo un byte
  wstring wcadena = L"áéíóú"; // Literal del tipo wchar_t*
  // Imprime 5
  wcout << wcadena.size() << endl;

  // Para imprimir una cadena del tipo wstring con codificación UTF-8
  wcout.imbue(locale("es_ES.UTF-8")); // Prepara la salida para que se codifique en UTF-8
  wcout << wcadena << endl;

  // AL igual que wcout, existe wcin para solicitar un wstring por teclado

  return 0;
}
