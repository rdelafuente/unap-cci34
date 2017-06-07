#include <iostream>

using namespace std;

const short FIL = 4;
const short COL = 4;

void rellenar_matriz(int matriz[FIL][COL]);
void imprimir_matriz(int matriz[FIL][COL]);

void copiar_valores(int m1[FIL][COL], int m2[FIL][COL]);

void rellenar_diagonal_superior_izq(int matriz[FIL][COL]);
void rellenar_diagonal_superior_der(int matriz[FIL][COL]);
void rellenar_diagonal_inferior_izq(int matriz[FIL][COL]);
void rellenar_diagonal_inferior_der(int matriz[FIL][COL]);

int main()
{
  int matriz[FIL][COL];
  int original[FIL][COL];

  // Rellena la matriz e imprime los valores ingresados
  rellenar_matriz(matriz);
  imprimir_matriz(matriz);

  // Guardo los valores originales de "matriz" en "original"
  //original = matriz; // ESTO NO FUNCIONA! Se deben copiar valor a valor
  copiar_valores(original, matriz);

  cout << endl;
  cout << "################" << endl;
  cout << "Diagonal SUP IZQ" << endl;
  cout << "################" << endl;
  rellenar_diagonal_superior_izq(matriz);
  imprimir_matriz(matriz);

  // Traspaso los valores de "original" de vuelta a "matriz"
  copiar_valores(matriz, original);

  cout << endl;
  cout << "################" << endl;
  cout << "Diagonal SUP DER" << endl;
  cout << "################" << endl;
  rellenar_diagonal_superior_der(matriz);
  imprimir_matriz(matriz);

  // Traspaso los valores de "original" de vuelta a "matriz"
  copiar_valores(matriz, original);

  cout << endl;
  cout << "################" << endl;
  cout << "Diagonal INF DER" << endl;
  cout << "################" << endl;
  rellenar_diagonal_inferior_der(matriz);
  imprimir_matriz(matriz);

  // Traspaso los valores de "original" de vuelta a "matriz"
  copiar_valores(matriz, original);

  cout << endl;
  cout << "################" << endl;
  cout << "Diagonal INF IZQ" << endl;
  cout << "################" << endl;
  rellenar_diagonal_inferior_izq(matriz);
  imprimir_matriz(matriz);

  return 0;
}

/**
 * Rellena la matriz con valores ingresados por teclado
 * @param int[][] Matriz a rellenar
 */
void rellenar_matriz(int matriz[FIL][COL]) {
  for(int i = 0; i < FIL; i++) {
    for(int j = 0; j < COL; j++) {
      //matriz[i][j] = 1; // Rellenamos solo con 1's
      // Solicitamos los valores por teclado
      cout << "matriz[" << i << "][" << j << "] = ";
      cin >> matriz[i][j];
    }
    cout << endl;
  }
}

/**
 * Imprime los valores de la matriz
 * @param int[][] Matriz a imprimir
 */
void imprimir_matriz(int matriz[FIL][COL]) {
  for(int i = 0; i < FIL; i++) {
    for(int j = 0; j < COL; j++) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }
}

/**
 * Rellena con 0 la diagonal superior izquierda de la matriz
 * @param int[][] Matriz a modificar
 */
void rellenar_diagonal_superior_izq(int matriz[FIL][COL]) {
  for(int i = 0; i < FIL; i++) {
    for(int j = 0; j < COL; j++) {
      if(i + j < COL) {
        matriz[i][j] = 0;
      }
    }
  }
}

/**
 * Rellena con 0 la diagonal superior derecha de la matriz
 * @param int[][] Matriz a modificar
 */
void rellenar_diagonal_superior_der(int matriz[FIL][COL]) {
  for(int i = 0; i < FIL; i++) {
    for(int j = 0; j < COL; j++) {
      if(j >= i) {
        matriz[i][j] = 0;
      }
    }
  }
}

/**
 * Rellena con 0 la diagonal inferior derecha de la matriz
 * @param int[][] Matriz a modificar
 */
void rellenar_diagonal_inferior_der(int matriz[FIL][COL]) {
  for(int i = 0; i < FIL; i++) {
    for(int j = 0; j < COL; j++) {
      if(i + j >= COL - 1) {
        matriz[i][j] = 0;
      }
    }
  }
}

/**
 * Rellena con 0 la diagonal inferior izquierda de la matriz
 * @param int[][] Matriz a modificar
 */
void rellenar_diagonal_inferior_izq(int matriz[FIL][COL]) {
  for(int i = 0; i < FIL; i++) {
    for(int j = 0; j < COL; j++) {
      if(j <= i) {
        matriz[i][j] = 0;
      }
    }
  }
}

/**
 * Copia los valores de la matriz m2 a m1
 * @param int[][] Matriz de destino
 * @param int[][] Matriz de origen
 */
void copiar_valores(int destino[FIL][COL], int origen[FIL][COL]) {
  for(int i = 0; i < FIL; i++) {
    for(int j = 0; j < COL; j++) {
        destino[i][j] = origen[i][j];
    }
  }
}
