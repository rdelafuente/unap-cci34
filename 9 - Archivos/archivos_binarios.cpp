#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  streampos begin, end;

  fstream archivo1 ("data_char.bin", ios::out | ios::binary | ios::trunc);
  if(archivo1.is_open()) {
    char linea[] = "¡Contenido del archivo binario!";

    //char * linea = new char[100];
    //cin.getline(linea, sizeof(linea));

    // Guarda la cadena de texto en el archivo
    archivo1.write(linea, sizeof(linea));
    archivo1.close();

    // Abrimos nuevamente
    archivo1.open("data_char.bin", ios::in | ios::binary);

    // Leemos la línea según el largo de la variable
    char buffer[100]; // pos de 0 a 99
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
    cout << "Tamaño del data_char.bin es: " << (end - begin) << " bytes." << endl;

    // Cierra el archivo
    archivo1.close();
  }

  cout << endl;

  fstream archivo2 ("data_int.bin", ios::out | ios::binary | ios::trunc);
  if (archivo2.is_open()) {
    int numero = 17;
    // Guarda el número en el archivo
    archivo2.write((char*) &numero, sizeof(numero));
    // Cierra el archivo
    archivo2.close();

    // Abre nuevamente el archivo para leer lo que acabamos de guardar
    archivo2.open("data_int.bin", ios::in | ios::binary);

    // Leemos el entero que acabamos de guardar
    int contenido;
    archivo2.read((char*) &contenido, sizeof(contenido));
    cout << "Valor del entero leido: " << contenido << endl;

    // Reposicionamos el puntero de lectura para calcular el tamaño del archivo
    archivo2.seekg(0, ios::beg);
    begin = archivo2.tellg();
    archivo2.seekg(0, ios::end);
    end = archivo2.tellg();
    cout << "Tamaño del data_int.bin es: " << (end - begin) << " bytes." << endl;

    // Cierra el archivo
    archivo2.close();

    fstream archivo3 ("data_string.bin", ios::out | ios::binary | ios::trunc);
    string otraLinea = "Otra línea para el archivo binario";

    size_t largo = otraLinea.size();
    cout << "Cantidad de caracteres: " << largo << endl;
    cout << "Bytes de la variable largo: " << sizeof(largo) << endl;

    archivo3.write((char*) &largo, sizeof(largo));
    archivo3.write(otraLinea.c_str(), largo);

    // Cierra el archivo
    archivo3.close();

    // Abre nuevamente el archivo para leer lo que acabamos de guardar
    archivo3.open("data_string.bin", ios::in | ios::binary);

    // Lee
    archivo3.read((char*) &largo, sizeof(size_t));
    char* temp = new char[largo + 1];
    archivo3.read(temp, largo);
    temp[largo] = '\0';
    otraLinea = temp;
    delete[] temp;

    cout << "Contenido string: " << otraLinea << endl;

    // Cierra el archivo
    archivo3.close();
  }

  return 0;
}
