#include <iostream>
using namespace std;
void serie(int n)
{
    int signo = -1;
    for(int i = 1; i <= n; i++)
    {
        cout << i * signo << endl;
        if(i % 3 == 0)
            signo = -signo;
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
