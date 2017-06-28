#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void intercambiar(char& v1, char& v2);
string inverso(const string& s);
string eliminar_punt(const string &s, const string& punt);
string hacer_minuscula(const string &s);
bool es_pal(const string& s);

int main()
{
  string cadena;
  cout << "Ingrese su cadena: ";
  getline(cin, cadena);

  if(es_pal(cadena)) {
    cout << "\"" << cadena << "\"" << " es palíndromo." << endl;
  } else {
    cout << "\"" << cadena << "\"" << " no es palíndromo." << endl;
  }

  return 0;
}

/**
 * Intercambia dos valores.
 *
 * @param char& v1 Caracter 1.
 * @param char& v2 Caracter 2.
 */
void intercambiar(char& v1, char& v2) {
  char temp = v1;
  v1 = v2;
  v2 = temp;
}

/**
 * Invierte una cadena de texto.
 *
 * @param  const string& s Cadena de texto.
 * @return string
 */
string inverso(const string& s) {
  int inicio = 0;
  int fin = s.length();
  string temp(s);

  while(inicio < fin) {
    fin--;
    intercambiar(temp[inicio], temp[fin]);
    inicio++;
  }

  return temp;
}

/**
 * Convierte una cadena a minúsculas.
 *
 * @param  const string &s Cadena de texto.
 *
 * @return string
 */
string hacer_minuscula(const string &s) {
  string temp(s);
  for(int i = 0; i < s.length(); i++) {
    temp[i] = tolower(temp[i]);
  }

  return temp;
}

/**
 * Elimina signos de puntuación y espacios de una cadena.
 *
 * @param  const string& s    Cadena de texto.
 * @param  const string& punt Cadena con signos de putuación.
 *
 * @return string
 */
string eliminar_punt(const string &s, const string &punt) {
  string cadena_limpia;
  // Verificamos caracter a caracter
  for(int i = 0; i < s.length(); i++) {
    // Una cadena de un caracter
    string un_caracter = s.substr(i, 1);
    // Verifica si el caracter extraido es espacio o puntuación
    int pos = punt.find(un_caracter, 0);
    // Si no existe el caracter, se agrega a la cadena normalizada
    if(pos < 0 || pos >= punt.length()) {
      cadena_limpia += un_caracter;
    }
  }

  return cadena_limpia;
}

/**
 * Verifica si una cadena es palindromo.
 *
 * @param  string s Cadena de texto.
 *
 * @return bool
 */
bool es_pal(const string& s) {
  string punt(",.:;?!"" "); // Incluye espacio en blanco
  string cadena(s);

  // Transforma la cadena a minusculas
  cadena = hacer_minuscula(cadena);
  // Elimina signos de puntuación y espacios
  string cadena_limpia = eliminar_punt(cadena, punt);

  // Verficia la cadena con su  inverso
  return (cadena_limpia == inverso(cadena_limpia));
}
