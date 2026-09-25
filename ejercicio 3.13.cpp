#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    double numero = 7.123456;

    cout << fixed;
    cout << setprecision(1) << numero << endl;
    cout << setprecision(2) << numero << endl;
    cout << setprecision(3) << numero << endl;
    cout << setprecision(4) << numero << endl;
    cout << setprecision(5) << numero << endl;
    cout << setprecision(6) << numero << endl;

    return 0;
}