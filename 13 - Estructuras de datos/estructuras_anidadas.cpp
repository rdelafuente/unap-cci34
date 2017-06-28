#include <iostream>

using namespace std;

struct address_t {
  string calle;
  int numero;
};

struct person_t {
  string nombre;
  int edad;
  address_t direccion;
};

int main()
{
  person_t persona;
  address_t direccion;

  persona.nombre = "Dennis Ritchie";
  persona.edad = 76;
  persona.direccion.calle = "Bronxville, Nueva York, Estados Unidos";
  persona.direccion.numero = 1941;

  person_t *pPersona;
  address_t *pDireccion;

  pPersona = &persona;
  pDireccion = &pPersona->direccion;

  cout << pPersona->nombre << endl;
  cout << pDireccion->calle << endl;

  return 0;
}
