#include <iostream>

using namespace std;

int main()
{
	int a = 5; // Valor inicial 5
	int b = 2; // Valor inicial 2
	int resultado = a + b; // Valor inicial con la suma de a y b

	// Otra forma de declarar variables
	int c (10); // Valor inicial 10

	// Compatible sólo con C++11 (versión 2011 en adelante)
	// Usar parámetro -std=c++11 al compilar
	int d {20}; // Valor inicial 20.

	cout << "Resultado de (" << a << " + " << b << ") = " <<  resultado << endl;
	cout << "Resultado de (" << c << " + " << d << ") = " <<  c + d << endl;

	// Tambien se pueden declarar variables en una sóla línea si son del mismo tipo
	int x = 1, y = 2, z = 3;
	cout << "x = " << x << " , y = " << y << " , z = " << z << endl;

	// Variable sin inicializar
	int variableSinInicializar;
	//int variableSinInicializar_2;
	//int variableSinInicializar_3;

	// ¿Qué valor(es) debería imprimir esto? ¿0?
	cout << "El valor de variableSinInicializar es " << variableSinInicializar << endl;

	// Descomentar estas lineas (y sus variables) y verificar los valores de salida
	//cout << "El valor de variableSinInicializar_2 es " << variableSinInicializar_2 << endl;
	//cout << "El valor de variableSinInicializar_3 es " << variableSinInicializar_3 << endl;

	// Nunca confiar en el valor de una variable sin inicializar.
	// ¡Sus valores podrían ser inesperados!

	return 0;
}
