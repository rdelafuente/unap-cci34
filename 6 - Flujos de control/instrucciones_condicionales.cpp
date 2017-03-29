#include <iostream>

using namespace std;

int main()
{

	int a = 1, b = 2, c = 4;
	bool d;


	// Condición simple
	if(a + b == 3) {
		cout << "El valor de a + b es igual a 3" << endl;
	}


	// Condición con alternativa else
	if(c > 4) {
		cout << "El valor de c es mayor a 4" << endl;
	} else {
		cout << "El valor de c es menor o igual a 4" << endl;
	}


	// Múltiples condiciones (anidadas)
	if(a == 2) {
		cout << "El valor de a es 2" << endl;
	} else if(a == 3) {
		cout << "El valor de a es 3" << endl;
	} else if(a == 4) {
		cout << "El valor de a es 4" << endl;
	} else {
		cout << "El valor de a no es 2 ni 3 ni 4" << endl;
	}


	// Condición ternaria (like a pro! 😎)
	d = c == 4 ? true : false;
	cout << "El valor de d es: " << d << endl;

	// Pero se puede abreviar aún más (like a REAL pro! 😎💥)
	d = c == 4;
	// Se pueden utilizar incluso dentro de los cout
	cout << "El valor de d es: " << (d ? "true" : "false") << endl;


	// También es posible incializar variables con este tipo de condiciones
	char e = b/2 == 1 ? 'S' : 'N';
	cout << "El valor de e es: '" << e << "'" << endl;


	// Estructura de control. Similar a if anidados
	char tipo = 'C';
	switch(tipo) {
		case 'A':
			cout << "El valor de tipo es 'A'" << endl;
			break;
		case 'B':
			cout << "El valor de tipo es 'B'" << endl;
			break;
		case 'C':
			cout << "El valor de tipo es 'C'" << endl;
			break;
		default:
			cout << "El valor de tipo no está cubierto por los casos" << endl;
			break;
	}

	// Casos anidados, sin default
	int otroTipo = 7;
	switch(otroTipo) {
		case 2:
		case 4:
		case 6:
			cout << "El valor de otroTipo es 2, 4 o 6" << endl;
		case 8:
			cout << "El valor de otroTipo es 8" << endl;
			break;
	}

	return 0;
}
