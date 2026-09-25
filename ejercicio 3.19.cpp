#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    int anyo, A, B, C, D, E, N;

    cout << "Año: ";
    cin >> anyo;

    A = anyo % 19;
    B = anyo % 4;
    C = anyo % 7;
    D = (19 * A + 24) % 30;
    E = (2 * B + 4 * C + 6 * D + 5) % 7;
    N = 22 + D + E;

    if (N <= 31) {
        cout << N << " de Marzo" << endl;
    } else {
        cout << (N - 31) << " de Abril" << endl;
    }

    return 0;
}
