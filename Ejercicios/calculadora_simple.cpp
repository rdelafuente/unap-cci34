#include <iostream>
#include <cstdlib> // Para hacer uso de system("clear")

using namespace std;

// ---------------- Prototipo de funciones

// Utilidades
int leerInt(char[]);
void limpiarPantalla();
// Menues
void menu();
void menuSumar();
void menuRestar();
void menuMultiplicar();
void menuDividir();
// Funciones matemáticas para la calculadora
int sumar(int, int);
int restar(int, int);
double multiplicar(double, double); // Utilizamos double para considerar números muy grandes o decimales
double dividir(double, double); // Utilizamos double para considerar números muy grandes o decimales

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

    cout << "\t------- CALCULADORA SIMPLE v1.0 -------" << endl;
    cout << endl;
    cout << "\t1. Sumar" << endl;
    cout << "\t2. Restar" << endl;
    cout << "\t3. Multiplicar" << endl;
    cout << "\t4. Dividir" << endl;
    cout << endl;

    //cout << "\tIngrese su opción (1-4). 0 para salir: ";
    //cin >> opc;

    char mensaje[] = "\tIngrese su opción (1-4). 0 para salir: ";
    opc = leerInt(mensaje);

    switch(opc) {
      case 1:
        menuSumar();
        break;
      case 2:
        menuRestar();
        break;
      case 3:
        menuMultiplicar();
        break;
      case 4:
        menuDividir();
        break;
    }
  } while (opc != 0);
}

/**
 * Muestra el menú para sumar
 */
void menuSumar() {
  int x, y;
  char opc = 's';

  do {

    limpiarPantalla();

    cout << "\t------- 1. Sumar (x + y) -------" << endl;
    cout << endl;

    char m1[] = "\tIngrese el valor de x: ";
    x = leerInt(m1);

    char m2[] = "\tIngrese el valor de y: ";
    y = leerInt(m2);

    cout << endl;
    cout << "\tEl resultado de " << x << " + " << y << " = " << sumar(x, y) << endl;

    cout << endl;
    cout << "\t¿Desea seguir sumando? [s/n]: ";
    cin >> opc;

    // En este punto no estamos validando que la letra ingresada sea 's' o 'n'
    // Cualquier valor diferente a 'n' hará que el ciclo continúe iterando.
    // ¿Podrías validar que el valor ingresado sea solamente 's' o 'n' ?

  } while(opc != 'n');
}

/**
 * Muestra el menú para restar
 */
void menuRestar() {
  int x, y;
  char opc = 's';

  do {

    limpiarPantalla();

    cout << "\t------- 2. Restar (x - y) -------" << endl;
    cout << endl;

    char m1[] = "\tIngrese el valor de x: ";
    x = leerInt(m1);

    char m2[] = "\tIngrese el valor de y: ";
    y = leerInt(m2);

    cout << endl;
    cout << "\tEl resultado de " << x << " - " << y << " = " << restar(x, y) << endl;

    cout << endl;
    cout << "\t¿Desea seguir restando? [s/n]: ";
    cin >> opc;

    // En este punto no estamos validando que la letra ingresada sea 's' o 'n'
    // Cualquier valor diferente a 'n' hará que el ciclo continúe iterando.
    // ¿Podrías validar que el valor ingresado sea solamente 's' o 'n' ?

  } while(opc != 'n');
}

/**
 * Muestra el menú para multiplicar
 */
void menuMultiplicar() {
  int x, y;
  char opc = 's';

  do {

    limpiarPantalla();

    cout << "\t------- 3. Multiplicar (x * y) -------" << endl;
    cout << endl;

    char m1[] = "\tIngrese el valor de x: ";
    x = leerInt(m1);

    char m2[] = "\tIngrese el valor de y: ";
    y = leerInt(m2);

    cout << endl;
    cout << "\tEl resultado de " << x << " * " << y << " = " << multiplicar(x, y) << endl;

    cout << endl;
    cout << "\t¿Desea seguir multiplicando? [s/n]: ";
    cin >> opc;

    // En este punto no estamos validando que la letra ingresada sea 's' o 'n'
    // Cualquier valor diferente a 'n' hará que el ciclo continúe iterando.
    // ¿Podrías validar que el valor ingresado sea solamente 's' o 'n' ?

  } while(opc != 'n');
}

/**
 * Muestra el menú para dividir
 */
void menuDividir() {
  int x, y;
  char opc = 's';

  do {

    limpiarPantalla();

    cout << "\t------- 4. Dividir (x / y) -------" << endl;
    cout << endl;

    char m1[] = "\tIngrese el valor de x: ";
    x = leerInt(m1);

    char m2[] = "\tIngrese el valor de y: ";
    y = leerInt(m2);

    // ¿Qué pasa si se divide por 0?
    // Agrege la validación

    cout << endl;
    cout << "\tEl resultado de " << x << " / " << y << " = " << dividir(x, y) << endl;

    cout << endl;
    cout << "\t¿Desea seguir dividiendo? [s/n]: ";
    cin >> opc;

    // En este punto no estamos validando que la letra ingresada sea 's' o 'n'
    // Cualquier valor diferente a 'n' hará que el ciclo continúe iterando.
    // ¿Podrías validar que el valor ingresado sea solamente 's' o 'n' ?

  } while(opc != 'n');
}

/**
 * Suma dos números
 *
 * @param int x Parámetro 1
 * @param int y Parámetro 2
 *
 * @return int
 */
int sumar(int x, int y) {
  return x + y;
}

/**
 * Resta dos números
 *
 * @param int x Parámetro 1
 * @param int y Parámetro 2
 *
 * @return int
 */
int restar(int x, int y) {
  return x - y;
}

/**
 * Multiplica dos números
 *
 * @param double x Parámetro 1
 * @param double y Parámetro 2
 *
 * @return double
 */
double multiplicar(double x, double y) {
  return x * y;
}

/**
 * Divide dos números
 *
 * @param double x Parámetro 1
 * @param double y Parámetro 2
 *
 * @return double
 */
double dividir(double x, double y) {
  return x / y;
}
