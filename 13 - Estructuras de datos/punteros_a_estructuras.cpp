#include <iostream>

using namespace std;

struct movies_t {
  int anio;
  string titulo;
};

int main()
{

  movies_t pelicula; // Objeto de estructura del tipo movies_t
  movies_t *pPelicula; // Puntero del tipo movies_t

  pelicula.anio = 2017;
  pelicula.titulo = "La masacre en Programación Avanzada, parte 2";

  // Apuntamos el puntero a la dirección de memoria de pelicula
  pPelicula = &pelicula;

  // Para acceder a las variables de una estructura utilizando el puntero,
  // utilizamos el operador de flecha ->

  cout << pPelicula->anio << endl;
  cout << pPelicula->titulo << endl;

  // pPelicula->titulo es equivalente a (*pPelicula).titulo

  cout << (*pPelicula).anio << endl;
  cout << (*pPelicula).titulo << endl;

  // Ojo con el paréntesis. No es lo mismo hacer esto:
  // *pPelicula.titulo
  // Ya que es quivalente a:
  // *(pPelicula.titulo)
  // En este caso se estaría intentando acceder a la variable miembro "titulo"
  // que, según este caso hipotético, sería un puntero.
  //
  // | Expresión  | Evaluación                              | Equivalente |
  // | ---------- | --------------------------------------- | ----------- |
  // | a.b        | Miembro b del objeto a                  |             |
  // | a->b       | Miembro b de un objeto apuntado por a   | (*a).b      |
  // | *a.b       | Valor apuntado por b del objeto a       | *(a.b)      |

  return 0;
}
