#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct persona_t {
  string rut;
  string nombre;
  string apellido;
  unsigned short edad;
};

void guardar(persona_t *p, string ruta);
persona_t* leer(string ruta, const unsigned int elementos);
void imprimir(persona_t *p, const unsigned int elementos);

int main()
{
  const unsigned int MAX = 2;
  persona_t personas[MAX];

  personas[0].rut = "12345678-9";
  personas[0].nombre = "Bjarne";
  personas[0].apellido = "Stroustrup";
  personas[0].edad = 66;

  personas[1].rut = "1-9";
  personas[1].nombre = "Test";
  personas[1].apellido = "Testing";
  personas[1].edad = 67;

  // Guarda en personas.bin
  guardar(personas, "personas.bin");

  // Lee MAX elementos desde el archivo personas.bin
  persona_t *p = leer("personas.bin", MAX);

  // Imprime los datos leidos
  imprimir(p, MAX);

  return 0;
}

/**
 * Guarda un array de estructuras en un archivo binario.
 *
 * @param  persona_t *personas Array de estructura a guardar
 * @param  string path         Ruta relativa o absouluta del archivo binario
 */
void guardar(persona_t *p, string ruta) {
  ofstream archivo(ruta, ios::trunc | ios::binary);
  if(archivo.is_open()) {
    archivo.write((char*)&p, sizeof(p));
    archivo.close();
  } else {
    cerr << "Imposible guardar el archivo " << ruta;
  }
}

/**
 * Lee desde un archivo binario un array de estructuras.
 *
 * @param  string path                  Ruta relativa o absoluta del archivo a leer
 * @param  const unsigned int elementos Máximo de elementos a leer
 *
 * @return persona_t*
 */
persona_t* leer(string ruta, const unsigned int elementos) {
  // Crea un puntero del tipo persona_t,
  // reservando memoria para todos los elementos
  persona_t *p = new persona_t[elementos];

  ifstream archivo(ruta, ios::binary);
  if(archivo.is_open()) {
    archivo.read((char*)&p, sizeof(p));
  } else {
    cerr << "Imposible leer el archivo " << ruta;
  }

  return p;
}

/**
 * Imprime un array de estructura
 *
 * @param  persona_t *p                 Array de estructura
 * @param  const unsigned int elementos Máximo de elementos a leer
 */
void imprimir(persona_t *p, const unsigned int elementos) {
  for(int i = 0; i < elementos; i++) {
    cout << endl;
    cout << "Persona #" << i + 1 << endl;
    cout << "----------" << endl;
    cout << p[i].rut << endl;
    cout << p[i].nombre << endl;
    cout << p[i].apellido << endl;
    cout << p[i].edad << endl;
  }
}
