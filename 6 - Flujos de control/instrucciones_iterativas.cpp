#include <iostream>

using namespace std;

int main()
{

	int MAX = 5;

	cout << "\nUSO DE FOR";
	cout << "\n-----------" << endl;

	for(int i = 0; i < MAX; i++) {
			cout << "El valor de i es: " << i << endl;
	}

	cout << endl;

	// Se puede iterar hacia atrás también
	for(int i = MAX; i > 0; i--) {
			cout << "El valor de i es: " << i << endl;
	}

	// O incluso iterar con dos o más variables a la vez.

	// n = 0 e i = 100 son el punto de partida
	// n != i es la condición
	// n++ e i-- es el incremento (o decremento)
	for (int n = 0, i = 100 ; n != i ; n++, i--) {
		// ¿Cuántas veces se ejecutará esto?
  }


	cout << "\nUSO DE FOR RANGE (C++11)";
	cout << "\n------------------------" << endl;
	// Nota: Usar parámetro -std=c++11 al compilar

	char str[] = "Hola";
	// Itera sobre cada posición del texto.
	for (char c : str) {
		// ¿Notas algo extraño al imprimir la secuencia? ¿Por qué?
    cout << "[" << c << "]";
	}

	cout << endl;
	// En C++11 también se puede utilizar la palabra auto
	for (auto c : str) {
		cout << "[" << c << "]";
	}

	cout << endl;
	cout << "\nUSO DE WHILE";
	cout << "\n-------------" << endl;

	int j = 0;
	while(j < MAX) {
		cout << "El valor de j es: " << j << endl;
		j++; // Equivalente a escribir j = j + 1 o j += 1
	}


	cout << "\nUSO DE DO - WHILE";
	cout << "\n------------------" << endl;

	int k = 0;
	do {
		cout << "El valor de k es: " << k << endl;
		k++;
	} while (k < MAX);


	cout << "\nUSO DE BREAK EN LOOPS";
	cout << "\n---------------------" << endl;

	for (int i = MAX; i > 0; i--) {
    cout << i << ", ";
    if (i == 3) {
      cout << "\nEl valor de i es igual a 3. Saliendo de la iteración..." << endl;
      break;
    }
  }


	cout << "\nUSO DE CONTINUE EN LOOPS";
	cout << "\n------------------------" << endl;

	for (int i = MAX; i > 0; i--) {
		if (i == 3) continue; // Pasa al próximo ciclo si la condición se cumple
		cout << i << ", ";
	}

	cout << endl;

	return 0;
}
