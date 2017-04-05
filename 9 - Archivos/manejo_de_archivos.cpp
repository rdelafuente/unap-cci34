#include <iostream>
// Directiva para manejar el flujo desde/hacia ficheros
#include <fstream>
// Directiva para manejar strings
#include <string>
// Para generar números aleatorios
#include <cstdlib>
// Funciones de tiempo (para generar la semilla del número aleatorio en función del tiempo actual)
#include <ctime>

using namespace std;

int main()
{

  // Permite solamente escribir en archivos
  ofstream writeFile;
  // Permite solamente leer de archivos
  ifstream readFile;
  // Permite leer y escribir en archivos
  fstream rwFile;


  cout << endl;
  cout << "###############" << endl;
  cout << "Uso de ofstream" << endl;
  cout << "###############" << endl;
  cout << endl;

  // Abrimos el archivo para escribir. Si existe, se sobrescribe
  writeFile.open("test.txt");

  // Verificamos si el archivo fue realmente abierto
  if(writeFile.is_open()) {

    cout << "Agregando contenido al archivo..." << endl;

    writeFile << "Agregamos esta línea al archivo." << endl;
    writeFile << "Y esta otra también..." << endl;

    // Ciera el fichero y limpia los buffers asociados
    // Luego de este punto el fichero queda disponible para su uso.
    writeFile.close();

    cout << "Contenido agregado." << endl;

  } else {
    cout << "Imposible abrir/crear archivo para su escritura." << endl;
  }


  cout << endl;
  cout << "###############" << endl;
  cout << "Uso de ifstream" << endl;
  cout << "###############" << endl;
  cout << endl;

  // Abrimos el archivo para leer (sólo lectura)
  readFile.open("test.txt");

  // Verificamos si el archivo fue realmente abierto
  if(readFile.is_open()) {

    cout << "Contenido del archivo:" << endl;
    cout << endl;

    string linea;
    // Mientras existan líneas para leer...
    while(getline(readFile, linea)) {
      cout << "\t" << linea << endl;
    }

    // Cerramos el archivo
    readFile.close();

  } else {
    cout << "Imposible abrir archivo para su lectura." << endl;
  }


  cout << endl;
  cout << "########################################" << endl;
  cout << "Uso de fstream en modo lectura/escritura" << endl;
  cout << "########################################" << endl;
  cout << endl;

  // Abrimos el archivo en modo: escritura (ios::out),
  // agregando el nuevo contenido al final (ios::app)
  rwFile.open("test.txt", ios::in | ios::out | ios::app);
  if(rwFile.is_open()) {

    cout << "Agregando contenido al archivo con fstream..." << endl;

    // Setea la semilla para el número aleatorio
    srand(time(0));
    // Agrega una nueva línea con el número aleatorio
    rwFile << "Agregamos otra línea al archivo. Número aleatorio: " << rand() << endl;

    cout << "Contenido agregado." << endl;

    // ¿Qué pasa si intentamos leer el contenido del archivo?

    streampos begin = rwFile.tellg();
    cout << "Posición de lectura: " << begin << endl;

    rwFile.seekg(0, ios::beg);

    begin = rwFile.tellg();
    cout << "Nueva posición de lectura: " << begin << endl;

    string otraLinea;
    while(getline(rwFile, otraLinea)) {
      cout << "\t" << otraLinea << endl;
    }

    // Cerramos el archivo
    rwFile.close();

  } else {
    cout << "Imposible abrir archivo en modo escritura." << endl;
  }


  cout << endl;
  cout << "##############################" << endl;
  cout << "Uso de fstream en modo lectura" << endl;
  cout << "##############################" << endl;
  cout << endl;

  rwFile.open("test.txt", ios::in);
  if(rwFile.is_open()) {

    cout << "Contenido del archivo:" << endl;
    cout << endl;

    // Imprimos el contenido del archivo
    string otraLineaMas;
    while(getline(rwFile, otraLineaMas)) {
      cout << "\t" << otraLineaMas << endl;
    }

    // Cerramos el archivo
    rwFile.close();
  } else {
    cout << "Imposible abrir archivo en modo lectura." << endl;
  }

  return 0;
}
