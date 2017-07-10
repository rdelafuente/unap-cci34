#include <iostream>
#include <fstream>

using namespace std;

struct persona_t {
  string rut;
  string nombre;
  string apellidos;
  string email;
};

struct direccion_t {
  string calle;
  string numero;
  string comuna;
  string adicional;
};

struct directorio_t {
  int id;
  persona_t persona;
  direccion_t direccion;
};

// Máximo de contactos
const int MAX = 1000;
// Número de contactos actuales
int numero_elementos = 0;
// Directorios
directorio_t directorios[MAX];

// Agregar nuevo directorio
void agregar();
void solicitar_persona(persona_t &);
void solicitar_direccion(direccion_t &);

// Actualizar directorio en la posición
void actualizar(int);

// Eliminar un directorio por posición
void eliminar(int);

// Obtener directorio por posición
void imprimir_detalle(int);
// Lista los directorios
void listar();

// Lee el archivo de directorios
void leer(string);
// Guarda los directorios en un archivo
void guardar(string);

int main()
{
  leer("directorio.bin");
  //agregar();

  listar();

  //actualizar(0);
  //imprimir_detalle(0);

  //guardar("directorio.bin");

  return 0;
}

void agregar() {
  cout << endl;
  cout << "-------" << endl;
  cout << "AGREGAR" << endl;
  cout << "-------" << endl;
  cout << endl;

  persona_t persona;
  direccion_t direccion;
  solicitar_persona(persona);
  solicitar_direccion(direccion);

  if(numero_elementos < MAX) {
    directorio_t directorio;
    // El id es la posición del elemento en el array
    directorio.id = numero_elementos;
    directorio.persona = persona;
    directorio.direccion = direccion;
    directorios[numero_elementos] = directorio;
    numero_elementos++;
  }
}

void solicitar_persona(persona_t &per) {
  cout << "\n\tRUT: ";
  getline(cin, per.rut);

  cout << "\n\tNombre: ";
  getline(cin, per.nombre);

  cout << "\n\tApellidos: ";
  getline(cin, per.apellidos);

  cout << "\n\tE-mail: ";
  getline(cin, per.email);
}

void solicitar_direccion(direccion_t &dir) {
  cout << "\n\tCalle: ";
  getline(cin, dir.calle);

  cout << "\n\tNúmero: ";
  getline(cin, dir.numero);

  cout << "\n\tAdicional: ";
  getline(cin, dir.adicional);
}

void guardar(string ruta) {
  ofstream archivo(ruta, ios::trunc | ios::binary);
  if(archivo.is_open()) {
    archivo.write((char*) &numero_elementos, sizeof(numero_elementos));
    archivo.write((char*) &directorios, sizeof(directorios));
    archivo.close();
  } else {
    cerr << "Imposible guardar el archivo " << ruta;
  }
}

void leer(string ruta) {
  ifstream archivo(ruta, ios::binary);
  if(archivo.is_open()) {
    // Lee el total de elementos guardados en el archivo
    archivo.read((char*) &numero_elementos, sizeof(numero_elementos));
    // Lee las estructuras
    archivo.read((char*) &directorios, sizeof(directorios));
  } else {
    cerr << "Imposible leer el archivo " << ruta << endl;
  }
}

bool verificar_posicion(int pos) {
  return (pos < numero_elementos && pos< MAX);
}

void actualizar(int pos) {
  cout << endl;
  cout << "----------" << endl;
  cout << "ACTUALIZAR" << endl;
  cout << "----------" << endl;
  cout << endl;

  if(verificar_posicion(pos)) {
    directorio_t *pD = &(directorios[pos]);
    solicitar_persona(pD->persona);
    solicitar_direccion(pD->direccion);
  } else {
    cerr << "El directorio especificado no existe." << endl;
  }
}

void imprimir_detalle(int pos) {
  if(verificar_posicion(pos)) {
    directorio_t d = directorios[pos];
    persona_t per = d.persona;
    direccion_t dir = d.direccion;

    cout << "#" << d.id << endl;
    cout << "Nombre: " << per.nombre << endl;
    cout << "Apellidos: " << per.apellidos << endl;
    cout << "E-mail: " << per.email << endl;
    cout << "Dirección: " << dir.calle << " #" << dir.numero << endl;
    cout << "Adicional: " << dir.adicional << endl;
    cout << endl;

  } else {
    cerr << "El directorio especificado no existe." << endl;
  }
}

void listar() {
  for(int i = 0; i < numero_elementos; i++) {
    imprimir_detalle(i);
  }
}
