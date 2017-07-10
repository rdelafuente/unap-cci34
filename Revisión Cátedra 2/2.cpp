#include <iostream>
#include <vector>

using namespace std;

vector< vector<int> > matriz_dinamica(int numero);
void imprimir_matriz(vector< vector<int> >);

int main()
{
  int filas = 0;
  cout << "Ingrese el número de filas de la matriz: ";
  cin >> filas;
  if(filas % 2 != 0) {
    do {
      cerr << "Por favor, ingrese un número par: ";
      cin >> filas;
    } while(filas % 2 != 0);
  }

  vector< vector<int> > matriz = matriz_dinamica(filas);
  imprimir_matriz(matriz);

  return 0;
}

vector< vector<int> > matriz_dinamica(int filas) {
  vector< vector<int> > matriz;
  // Setea la semilla dinámica
  srand(0);
  // Itera siempre sobre las filas pares
  for(int i = 0; i < filas; i++) {
    if(i % 2 == 0) {
      cout << "Ingrese el número de elementos que tendrá la fila impar " << i + 1 << ": ";
      int num;
      cin >> num;

      // Elemento par (vector de un elemento)
      vector<int> vPar;
      vPar.push_back(num);
      matriz.push_back(vPar);
    } else {

      // Elemento impar (vector de num elementos)
      int num = matriz.at(i - 1).at(0);
      vector<int> vImpar;
      for(int j = 0; j < num; j++) {
        int aleatorio = rand() % 10 + 1;
        vImpar.push_back(aleatorio);
      }
      matriz.push_back(vImpar);
    }
  }

  return matriz;
}

void imprimir_matriz(vector< vector<int> > matriz) {
  for(int i = 0; i < matriz.size(); i++) {
    if(i % 2 == 0) {
      cout << matriz.at(i).at(0) << endl;
    } else {
      vector<int> vec = matriz.at(i);
      for(int j = 0; j < vec.size(); j++) {
        cout << vec.at(j) << " ";
      }
      cout << endl;
    }
  }
}
