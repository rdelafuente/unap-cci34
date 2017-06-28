#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
  /* Unidad 1 - Manejo de archivos planos */

  // Ejercicio 1
  ofstream ej1("ejemplo1.txt");
  if(ej1.is_open()) {
    for(int i = 1; i <= 100; i++) {
      ej1 << "Línea " << i << '\n';
    }
    ej1.close();
  } else {
    cout << "Ej1: Archivo ejemplo1.txt no abierto." << endl;
  }

  string linea;

  // Ejercicio 2
  ifstream ej2("ejemplo1.txt");
  if(ej2.is_open()) {
    while(getline(ej2, linea)) {
      //cout << linea << '\n';
    }
    ej2.close();
  } else {
    cout << "Ej2: Archivo ejemplo1.txt no abierto." << endl;
  }

  // Ejercicio 3
  fstream ej3("ejemplo1-reverse.txt");
  if(ej3.is_open()) {
    // Abre el archivo y posiciona el cursor de lectura al final
    ej2.open("ejemplo1.txt", ios::ate);

    // Obtiene el tamaño del archivo en bytes
    streampos tamano = ej2.tellg();
    cout << tamano << " byes." << endl;
    ej2.seekg(0, ios::beg);

    if(ej2.is_open()) {

      // Lee el archivo y lo guarda en otro de forma inversa
      // Utilizando strings
      string reverse, otraLinea;
      while(getline(ej2, otraLinea)) {
        reverse = otraLinea + '\n' + reverse;
      }
      ej3 << reverse;

      // Otra forma, utilizando chars
      char* buffer = new char[tamano];
      char cLinea[1000];
      int i = 0;
      while(ej2.getline(cLinea, sizeof(cLinea))) {
        // ¿Primera línea?
        if(i == 0) {
          strcpy(buffer, cLinea); // Inicializa buffer con el valor de cLinea
        }
        // Resto de las líneas
        else {
          char* tmp = new char[strlen(cLinea) + 1];
          char* aux = new char[strlen(buffer) * 2];
          //
          strcpy(tmp, cLinea); // Inicializa tmp con el valor de cLinea
          strcat(tmp, "\n"); // Concatena \n a tmp
          //
          strcpy(aux, tmp); // Inicializa aux con el valor de tmp
          strcat(aux, buffer); // Concatena el buffer a aux
          strcpy(buffer, aux); // Concatena aux devuelta al buffer
        }
        // Incrementa el contador de líneas
        i++;
      }
      // Guarda el contenido
      ej3 << buffer;

      // Cierra los archivos
      ej3.close();
      ej2.close();
    } else {
      cout << "Ej3: Archivo ejemplo1.txt no abierto." << endl;
    }
  } else {
    cout << "Ej3: Archivo ejemplo1-reverse.txt no abierto." << endl;
  }


  // Ejercicio 4
  fstream ej4("ejemplo1.txt");
  if(ej4.is_open()) {
    int j = 1;
    char l[1000];
    srand(0);
    string lineas = "";
    while(ej4.getline(l, sizeof(l))) {
      if(j == 50) {
        char* s = strstr(l, "50");
        int numero = rand() % 10000; // entre 1 y 10000
        char buff[5];
        sprintf(buff, "%d", numero);
        cout << strlen(buff) << endl;
        strncpy(s, buff, strlen(buff));
      }
      lineas += l;
      lineas += "\n";
      j++;
    }

    cout << lineas;
  }

  // Ejercicio 5
  // ...

  return 0;
}
