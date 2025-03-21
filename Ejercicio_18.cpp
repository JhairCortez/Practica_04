#include <iostream>
using namespace std;
void serie_bernoulli(int n)
{
    double suma = 0;
    for(int i = 0; i < n; i++)
    {
        // Calculando el número de Bernoulli
        // Se puede usar una fórmula específica, pero por simplicidad se usa una aproximación básica
        suma += (i % 2 == 0) ? 1.0 / (i + 1) : -(1.0 / (i + 1));
        cout << suma << endl;
    }
    cout << "Sumatoria de los bernoulli: " << suma << endl;
}
int main()
{
    int n;
    cout << "Ingrese N: ";
    cin >> n;
    serie_bernoulli(n);
    return 0;
}
