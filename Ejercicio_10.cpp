#include <iostream>
using namespace std;
bool es_niven(int n)
{
    int suma_d = 0, temp = n;
    while(temp > 0)
    {
        suma_d += temp % 10;
        temp /= 10;
    }
    return n % suma_d == 0;
}
void serie_niven(int n)
{
    int c = 0, t = 1;
    while(c < n)
    {
        if(es_niven(t))
        {
            cout << t << endl;
            c++;
        }
        t++;
    }
}
int main()
{
    int n;
    cout << "Ingrese N: ";
    cin >> n;
    serie_niven(n);
    return 0;
}
