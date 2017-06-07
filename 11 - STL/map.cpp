#include <iostream>
#include <map>
//#include<pair>
#include <string>

using namespace std;

int main() {
	map<int, string> my_map;
	map<int, string>::iterator it;
	map<string, int> my_map2;
	map<string, int>::iterator it2;

	string aux;
	for(int i = 0; i < 10; ++i){
		cin >> aux;
		my_map.insert(pair<int, string>(i*100, aux));
	}

	for(it = my_map.begin(); it != my_map.end(); ++it){
		cout << (*it).first << " " << (*it).second << endl;
		my_map2.insert(pair<string,int>((*it).second, (*it).first));
	}

	for(it2 = my_map2.begin(); it2 != my_map2.end(); ++it2){
		cout << (*it2).first << " " << (*it2).second << endl;
	}

	return 0;
}
