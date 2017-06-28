#include <iostream>

using namespace std;

int main()
{
  string v;
  string v1 = "...";
  string v2("test");

  cout << v2.size() << endl;
  cout << v2.length() << endl;

  // Iteramos
  for(int i = 0; i < v2.size(); i++) {
    cout << v2[i]; // vector o array unidimensional
    //cout << v2.at(i);
  }
  cout << endl;

  // find() y rfind()

  v2 = "test";
  cout << v2.find('t', 0) << endl;// devuelve pos 0
  cout << v2.rfind('t', 3) << endl; // devuelve pos 3

  // insert()
  v2 = "test";
  v2.insert(v2.size(), "ing"); // testing
  v2.insert(v2.size(), "."); // testing.
  //v2 += "ing"; // concatenación
  //v2 = v2 + "ing";

  string v3 = "123";
  string v4 = "789";
  string v5 = "...";
  v3 += "456" + v4 + v5; // "123456789..."
  cout << v3 << endl;

  // Elimina siempre los últimos 3 caracteres
  v3.erase(v3.size() - 3, 3);
  v3.erase(0, v3.size()); // Eliminamos por completo el contenido
  v3.clear(); // Eliminamos por completo el contenido
  cout << "El contenido de v3 es: "<< v3 << endl;

  // Verificamos si NO esta vacío
  if(!v3.empty()) { }
  if(v3.empty() == false) { }
  if(v3.empty() != true) { }
  if(v3.size() > 0) { }
  if(v3.length() > 0) { }

  // Verificamos si esta vacío
  if(v3.empty()) { }
  if(v3.empty() == true) { }
  if(v3.empty() != false) { }
  if(v3.size() == 0) { }
  if(v3.length() == 0) { }

  cout << "¿La cadena esta vacía? "
    << (v3.empty() ? "SI" : "NO")  << endl;


  string v6 = "hola";
  // ¡Es siempre constante, no se puede modificar!
  const char* original = v6.c_str();
  cout << original << endl;

  char* copia = new char[strlen(original)];
  strcpy(copia, original);
  copia[strlen(copia)] = '\0';
  cout << copia << endl;

  // Eso no funcionará ya que es contante
  //strcpy(variable, " mundo");

  return 0;
}
