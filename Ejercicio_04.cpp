#include <iostream>
using namespace std;
void multiples_de_tres(int n)
{
    for(int i = 1; i <= n; i++)
    {
        cout << i * 3 << endl;
    }
}
int main()
{
    int n;
    cout << "Ingrese el valor de N: ";
    cin >> n;
    multiples_de_tres(n);
    return 0;
}
