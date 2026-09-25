#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double num1, num2;
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << "El mayor es: " << num1 << endl;
    } else if (num2 > num1) {
        cout << "El mayor es: " << num2 << endl;
    } else {
        cout << "Son iguales" << endl;
    }

    return 0;
}