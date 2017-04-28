#include <iostream>
#include <cmath>

using namespace std;

int leerInt(char[]);
void limpiarPantalla();
void pausa();
void menu();

double operacion1(int, int);
double operacion2(int);
double operacion3(int);
double operacion4(int, int, int, int);

int main()
{
  menu();

  return 0;
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
 * Limpia la salida de la consola.
 *
 * Más info en: http://www.cplusplus.com/articles/4z18T05o/
 */
void limpiarPantalla() {
  // En caso contrario imprime 50 saltos de línea
  for (int n = 0; n <= 5; n++) cout << "\n\n\n\n\n\n\n\n\n\n";
}

/**
 * Pausa la ejecución del programa solicitando un caracter cualquiera
 */
void pausar() {
  cout << "\n\tPresione cualquier tecla para continuar..." << endl;
  // Limpia el buffer cin y solicita un caracter para detener la ejecución
  cin.clear();
  cin.ignore(INT_MAX, '\n');
  cin.get();
}

/**
 * Menú principal
 */
void menu() {
  int opc;
  int a, b, c, d, x, i;

  do {
    limpiarPantalla();

    cout << "\tMENU PRINCIPAL" << endl;
    cout << "\t--------------" << endl;
    cout << endl;
    cout << "\t1. Operación #1:\t h = sqrt(a^2 - b^2/4)" << endl;
    cout << "\t2. Operación #2:\t Sumatoria(2i - 1)^3" << endl;
    cout << "\t3. Operación #3:\t x^3 + 2x^2 + (2x - 1)^1/3" << endl;
    cout << "\t4. Operación #4:\t (a + b) / (c - d)" << endl;
    cout << "\t0. Salir" << endl;
    cout << endl;

    char msg[] = "\tIngrese una opción: ";
    opc = leerInt(msg);

    switch(opc) {
      case 1:
        strcpy(msg, "\n\tIngrese el valor de a: ");
        a = leerInt(msg);
        strcpy(msg, "\n\tIngrese el valor de b: ");
        b = leerInt(msg);

        cout << "\n\tEl valor de h es " << operacion1(a, b) << endl;
        pausar();
        break;

      case 2:
        strcpy(msg, "\n\tIngrese el valor de i: ");
        i = leerInt(msg);

        cout << "\n\tEl valor de la sumatoria es " << operacion2(i) << endl;
        pausar();
        break;

      case 3:
        strcpy(msg, "\n\tIngrese el valor de x: ");
        x = leerInt(msg);

        cout << "\n\tEl valor de la ecuación es " << operacion3(x) << endl;
        pausar();
        break;

      case 4:
        strcpy(msg, "\n\tIngrese el valor de a: ");
        a = leerInt(msg);
        strcpy(msg, "\n\tIngrese el valor de b: ");
        b = leerInt(msg);
        // Validamos la división por 0
        do {
          strcpy(msg, "\n\tIngrese el valor de c: ");
          c = leerInt(msg);
          strcpy(msg, "\n\tIngrese el valor de d: ");
          d = leerInt(msg);
          if(c - d == 0) {
            cout << "\n\t> Error: El valor de c debe ser diferente al de d." << endl;
          }
        } while(c - d == 0);

        cout << "\n\tEl valor de la división es " << operacion4(a, b, c, d) << endl;
        pausar();
        break;
    }

  } while(opc != 0);
}

/**
 * Calcula la altura de un triángulo isóceles
 *
 * @param int a Lado a
 * @param int b Lado b
 *
 * @return double
 */
double operacion1(int a, int b) {
  return sqrt(pow(a, 2) - pow(b, 2) / 4);
}

/**
 * Calcula la sumatoria de 2i - 3
 *
 * @param int i Límite de la sumatoria
 *
 * @return double
 */
double operacion2(int i) {
  double suma = 0;
  for(int c = 1; c <= i; c++) {
    suma += pow(2 * i - 1, 3);
  }

  return suma;
}

/**
 * Calcula la ecuación x^3 + 2x^2 + (2x-1)^1/3
 *
 * @param int x Valor de x
 *
 * @return double
 */
double operacion3(int x) {
  return pow(x, 3) + 2 * pow(2 * x, 2) + pow(2 * x - 1, 1/3);
}

/**
 * Calcula la división (a + b) / (c - d)
 *
 * @param int a Valor de a
 * @param int b Valor de b
 * @param int c Valor de c
 * @param int d Valor de d
 *
 * @return double
 */
double operacion4(int a, int b, int c, int d) {
  return (a + b) / (c - d);
}
