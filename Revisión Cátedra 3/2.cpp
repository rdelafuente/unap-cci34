#include <iostream>

using namespace std;

int mcd(int, int);

int main()
{
  int a = -1, b = -1;
  do {
    cout << "Ingrese el valor de a = ";
    cin >> a;
    cout << "Ingrese el valor de b = ";
    cin >> b;
  } while (a < 0 || b < 0 );

  cout << "MCD(" << a << ", " << b << ") = " << mcd(a, b) << endl;

  return 0;
}

int mcd(int a, int b) {
  if(a < b) return 0;
  if(b == 0) return a;
  return mcd(b, a % b);
}
