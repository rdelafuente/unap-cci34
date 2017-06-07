#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
	set<int> my_set;
	set<int>::iterator it;

	set<string> my_set2;
	set<string>::iterator it2;

	int aux;

	for(int i = 0; i <10; ++i) {
		aux = i * i;
		my_set.insert(aux);
	}

	for(it = my_set.begin(); it != my_set.end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;

	string aux2;

  for(int i = 0; i <10; ++i) {
    cin >> aux2;
    my_set2.insert(aux2);
  }

  for(it2 = my_set2.begin(); it2 != my_set2.end(); ++it2) {
    cout << *it2 << " ";
  }
  cout << endl;

	return 0;
}
