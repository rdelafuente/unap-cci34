#include <iostream>
#include <cstdlib> // Para system("clear")

using namespace std;

// ---------------- Prototipo de funciones

int leerInt(char[]);
void limpiarPantalla();
void menu();
void menu1();
void menu2();
void menu3();

// ---------------- Punto de partida

int main() {
  menu();

  return 0;
}

// ---------------- Definición de funciones

/**
 * Limpia la salida de la consola.
 *
 * Más info en: http://www.cplusplus.com/articles/4z18T05o/
 */
void limpiarPantalla() {
  // Si la disponible está librería se utiliza
  if(system("CLS")) {
    system("clear");
  }
  else {
    // En caso contrario imprime 100 saltos de línea
    for (int n = 0; n <= 10; n++) cout << "\n\n\n\n\n\n\n\n\n\n";
  }
}

/**
 * Lee un número entero (int) ingresado por el usuario.
 *
 * @param char mensaje[] Mensaje entregado al usuario para ingresar su número
 *
 * @return int
 */
int leerInt(char mensaje[]) {
  bool valido = false;
  int opc;

  do {
    // Mensaje a usuario
    cout << mensaje;
    // Lee la opción desde el teclado
    cin >> opc;

    // Verifica si la entrada es correcta
    if(cin.good()) {
      // Marca la entrada como válida. Sale del ciclo
      valido = true;
    } else {
      cout << "\t> Error: Por favor, ingrese un valor entero (int) válido." << endl;
      // Limpia el estado (o flag) fallido de cin
      cin.clear();
      // Elimina el valor ingresado en el steam, de lo contrario seguirá ahí
      // Se lee como; "Ignora INT_MAX caractres de la línea actual y pasa a la siguiente (\n)"
      cin.ignore(INT_MAX, '\n');
    }
  } while(!valido);

  return opc;
}

/**
 * Menú principal
 */
void menu() {
  int opc;
  do {
    limpiarPantalla();

    cout << "\t------- MENU -------" << endl;
    cout << endl;
    cout << "\t1. Menú 1" << endl;
    cout << "\t2. Menú 2" << endl;
    cout << "\t3. Menú 3" << endl;
    cout << endl;

    //cout << "\tIngrese su opción (1-4). 0 para salir: ";
    //cin >> opc;

    char mensaje[] = "\tIngrese su opción (1-4). 0 para salir: ";
    opc = leerInt(mensaje);

    switch(opc) {
      case 1:
        menu1();
        break;
      case 2:
        menu2();
        break;
      case 3:
        menu3();
        break;
    }
  } while (opc != 0);
}

/**
 * Opción de Menú 1
 */
void menu1() {
  int opc;
  do {

    limpiarPantalla();

    cout << "\t------- MENÚ 1 -------" << endl;
    cout << endl;
    cout << "\t1. Menú 1.1" << endl;
    cout << "\t2. Menú 1.2" << endl;
    cout << endl;

    //cout << "\tIngrese su opción (1-2). 0 para regresar al menú: ";
    //cin >> opc;

    char mensaje[] = "\tIngrese su opción (1-4). 0 para salir: ";
    opc = leerInt(mensaje);

  } while(opc != 0);
}

/**
 * Opción de Menú 2
 */
void menu2()
{
  int opc;
  do {

    limpiarPantalla();

    cout << "\t------- MENÚ 2 -------" << endl;
    cout << endl;
    cout << "\t1. Menú 2.1" << endl;
    cout << "\t2. Menú 2.2" << endl;
    cout << endl;

    //cout << "\tIngrese su opción (1-2). 0 para regresar al menú: ";
    //cin >> opc;

    char mensaje[] = "\tIngrese su opción (1-2). 0 para salir: ";
    opc = leerInt(mensaje);

  } while(opc != 0);
}

/**
 * Opción de Menú 3
 */
void menu3()
{
  int opc;
  do {

    limpiarPantalla();

    cout << "\t------- MENÚ 3 -------" << endl;
    cout << endl;
    cout << "\t1. Menú 3.1" << endl;
    cout << "\t2. Menú 3.2" << endl;
    cout << endl;

    //cout << "\tIngrese su opción (1-2). 0 para regresar al menú: ";
    //cin >> opc;

    char mensaje[] = "\tIngrese su opción (1-2). 0 para salir: ";
    opc = leerInt(mensaje);

  } while(opc != 0);
}
