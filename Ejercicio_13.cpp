#include <iostream>
using namespace std;
bool es_perfecto(int n)
{
    int suma_divisores = 0;
    for(int i = 1; i <= n / 2; i++)
    {
        if(n % i == 0)
            suma_divisores += i;
    }
    return suma_divisores == n;
}
void serie_perfectos(int n)
{
    int c = 0, t = 1, suma = 0;
    while(c < n)
    {
        if(es_perfecto(t))
        {
            cout << t << endl;
            suma += t;
            c++;
        }
        t++;
    }
    cout << "Sumatoria de los perfectos: " << suma << endl;
}
int main()
{
    int n;
    cout << "Ingrese N: ";
    cin >> n;
    serie_perfectos(n);
    return 0;
}
