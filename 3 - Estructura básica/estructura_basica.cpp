// Estructura básica de un programa C++
// esto hace lo siguiente

/*
 * Librería(s) de cabecera (pre-procesador)
 *
 * Instruye al pre-procesador incluir una sección del código estándar de
 * C++, conocida como "cabecera iostream", que permite realizar operaciones
 * de entrada y salida, como escribir la salida ¡Hola Mundo! a la pantalla.
 */
#include <iostream>

/**
 * Función principal.
 * Esta función actúa como punto de entrada del programa.
 * Opcionalmente puede recibir parámetros
 *
 * Por definición (y convención), debe retornar siempre un entero.
 *
 * @return int
 */
int main()
{
	// std::cout	: (st)andard (c)haracter (out)put (pantalla del computador)
	// <<			: Inserta lo que sigue a cout
	// std:endl		: Escribe un salto de línea. Equivalente a << "\n"
	std::cout << "¡Hola Mundo!" << "\n";
	std::cout << "¡Hola Mundo 2!" << std::endl;

	// Valores posibles a devolver: 0, EXIT_SUCCESS, EXIT_FAILURE
	// Para hacer uso de EXIT_SUCCESS, EXIT_FAILURE se debe importar la directiva <cstdlib>
	return 0;
}
