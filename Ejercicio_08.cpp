#include <iostream>
using namespace std;
int potencia(int b, int e)
{
    int p = 1;
    for(int i = 1; i <= e; i++)
    {
        p *= b;
    }
    return p;
}
int main()
{
    int b, e;
    cout << "Ingrese la base: ";
    cin >> b;
    cout << "Ingrese el exponente: ";
    cin >> e;
    cout << "Resultado: " << potencia(b, e) << endl;
    return 0;
}
