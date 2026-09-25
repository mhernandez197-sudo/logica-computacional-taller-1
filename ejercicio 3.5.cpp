#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, b, aux;

    cout << "Ingrese A: ";
    cin >> a;
    cout << "Ingrese B: ";
    cin >> b;

    aux = a;
    a = b;
    b = aux;

    cout << "A = " << a << ", B = " << b << endl;

    return 0;
}