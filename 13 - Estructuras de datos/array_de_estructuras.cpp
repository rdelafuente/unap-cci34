#include <iostream>
#include <sstream>
#include <string>

using namespace std;

const unsigned short MAX = 2;

struct movies_t {
  int anio;
  string titulo;
  string actores;
}; // Crea un array de 2 elementos movies_t con nombre peliculas

void ingresar_peliculas(movies_t vec[]);
void imprimir_peliculas(movies_t vec[]);

int main()
{
  movies_t peliculas[MAX];

  ingresar_peliculas(peliculas);
  imprimir_peliculas(peliculas);

  return 0;
}

void ingresar_peliculas(movies_t vec[]) {
  string tmp;
  for(int i = 0; i < MAX; i++) {
    cout << "\n---";
    cout << "\nIngrese los datos para la Película #" << (i + 1);
    cout << "\n---";

    cout << "\n\t- Título: ";
    getline(cin, vec[i].titulo);

    cout << "\n\t- Año: ";
    getline(cin, tmp);
    (stringstream) tmp >> vec[i].anio;

    cout << "\n\t- Actores: ";
    getline(cin, vec[i].actores);
  }
}

void imprimir_peliculas(movies_t vec[]) {
  for(int i = 0; i < MAX; i++) {
    cout << "\n-----------";
    cout << "\nPelícula #" << (i + 1);
    cout << "\n-----------";

    cout << "\n\t- Título: " << vec[i].titulo;
    cout << "\n\t- Año: " << vec[i].anio;
    cout << "\n\t- Actores: " << vec[i].actores;
  }
  cout << endl;
}
