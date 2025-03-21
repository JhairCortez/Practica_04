#include <iostream>
using namespace std;
double serie(double x, int n)
{
    double r = 0;
    int signo = 1;
    for(int i = 2; i <= n+1; i++)
    {
        double factorial = 1;
        for(int j = 1; j <= i; j++)
        {
            factorial *= j;
        }
        r += signo * (pow(x, i-1) / factorial);
        signo = -signo;
    }
    return r;
}
int main()
{
    double x;
    int n;
    cout << "Ingrese x: ";
    cin >> x;
    cout << "Ingrese N: ";
    cin >> n;
    cout << "Resultado de la serie: " << serie(x, n) << endl;
    return 0;
}
