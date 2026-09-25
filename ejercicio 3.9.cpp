#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double num1, num2, suma;

    cout << "Ingrese el primer numero decimal: ";
    cin >> num1;
    
    cout << "Ingrese el segundo numero decimal: ";
    cin >> num2;

    suma = num1 + num2;

    cout << "\nResultado alineado:" << endl;
    cout << fixed << setprecision(2) << right;
    cout << setw(10) << num1 << endl;
    cout << setw(10) << num2 << endl;
    cout << setw(10) << suma << endl;

    return 0;
}
