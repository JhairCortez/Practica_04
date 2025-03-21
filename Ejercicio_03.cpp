#include <iostream>
using namespace std;
int main()
{
    int a, b, r;
    cout << "Ingrese dividendo: ";
    cin >> a;
    cout << "Ingrese divisor: ";
    cin >> b;
    r = a - (a / b) * b;
    cout << "El residuo es: " << r << endl;
    return 0;
}
