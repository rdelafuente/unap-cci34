#include <iostream>

using namespace std;

// ------------------- Prototipo de funciones

int sumar (int a, int b);

// No es necesario especificar el nombre de las variables
int restar (int, int);

// Sobrecarga de la función sumar.
// Esta función retorna y acepta variables del tipo double
double sumar(double, double);

// ------------------- Main

int main() {

	// Declaración e inicialización de variables
	int a = 5;
	int b = 10;

	cout << "El valor de a es: " << a << endl;
	cout << "El valor de b es: " << b << endl;

	// Las variables pueden ser reasignadas durante el flujo de la aplicación
	a = 10;
	b = 20;

	// Suma "a" + "b" y almacena el valor en la variable "sum"
	int sum = sumar(a, b);

	cout << "La suma (int) de " << a << " + " << b << " = " << sum << endl;

	// Las funciones también se pueden utiliar directamente en la salida

	cout << "La suma (double) de " << 3.15 << " + " << 4.6 << " = " << sumar(3.15, 4.6) << endl;

	cout << "La resta de " << a << " - " << b << " = " << restar(a, b) << endl;

	return 0;
}

// ------------------- Declaración de funciones (cuerpo)

/**
 * Suma dos números del tipo int
 *
 * @param int a
 * @param int b
 *
 * @return int
 * */
int sumar(int a, int b) {
	return (a + b);
}

/**
 * Suma dos números del tipo double
 *
 * @param double a
 * @param double b
 *
 * @return double
 * */
double sumar(double a, double b) {
	return (a + b);
}

/**
 * Resta dos números
 *
 * @param int a
 * @param int b
 *
 * @return int
 * */
int restar(int a, int b) {
	return a - b;
}
