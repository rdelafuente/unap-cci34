#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  streampos begin, end;

  fstream archivo1 ("data_char.bin", ios::in | ios::out | ios::binary | ios::trunc);
  if(archivo1.is_open()) {
    char linea[] = "¡Contenido del archivo binario!";
    // Guarda la cadena de texto en el archivo
    archivo1.write(linea, sizeof(linea));

    // Reposicionamos el puntero de lectura (para leer lo que acabamos de guardar)
    archivo1.seekg(0, ios::beg);

    // Leemos la línea según el largo de la variable
    char buffer[100];
    archivo1.read(buffer, strlen(linea));
    cout << "Contenido de la línea: " << buffer << endl;

    // Si no conocemos el largo exacto del archivo,
    // ¿cómo sabremos cuantos caracteres leer?

    archivo1.seekg(0, ios::end);
    int largo = archivo1.tellg();
    archivo1.seekg(0, ios::beg);

    char* otroBuffer = new char[largo];
    archivo1.read(otroBuffer, largo);

    cout << "Contenido de la línea: " << otroBuffer << endl;

    // Reposicionamos el puntero de lectura para calcular el tamaño del archivo
    archivo1.seekg(0, ios::beg);
    begin = archivo1.tellg();
    archivo1.seekg(0, ios::end);
    end = archivo1.tellg();
    cout << "Tamaño del archivo1.bin es: " << (end - begin) << " bytes." << endl;

    // Cierra el archivo
    archivo1.close();
  }

  cout << endl;

  fstream archivo2 ("data_int.bin", ios::in | ios::out | ios::binary | ios::trunc);
  if (archivo2.is_open()) {
    int numero = 17;
    // Guarda el número en el archivo
    archivo2.write((char*) &numero, sizeof(int));

    // Reposicionamos el puntero de lectura (para leer lo que acabamos de guardar)
    archivo2.seekg(0, ios::beg);

    // Leemos el entero que acabamos de guardar
    int contenido;
    archivo2.read((char*) &contenido, sizeof(int));
    cout << "Valor del entero leido: " << contenido << endl;

    // Reposicionamos el puntero de lectura para calcular el tamaño del archivo
    archivo2.seekg(0, ios::beg);
    begin = archivo2.tellg();
    archivo2.seekg(0, ios::end);
    end = archivo2.tellg();
    cout << "Tamaño del archivo2.bin es: " << (end - begin) << " bytes." << endl;

    /*
    string otraLinea = "Otra línea para el archivo binario";
    size_t largo = otraLinea.size();
    archivo.write((char*) &largo, sizeof(size_t));
    archivo.write(otraLinea.c_str(), otraLinea.size());

    archivo.seekg(strlen(linea) + 1, ios::beg);

    archivo.read((char*) &largo, sizeof(size_t));
    char* temp = new char[largo + 1];
    archivo.read(temp, largo);
    temp[largo] = '\0';
    otraLinea = temp;
    delete[] temp;

    cout << otraLinea << endl;
    */

   // Cierra el archivo
   archivo2.close();
  }

  return 0;
}
