#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main()

{
    double longitud, ancho, superficie;
    
    cout<<"ingrese la longitud de la habitacion"<<endl;
    cin>>longitud;
    
    cout<<"ingrese el ancho de la habitacion"<<endl;
    cin>>ancho;
    
    superficie = longitud*ancho;
    
    cout << fixed << setprecision(4);
    cout << "La superficie es: " << superficie << endl;
    
    return 0;
}