#include <iostream>

// Directiva para incluir funciones de tiempo.
// Mas info en: http://www.cplusplus.com/reference/ctime/
#include <ctime>

// Directiva para incluir funciones de ámbito general.
// Mas info en: http://www.cplusplus.com/reference/cstdlib/
#include <cstdlib>

using namespace std;

int main () {

   // Setea la semilla en base a la fecha/hora actual del sistema.
   // NULL es un macro de <ctime> que representa una expresión contante que se
   // evalúa como 0.
   // Ej: time(0) o time(NULL) retorna la fecha/hora actual en segundos desde 1
   // Enero 1, 1970
   srand((unsigned) time(NULL));
   //srand(time(0));

   // La semilla puede ser cualquier valor entero.
   //srand(10);

   // Si generamos la semilla siempre con el mismo número ( ej: srand(10) ),
   // los números aleatorios resultantes serán los mismos entre una ejecución y otra.
   // ¡Hagan la prueba!

   // Genera 10 números aleatorios
   int i, j;
   for(i = 0; i < 10; i++) {
     j = rand(); // Genera el número aleatorio actual
     cout <<"Número aleatorio: " << j << endl;
   }

   return 0;
}
