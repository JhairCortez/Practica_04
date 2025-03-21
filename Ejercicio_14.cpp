#include <iostream>
using namespace std;
void serie_triangular(int n)
{
    int suma = 0;
    for(int i = 1; i <= n; i++)
    {
        int triangular = i * (i + 1) / 2;
        cout << triangular << endl;
        suma += triangular;
    }
    cout << "Sumatoria de los triangulares: " << suma << endl;
}
int main()
{
    int n;
    cout << "Ingrese N: ";
    cin >> n;
    serie_triangular(n);
    return 0;
}
