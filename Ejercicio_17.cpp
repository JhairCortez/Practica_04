#include <iostream>
using namespace std;
void serie_pell(int n)
{
    int a = 0, b = 1, suma = 0;
    for(int i = 1; i <= n; i++)
    {
        cout << a << endl;
        suma += a;
        int temp = a;
        a = 2 * b + a;
        b = temp;
    }
    cout << "Sumatoria de los pell: " << suma << endl;
}
int main()
{
    int n;
    cout << "Ingrese N: ";
    cin >> n;
    serie_pell(n);
    return 0;
}
