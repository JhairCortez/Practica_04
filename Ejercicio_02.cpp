#include <iostream>
using namespace std;
int main()
{
    double m, tc, res;
    int op;
    cout << "Elija una opcion: 1. bolivianos a dolares 2. dolares a bolivianos: ";
    cin >> op;
    cout << "Ingrese monto: ";
    cin >> m;
    cout << "Ingrese tipo de cambio: ";
    cin >> tc;
    if (op == 1)
    {
        res = m / tc;
        cout << "Resultado: " << res << " dolares" << endl;
    }
    else if (op == 2)
    {
        res = m * tc;
        cout << "Resultado: " << res << " bolivianos" << endl;
    }
    return 0;
}
