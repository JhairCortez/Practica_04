#include <iostream>
using namespace std;

int main() 
{
    double m, t, r;
    int o;
    cout << "seleccione una opcion:" << endl;
    cout << "1. bolivianos a dolares" << endl;
    cout << "2. dolares a bolivianos" << endl;
    cout << "opcion: ";
    cin >> o;
    if (o != 1 && o != 2) 
    {
        cout << "opcion no aceptada." << endl;
        return 1;
    }
    cout << "ingrese el monto a convertir: ";
    cin >> m;
    cout << "ingrese el tipo de cambio: ";
    cin >> t;
    if (t <= 0) 
    {
        cout << "el tipo de cambio debe ser mayor a 0." << endl;
        return 1;
    }
    if (o == 1) 
    {
        r = m / t;
        cout << monto << " bolivianos equivalen a " << r << " dolares." << endl;
    } else 
    {
        r = m * t;
        cout << m << " dolares equivalen a " << r << " boivianos." << endl;
    }
    return 0;
}
