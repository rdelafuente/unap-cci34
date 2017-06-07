#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector< vector<int> > mat;
	vector< vector<int> >::iterator it;
	vector<int>::iterator vit;

	// Inicializa la matriz con 10 filas y 10 columnas
	for(int i = 0; i < 10; ++i) {
		vector<int> aux;
		for(int j = 0; j < 10; ++j) {
			aux.push_back(100 * i * j);
		}
		mat.push_back(aux);
	}

	// Recorrido normal de la matriz
	cout << "Recorrido normal" << endl;
	for(int i = 0; i < mat.size(); ++i) {
		for(int j = 0; j < mat[i].size(); ++j) {
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	// Recorrido con iterador
	cout << "Recorrido iterador" << endl;
	for(it = mat.begin(); it != mat.end(); ++it) {
		for(vit = (*it).begin(); vit != (*it).end(); ++vit) {
			cout << *vit << " ";
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}
