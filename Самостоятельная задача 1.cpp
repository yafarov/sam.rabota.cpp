#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, x = 0;
    cin >> a >> b >> c >> d;
    for (int i = 10000; i <= 99999; i++)
        if (i % a == b && i % c == d)
        {
            cout << i << ' ';
            x = 1;
        }
    if (x == 0)
        cout << -1;
}