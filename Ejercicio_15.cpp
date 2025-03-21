#include <iostream>
using namespace std;
void serie_lucas(int n)
{
    int a = 2, b = 1, suma = 0;
    for(int i = 1; i <= n; i++)
    {
        cout << a << endl;
        suma += a;
        int temp = a;
        a = a + b;
        b = temp;
    }
    cout << "Sumatoria de los lucas: " << suma << endl;
}
int main()
{
    int n;
    cout << "Ingrese N: ";
    cin >> n;
    serie_lucas(n);
    return 0;
}
