#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    const double PI = 3.141592653589793;
    double radio, longitud, area;

    cout << "Radio: ";
    cin >> radio;

    longitud = 2 * PI * radio;
    area = PI * pow(radio, 2);

    cout << "Longitud: " << longitud << endl;
    cout << "Area: " << area << endl;

    return 0;
}