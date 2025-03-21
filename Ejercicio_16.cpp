#include <iostream>
using namespace std;
int catalan(int n)
{
    int c = 1;
    for(int i = 2; i <= n; i++)
    {
        c = c * (2 * i) * (2 * i - 1) / (i * (i + 1));
    }
    return c;
}
void serie_catalan(int n)
{
    int suma = 0;
    for(int i = 0; i < n; i++)
    {
        int c = catalan(i);
        cout << c << endl;
        suma += c;
    }
    cout << "Sumatoria de los catalan: " << suma << endl;
}
int main()
{
    int n;
    cout << "Ingrese N: ";
    cin >> n;
    serie_catalan(n);
    return 0;
}
