#include <iostream>

using namespace std;

int main()
{
  // Utilizamos esta variable para inicializar arrays de 10 elementos
  const unsigned short MAX = 10;
  int i, j;


  // Declaración de array unidimensional con 10 valores int
  int numeros[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // Itera e imprime valores
  for(i = 0; i < MAX; i++) {
    cout << numeros[i] << " ";
  }
  cout << "\n\n";


  // Inicializa un array unidimensional con 10 valores double
  double dobles[MAX];
  // Itera, asigna e imprime valores
  for(i = 0; i < MAX; i++) {
    dobles[i] = (double)((i + 1) * 1.1);
    cout << dobles[i] << " ";
  }
  cout << "\n\n";

  // Iterando de forma inversa...
  for(i = MAX - 1; i >= 0; i--) {
    cout << numeros[i] << " ";
  }
  cout << "\n\n";


  // Declaración un array multidimensional
  int matriz[3][MAX] = {
    {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, // Fila 0
    {11, 12, 13, 14, 15, 16, 17, 18, 19, 20}, // Fila 1
    {21, 22, 23, 24, 25, 26, 27, 28, 29, 30} // Fila 2
  };

  // Itera sobre las filas y columnas e imprime los valores
  for(i = 0; i < 3; i++) {
    for(j = 0; j < MAX; j++) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }
  cout << "\n\n";

  // Declaración de Matriz de 3 filas y 3 columnas
  int matriz2[3][3];
  // Itera, asigna e imprime los valores
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3; j++) {
      matriz2[j][i] = (i + 1) * (j + 1); // Asigna el valor i * j en la celda
      // Imprime el contenido asignado
      cout << matriz2[j][i] << " ";
    }
    cout << endl;
  }
  cout << "\n\n";


  return 0;
}
