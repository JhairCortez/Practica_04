#include <iostream>
using namespace std;
void serie_cubos(int n)
{
    int suma = 0;
    for(int i = 1; i <= n; i++)
    {
        int cubo = i * i * i;
        cout << cubo << endl;
        suma += cubo;
    }
    cout << "Sumatoria de los cubos: " << suma << endl;
}
int main()
{
    int n;
    cout << "Ingrese N: ";
    cin >> n;
    serie_cubos(n);
    return 0;
}
