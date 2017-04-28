#include <iostream>

using namespace std;

int main()
{

	cout << "Caracteres" << endl;
	cout << "----------" << endl;
	cout << "char :\t\t" << sizeof(char) << endl;
	cout << "char16_t :\t" << sizeof(char16_t) << endl;
	cout << "char32_t :\t" << sizeof(char32_t) << endl;
	cout << "wchar_t :\t" << sizeof(wchar_t) << endl;

	cout << endl;

	cout << "Enteros (signed)" << endl;
	cout << "----------------" << endl;
	cout << "char :\t\t" << sizeof(signed char) << endl;
	cout << "short :\t\t" << sizeof(short) << endl;
	cout << "int :\t\t" << sizeof(int) << endl;
	cout << "long :\t\t" << sizeof(long) << endl;
	cout << "long long :\t" << sizeof(long long) << endl;

	cout << endl;

	cout << "Enteros (unsigned)" << endl;
	cout << "------------------" << endl;
	cout << "unsigned char :\t\t" << sizeof(unsigned char) << endl;
	cout << "unsigned short :\t" << sizeof(unsigned short) << endl;
	cout << "unsigned int :\t\t" << sizeof(unsigned int) << endl;
	cout << "unsigned long :\t\t" << sizeof(unsigned long) << endl;
	cout << "unsigned long long :\t" << sizeof(unsigned long long) << endl;

	cout << endl;

	cout << "Punto flotante" << endl;
	cout << "--------------" << endl;
	cout << "float :\t\t" << sizeof(float) << endl;
	cout << "double :\t" << sizeof(double) << endl;
	cout << "long double :\t" << sizeof(long double) << endl;

	cout << endl;

	cout << "BOOLEANOS" << endl;
	cout << "---------" << endl;
	cout << "bool :\t" << sizeof(bool) << endl;

	cout << endl;

	unsigned int prueba = -1;
	cout << prueba << endl;

	// signed char puede almancenar hasta 256 valores únicos, es decir de 0 a 255
	// ¿Qué pasa si almacenamos números más grandes?
	//signed char a = 300;
	//signed char b = 257;


	// R: El compilador realiza una conversión implícita a int, restando 256 (2^8)
	// al valor original (overflow)

	// La suma resultante debería ser 45
	//cout << "signed char a + signed char b = " << a + b << endl;

	// ¿Es posible conocer el valor mínimo y máximo que puede almancenar cada tipo de variable?
	// ¿Los valores pueden variar entre una arquitectura y otra?

	return 0;
}
