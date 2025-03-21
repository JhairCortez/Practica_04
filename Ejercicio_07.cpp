#include <iostream>
using namespace std;
void serie(int n)
{
    int t = 1;
    for(int i = 1; i <= n; i++)
    {
        cout << t << endl;
        t += (i % 2 == 0) ? 4 : 5;
    }
}
int main()
{
    int n;
    cout << "Ingrese el valor de N: ";
    cin >> n;
    serie(n);
    return 0;
}
