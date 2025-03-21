#include <iostream>
using namespace std;
bool es_primo(int n)
{
    if(n < 2)
        return false;
    for(int i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}
void serie_primos(int n)
{
    int c = 0, t = 2, suma = 0;
    while(c < n)
    {
        if(es_primo(t))
        {
            cout << t << endl;
            suma += t;
            c++;
        }
        t++;
    }
    cout << "Sumatoria de los primos: " << suma << endl;
}
int main()
{
    int n;
    cout << "Ingrese N: ";
    cin >> n;
    serie_primos(n);
    return 0;
}
